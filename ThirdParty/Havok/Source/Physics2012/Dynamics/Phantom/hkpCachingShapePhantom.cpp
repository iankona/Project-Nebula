/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics2012/Dynamics/hkpDynamics.h>


#include <Common/Base/Algorithm/Sort/hkSort.h>
#include <Physics2012/Dynamics/Phantom/hkpPhantomType.h>
#include <Physics2012/Dynamics/Phantom/hkpCachingShapePhantom.h>
#include <Physics2012/Dynamics/Constraint/hkpConstraintOwner.h>

#include <Physics2012/Collide/Agent/hkpCollisionInput.h>
#include <Physics2012/Collide/Agent/Query/hkpLinearCastCollisionInput.h>
#include <Physics2012/Collide/Agent/Query/hkpCdPointCollector.h>
#include <Physics2012/Collide/Agent/Query/hkpCdBodyPairCollector.h>
#include <Physics2012/Collide/Agent/hkpCollisionAgent.h>
#include <Physics2012/Collide/Dispatch/hkpCollisionDispatcher.h>
#include <Physics2012/Collide/Query/CastUtil/hkpLinearCastInput.h>
#include <Common/Base/Types/Geometry/Aabb/hkAabb.h>
#include <Physics2012/Dynamics/World/hkpWorld.h>
#include <Physics2012/Collide/Filter/hkpCollisionFilter.h>
#include <Physics2012/Collide/Agent/Collidable/hkpCollidable.h>

hkpCachingShapePhantom::hkpCachingShapePhantom( const hkpShape* shape, const hkTransform& transform, hkUint32 collisionFilterInfo )
:	hkpShapePhantom( shape, transform ),
	m_orderDirty( false )
{
	m_collidable.setCollisionFilterInfo( collisionFilterInfo );
}

hkpCachingShapePhantom::~hkpCachingShapePhantom()
{
	hkpConstraintOwner constraintOwner;
	for (int i = m_collisionDetails.getSize()-1; i>=0; i--)
	{
		CollisionDetail& cd= m_collisionDetails[i];
		cd.m_agent->cleanup(constraintOwner);
	}

	m_collisionDetails.clear();

}

// hkpPhantom clone functionality
hkpPhantom* hkpCachingShapePhantom::clone() const
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RO );

	const hkpCollidable* c = getCollidable();
	hkpCachingShapePhantom* csp = new hkpCachingShapePhantom(c->getShape(), m_motionState.getTransform(), c->getCollisionFilterInfo() );

	// stuff that isn 't in the ctor (the array of listeners (not ref counted etc, assume clone wants the same list to start with)
	csp->m_overlapListeners = m_overlapListeners;
	csp->m_phantomListeners = m_phantomListeners;

	csp->copyProperties( this );

	return csp;
}

//hkWorldOperation::Result hkpCachingShapePhantom::setShape( hkpShape* shape )
//{
//	HK_ASSERT2(0x7a56c795, getWorld() == HK_NULL, HK_PHANTOM_SHAPE_CHANGE_ERROR_TEXT);
//
//	hkWorldOperation::Result baseResult = hkpShapePhantom::setShape(shape);
//
//	if (baseResult == hkWorldOperation::DONE)
//	{
//		//
//		// Update the agents and AABB if we have been added to the world. This is allowable if you know *for certain* that it will not
//		// corrupt any hkCachingShapePhantoms - See assert above.
//		//
//		if (getWorld())
//		{
//			//
//			//	Replace the agents
//			//
//			{
//				hkpCollisionInput* input = getWorld()->getCollisionInput();
//				for (int i = m_collisionDetails.getSize()-1; i>=0; i--)
//				{
//					CollisionDetail& cd= m_collisionDetails[i];
//					cd.m_agent->cleanup();
//					cd.m_agent = input->m_dispatcher->getNewCollisionAgent( m_collidable, *cd.m_collidable, *input, HK_NULL);
//				}
//			}
//
//			//
//			//	Update the AABB
//			//
//			{
//				HK_ASSERT2( 0xf0432312, !getWorld()->areCriticalOperationsLocked(),"You cannot call hkpCachingShapePhantom::setShape in a callback (world must not be locked)");
//				hkAabb aabb;
//				hkReal halfTolerance = 0.5f * m_world->getCollisionInput()->getTolerance();
//				shape->getAabb( m_motionState.getTransform(), halfTolerance, aabb );
//				updateBroadPhase( aabb );
//			}
//		}
//	}
//
//	return baseResult;
//}

