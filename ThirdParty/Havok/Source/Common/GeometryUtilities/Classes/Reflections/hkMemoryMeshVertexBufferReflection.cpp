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

// Generated from 'Common/GeometryUtilities/Mesh/Memory/hkMemoryMeshVertexBuffer.h'
#include <Common/GeometryUtilities/hkGeometryUtilities.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/GeometryUtilities/Mesh/Memory/hkMemoryMeshVertexBuffer.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkVertexFormatClass;

//
// Class hkMemoryMeshVertexBuffer
//
extern const hkClass hkMeshVertexBufferClass;

const hkInternalClassMember hkMemoryMeshVertexBuffer::Members[] =
{
	{ "format", &hkVertexFormatClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_format), HK_NULL },
	{ "elementOffsets", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 32, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_elementOffsets), HK_NULL },
	{ "memory", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_memory), HK_NULL },
	{ "vertexStride", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_vertexStride), HK_NULL },
	{ "locked", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_locked), HK_NULL },
	{ "numVertices", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_numVertices), HK_NULL },
	{ "isBigEndian", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_isBigEndian), HK_NULL },
	{ "isSharable", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMemoryMeshVertexBuffer,m_isSharable), HK_NULL }
};
extern const hkClass hkMemoryMeshVertexBufferClass;
const hkClass hkMemoryMeshVertexBufferClass(
	"hkMemoryMeshVertexBuffer",
	&hkMeshVertexBufferClass, // parent
	sizeof(::hkMemoryMeshVertexBuffer),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkMemoryMeshVertexBuffer::Members),
	HK_COUNT_OF(hkMemoryMeshVertexBuffer::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkMemoryMeshVertexBuffer::staticClass()
{
	return hkMemoryMeshVertexBufferClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkMemoryMeshVertexBuffer*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkMemoryMeshVertexBuffer(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkMemoryMeshVertexBuffer(f);
}
static void HK_CALL cleanupLoadedObjecthkMemoryMeshVertexBuffer(void* p)
{
	static_cast<hkMemoryMeshVertexBuffer*>(p)->~hkMemoryMeshVertexBuffer();
}
static const void* HK_CALL getVtablehkMemoryMeshVertexBuffer()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkMemoryMeshVertexBuffer).hash_code()));
	#else
	return ((const void*)(typeid(hkMemoryMeshVertexBuffer).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkMemoryMeshVertexBuffer)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkMemoryMeshVertexBuffer(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkMemoryMeshVertexBufferTypeInfo;
const hkTypeInfo hkMemoryMeshVertexBufferTypeInfo(
	"hkMemoryMeshVertexBuffer",
	"!hkMemoryMeshVertexBuffer",
	finishLoadedObjecthkMemoryMeshVertexBuffer,
	cleanupLoadedObjecthkMemoryMeshVertexBuffer,
	getVtablehkMemoryMeshVertexBuffer(),
	sizeof(hkMemoryMeshVertexBuffer)
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