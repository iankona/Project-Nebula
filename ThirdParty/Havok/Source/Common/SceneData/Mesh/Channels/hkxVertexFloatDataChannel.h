/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef INC_VERTEX_FLOAT_DATA_CHANNEL_H
#define INC_VERTEX_FLOAT_DATA_CHANNEL_H

/// Meta information
extern const class hkClass hkxVertexFloatDataChannelClass;


	/// Stores per-vertex float values
class hkxVertexFloatDataChannel : public hkReferencedObject
{
	//+vtable(true)
	//+version(1)
	public:

		HK_DECLARE_CLASS_ALLOCATOR( HK_MEMORY_CLASS_SCENE_DATA );
		HK_DECLARE_REFLECTION();

		hkxVertexFloatDataChannel() : m_dimensions(FLOAT) { }
		hkxVertexFloatDataChannel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_perVertexFloats(f) { }

		enum VertexFloatDimensions
		{
			FLOAT = 0,
			DISTANCE = 1,
			ANGLE = 2
		};

		//
		// Members
		//
	public:

		hkArray<hkFloat32> m_perVertexFloats;
		
		hkEnum< hkxVertexFloatDataChannel::VertexFloatDimensions, hkUint8> m_dimensions;

};
#endif // INC_VERTEX_FLOAT_DATA_CHANNEL_H

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