hkpPhantomType hkpCachingShapePhantom::getType() const
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RO );
	return HK_PHANTOM_CACHING_SHAPE;
}

void hkpCachingShapePhantom::setPositionAndLinearCast( const hkVector4& position, const hkpLinearCastInput& input, hkpCdPointCollector& castCollector, hkpCdPointCollector* startCollector )
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RW, this, HK_ACCESS_RW );

	HK_ASSERT2(0x14A410E1, m_world != HK_NULL, "hkpCachingShapePhantom has not been added to an hkpWorld.");

	m_motionState.getTransform().setTranslation( position );

	hkAabb aabb;
	hkVector4 path;

	//
	//	calculate the correct AABB and update the broadphase
	//
	{
		hkReal halfTolerance = 0.5f * m_world->getCollisionInput()->getTolerance();
		m_collidable.getShape()->getAabb( m_motionState.getTransform(), halfTolerance + input.m_startPointTolerance, aabb );

		path.setSub( input.m_to, position );
		hkVector4 zero; zero.setZero();
		hkVector4 pathMin; pathMin.setMin( zero, path );
		hkVector4 pathMax; pathMax.setMax( zero, path );

		aabb.m_min.add( pathMin );
		aabb.m_max.add( pathMax );
		updateBroadPhase( aabb );
	}

	//
	//	Setup the linear cast input
	//
	hkpLinearCastCollisionInput lcInput;
	{
		lcInput.set( *m_world->getCollisionInput() );
		lcInput.setPathAndTolerance( path, input.m_startPointTolerance );
		lcInput.m_maxExtraPenetration = input.m_maxExtraPenetration;
	}


	//
	//	Do the cast
	//
	{
		for ( int i = m_collisionDetails.getSize() - 1; i >= 0; i-- )
		{
			CollisionDetail& det = m_collisionDetails[i];
			det.m_agent->linearCast( m_collidable, *det.m_collidable, lcInput, castCollector, startCollector );
		}
	}
}

void hkpCachingShapePhantom::setTransformAndLinearCast( const hkTransform& transform, const hkpLinearCastInput& input, hkpCdPointCollector& castCollector, hkpCdPointCollector* startCollector )
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RW, this, HK_ACCESS_RW );

	HK_ASSERT2(0x14A410E1, m_world != HK_NULL, "hkpCachingShapePhantom has not been added to an hkpWorld.");

	m_motionState.getTransform().setRotation(transform.getRotation());
	hkpCachingShapePhantom::setPositionAndLinearCast(transform.getTranslation(), input, castCollector, startCollector);
}

void hkpCachingShapePhantom::getClosestPoints( hkpCdPointCollector& collector, const hkpCollisionInput* input )
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RW );

	HK_ASSERT2(0x14A410E1, m_world != HK_NULL, "hkpCachingShapePhantom has not been added to an hkpWorld.");
	if (!input)
	{
		input = m_world->getCollisionInput();
	}
	for ( int i = m_collisionDetails.getSize() - 1; i >= 0; i-- )
	{
		CollisionDetail& det = m_collisionDetails[i];
		det.m_agent->getClosestPoints ( m_collidable, *det.m_collidable, *input, collector );
	}
}

void hkpCachingShapePhantom::getPenetrations( hkpCdBodyPairCollector& collector, const hkpCollisionInput* input )
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RW );

	HK_ASSERT2(0x14A410E1, m_world != HK_NULL, "hkpCachingShapePhantom has not been added to an hkpWorld.");

	HK_WARN_ONCE_ON_DEBUG_IF( m_orderDirty, 0x5fe59c18, "Phantom queried for collidables without call to ensureDeterministicOrder(). The result is potentially nondeterministic.");

	if (!input)
	{
		input = m_world->getCollisionInput();
	}
	for ( int i = m_collisionDetails.getSize() - 1; i >= 0; i-- )
	{
		CollisionDetail& det = m_collisionDetails[i];
		det.m_agent->getPenetrations ( m_collidable, *det.m_collidable, *input, collector );
		if ( collector.getEarlyOut() )
		{
			break;
		}
	}
}

