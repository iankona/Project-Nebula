/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKP_INTERNAL_H
#define HKP_INTERNAL_H

#include <Common/Base/hkBase.h>
#include <Common/Base/Types/Geometry/Aabb/hkAabb.h>
#include <Common/Base/Types/Geometry/Sphere/hkSphere.h>
#include <Common/Base/Types/Physics/ContactPoint/hkContactPoint.h>

#include <Geometry/Internal/Types/hkcdVertex.h>

#include <Physics2012/Collide/Shape/hkpShape.h>
#include <Physics2012/Collide/Shape/hkpShapeType.h>
#include <Physics2012/Collide/Shape/Query/hkpShapeRayCastOutput.h>

#include <Physics2012/Collide/Dispatch/hkpCollisionDispatcher.h>

#include <Physics2012/Collide/Agent/Collidable/hkpCollidable.h>
#include <Physics2012/Collide/Agent/ContactMgr/hkpContactMgr.h>
#include <Physics2012/Collide/Agent/hkpProcessCdPoint.h>
#include <Physics2012/Collide/Agent/Collidable/hkpCdPoint.h>
#include <Physics2012/Collide/Agent/Query/hkpCdPointCollector.h>
#include <Physics2012/Collide/Agent/hkpCollisionAgent.h>
#include <Physics2012/Collide/Agent/hkpCollisionInput.h>

#include <Physics2012/Dynamics/Entity/hkpEntity.h>
#include <Physics2012/Dynamics/Constraint/hkpConstraintInstance.h>
#include <Physics2012/Dynamics/Action/hkpAction.h>

#endif // HKP_INTERNAL_H

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
