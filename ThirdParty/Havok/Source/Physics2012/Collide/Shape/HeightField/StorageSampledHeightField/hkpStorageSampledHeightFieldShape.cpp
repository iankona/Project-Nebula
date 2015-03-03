/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics2012/Collide/hkpCollide.h>
#include <Physics2012/Collide/Shape/HeightField/StorageSampledHeightField/hkpStorageSampledHeightFieldShape.h>

hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape( const hkpSampledHeightFieldBaseCinfo& info, hkArray<hkReal>& samples )
	:	hkpSampledHeightFieldShape(info, hkpSampledHeightFieldShape::HEIGHTFIELD_STORAGE),
		m_triangleFlip(false)
{
	m_storage = samples;
}

hkpStorageSampledHeightFieldShape::hkpStorageSampledHeightFieldShape( const hkpSampledHeightFieldShape* hf )
{
	m_heightfieldType = hkpSampledHeightFieldShape::HEIGHTFIELD_STORAGE;
	m_xRes = hf->m_xRes;
	m_zRes = hf->m_zRes;
	m_coarseness = hf->m_coarseness;
	if (hf->m_coarseness)
	{
		m_coarseTreeData = hf->m_coarseTreeData;
	}	
	m_triangleFlip = hf->getTriangleFlip();
	m_heightCenter = hf->m_heightCenter;
	m_intToFloatScale = hf->m_intToFloatScale;
	m_floatToIntScale = hf->m_floatToIntScale;
	m_floatToIntOffsetFloorCorrected = hf->m_floatToIntOffsetFloorCorrected;
	m_extents = hf->m_extents;

	m_storage.setSize( m_xRes * m_zRes );

	for(int z = 0; z < m_zRes; z++)
	{
		for(int x = 0; x < m_xRes; x++)
		{
			m_storage[z*m_xRes + x] = hf->getHeightAt( x, z );
		}
	}

}

#if !defined(HK_PLATFORM_SPU)

int hkpStorageSampledHeightFieldShape::calcSizeForSpu(const CalcSizeForSpuInput& input, int spuBufferSizeLeft) const
{
	int sizeOfThis = sizeof(*this);
	
	// early out if this will not fit into the spu's remaining shape buffer
	if( sizeOfThis > spuBufferSizeLeft )
	{		
		return -1;
	}
	
	// Allow shape to run on SPU
	return sizeOfThis;
}

#endif

void hkpStorageSampledHeightFieldShape::collideSpheres( const CollideSpheresInput& input, SphereCollisionOutput* outputArray) const
{
	hkSampledHeightFieldShape_collideSpheres(*this, input, outputArray);
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