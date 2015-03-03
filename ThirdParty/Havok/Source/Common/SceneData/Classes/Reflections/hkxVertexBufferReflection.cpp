/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

//HK_REFLECTION_PARSER_EXCLUDE_FILE

// Autogenerated by generateReflections.py (reflectedClasses.py)
// Changes will not be lost unless:
// - The workspace is re-generated using build.py
// - The corresponding reflection database (reflection.db) is deleted
// - The --force-output or --force-rebuild option is added to the pre-build generateReflection.py execution

// Generated from 'Common/SceneData/Mesh/hkxVertexBuffer.h'
#include <Common/SceneData/hkSceneData.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/SceneData/Mesh/hkxVertexBuffer.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkxVertexBufferVertexDataClass;
extern const hkClass hkxVertexDescriptionClass;

//
// Class hkxVertexBuffer::VertexData
//
static const hkInternalClassMember hkxVertexBuffer_VertexDataClass_Members[] =
{
	{ "vectorData", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_vectorData), HK_NULL },
	{ "floatData", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_floatData), HK_NULL },
	{ "uint32Data", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_uint32Data), HK_NULL },
	{ "uint16Data", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_uint16Data), HK_NULL },
	{ "uint8Data", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_uint8Data), HK_NULL },
	{ "numVerts", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_numVerts), HK_NULL },
	{ "vectorStride", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_vectorStride), HK_NULL },
	{ "floatStride", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_floatStride), HK_NULL },
	{ "uint32Stride", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_uint32Stride), HK_NULL },
	{ "uint16Stride", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_uint16Stride), HK_NULL },
	{ "uint8Stride", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer::VertexData,m_uint8Stride), HK_NULL }
};
const hkClass hkxVertexBufferVertexDataClass(
	"hkxVertexBufferVertexData",
	HK_NULL, // parent
	sizeof(hkxVertexBuffer::VertexData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkxVertexBuffer_VertexDataClass_Members),
	HK_COUNT_OF(hkxVertexBuffer_VertexDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkxVertexBuffer::VertexData::staticClass()
{
	return hkxVertexBufferVertexDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkxVertexBuffer::VertexData*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkxVertexBufferVertexData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkxVertexBuffer::VertexData(f);
}
static void HK_CALL cleanupLoadedObjecthkxVertexBufferVertexData(void* p)
{
	static_cast<hkxVertexBuffer::VertexData*>(p)->~VertexData();
}
extern const hkTypeInfo hkxVertexBufferVertexDataTypeInfo;
const hkTypeInfo hkxVertexBufferVertexDataTypeInfo(
	"hkxVertexBufferVertexData",
	"!hkxVertexBuffer::VertexData",
	finishLoadedObjecthkxVertexBufferVertexData,
	cleanupLoadedObjecthkxVertexBufferVertexData,
	HK_NULL,
	sizeof(hkxVertexBuffer::VertexData)
	);
#endif

//
// Class hkxVertexBuffer
//
extern const hkClass hkReferencedObjectClass;

const hkInternalClassMember hkxVertexBuffer::Members[] =
{
	{ "data", &hkxVertexBufferVertexDataClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer,m_data), HK_NULL },
	{ "desc", &hkxVertexDescriptionClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexBuffer,m_desc), HK_NULL }
};
extern const hkClass hkxVertexBufferClass;
const hkClass hkxVertexBufferClass(
	"hkxVertexBuffer",
	&hkReferencedObjectClass, // parent
	sizeof(::hkxVertexBuffer),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkxVertexBuffer::Members),
	HK_COUNT_OF(hkxVertexBuffer::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkxVertexBuffer::staticClass()
{
	return hkxVertexBufferClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkxVertexBuffer*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkxVertexBuffer(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkxVertexBuffer(f);
}
static void HK_CALL cleanupLoadedObjecthkxVertexBuffer(void* p)
{
	static_cast<hkxVertexBuffer*>(p)->~hkxVertexBuffer();
}
static const void* HK_CALL getVtablehkxVertexBuffer()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkxVertexBuffer).hash_code()));
	#else
	return ((const void*)(typeid(hkxVertexBuffer).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkxVertexBuffer)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkxVertexBuffer(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkxVertexBufferTypeInfo;
const hkTypeInfo hkxVertexBufferTypeInfo(
	"hkxVertexBuffer",
	"!hkxVertexBuffer",
	finishLoadedObjecthkxVertexBuffer,
	cleanupLoadedObjecthkxVertexBuffer,
	getVtablehkxVertexBuffer(),
	sizeof(hkxVertexBuffer)
	);
#endif

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