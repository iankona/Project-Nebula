/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

inline hkxVertexBuffer::hkxVertexBuffer()
{ 
}
		
inline int hkxVertexBuffer::getNumVertices() const 
{ 
	return m_data.m_numVerts; 
}

inline int hkxVertexBuffer::getVectorStride() const
{
	return m_data.m_vectorStride;
}

inline int hkxVertexBuffer::getFloatStride() const
{
	return m_data.m_floatStride;
}

inline int hkxVertexBuffer::getUint32Stride() const
{
	return m_data.m_uint32Stride;
}

inline int hkxVertexBuffer::getUint16Stride() const
{
	return m_data.m_uint16Stride;
}

inline int hkxVertexBuffer::getUint8Stride() const
{
	return m_data.m_uint8Stride;
}

inline const hkxVertexDescription& hkxVertexBuffer::getVertexDesc() const 
{ 
	return m_desc;
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