hkBool hkpCachingShapePhantom::isOverlappingCollidableAdded( const hkpCollidable* collidable )
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_IGNORE, this, HK_ACCESS_RO );

	for( int i = 0; i<m_collisionDetails.getSize(); i++ )
	{
		if( m_collisionDetails[i].m_collidable == collidable )
		{
			return true;
		}
	}
	return false;
}



void hkpCachingShapePhantom::addOverlappingCollidable( hkpCollidable* collidable )
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RW );

	// note: the filtering happens before this function is called
	if ( collidable->getShape() != HK_NULL )
	{
		hkpCollidableAccept accept = fireCollidableAdded( collidable );

		if ( accept == HK_COLLIDABLE_ACCEPT  )
		{
			CollisionDetail& det = m_collisionDetails.expandOne();
			hkpProcessCollisionInput input = *getWorld()->getCollisionInput();

			input.m_collisionQualityInfo = input.m_dispatcher->getCollisionQualityInfo( hkpCollisionDispatcher::COLLISION_QUALITY_PSI );
			input.m_createPredictiveAgents = false;

			det.m_agent = input.m_dispatcher->getNewCollisionAgent( m_collidable, *collidable, input, HK_NULL);
			det.m_collidable = collidable;
			m_orderDirty = true;
		}
	}
}

void hkpCachingShapePhantom::removeOverlappingCollidable( hkpCollidable* collidable )
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RW );
	hkpConstraintOwner constraintOwner;

	if ( collidable->getShape() != HK_NULL )
	{
		//
		//	We are not checking the filter, so our implementation is a little bit
		//  forgiving, if people change filters on the fly
		//
		for ( int i = m_collisionDetails.getSize() - 1; i >= 0; i-- )
		{
			if ( m_collisionDetails[i].m_collidable == collidable )
			{
				fireCollidableRemoved( collidable, true );
				hkpCollisionAgent* agent = m_collisionDetails[i].m_agent;
				if (agent)
				{
					agent->cleanup(constraintOwner );
				}
				m_collisionDetails.removeAt( i );
				m_orderDirty = true;
				return;
			}
		}
		fireCollidableRemoved( collidable, false );
	}
}

void hkpCachingShapePhantom::updateShapeCollectionFilter()
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RW );

	HK_ASSERT2(0x14A410E1, m_world != HK_NULL, "hkpCachingShapePhantom has not been added to an hkpWorld.");

	hkpCollisionInput input = *getWorld()->getCollisionInput();
	hkpConstraintOwner constraintOwner;

	for( int i = 0; i < m_collisionDetails.getSize(); i++ )
	{
		m_collisionDetails[i].m_agent->updateShapeCollectionFilter( m_collidable, *m_collisionDetails[i].m_collidable, input, constraintOwner );
	}
}

void hkpCachingShapePhantom::deallocateInternalArrays()
{
	HK_ACCESS_CHECK_WITH_PARENT( m_world, HK_ACCESS_RO, this, HK_ACCESS_RW );

	// Need to deallocate any arrays that are 0 size
	// else warn user that they should call the in place destructor

	// Collision Details
	if (m_collisionDetails.getSize() == 0)
	{
		m_collisionDetails.clearAndDeallocate();
	}
	else
	{
		HK_WARN(0x234f224e, "Phantom at address " << this << " has non-zero m_collisionDetails array.\nPlease call in-place destructor to deallocate.\n");
	}

	hkpShapePhantom::deallocateInternalArrays();
}

class hkpCachingShapePhantom::OrderByUid
{
	public:
		HK_FORCE_INLINE hkBool operator() ( const CollisionDetail& a, const CollisionDetail& b )
		{
			return a.m_collidable->getBroadPhaseHandle()->m_id < b.m_collidable->getBroadPhaseHandle()->m_id;
		}
};

void hkpCachingShapePhantom::ensureDeterministicOrder()
{
	if ( m_orderDirty )
	{
		// Ensure determinism by sorting on broadphase id.
		hkSort( m_collisionDetails.begin(), m_collisionDetails.getSize(), OrderByUid() );
		m_orderDirty = false;
	}
}

/*
 * Havok SDK - Base file, BUILD(#20130912)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2013
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */
