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

// Generated from 'Common/GeometryUtilities/Mesh/MultipleVertexBuffer/hkMultipleVertexBuffer.h'
#include <Common/GeometryUtilities/hkGeometryUtilities.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/GeometryUtilities/Mesh/MultipleVertexBuffer/hkMultipleVertexBuffer.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkMemoryMeshVertexBufferClass;
extern const hkClass hkMeshVertexBufferLockedVerticesClass;
extern const hkClass hkMeshVertexBufferClass;
extern const hkClass hkMultipleVertexBufferElementInfoClass;
extern const hkClass hkMultipleVertexBufferLockedElementClass;
extern const hkClass hkMultipleVertexBufferVertexBufferInfoClass;
extern const hkClass hkVertexFormatClass;

//
// Class hkMultipleVertexBuffer::VertexBufferInfo
//
static const hkInternalClassMember hkMultipleVertexBuffer_VertexBufferInfoClass_Members[] =
{
	{ "vertexBuffer", &hkMeshVertexBufferClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::VertexBufferInfo,m_vertexBuffer), HK_NULL },
	{ "lockedVertices", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkMultipleVertexBuffer::VertexBufferInfo,m_lockedVertices), HK_NULL },
	{ "isLocked", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::VertexBufferInfo,m_isLocked), HK_NULL }
};
const hkClass hkMultipleVertexBufferVertexBufferInfoClass(
	"hkMultipleVertexBufferVertexBufferInfo",
	HK_NULL, // parent
	sizeof(hkMultipleVertexBuffer::VertexBufferInfo),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkMultipleVertexBuffer_VertexBufferInfoClass_Members),
	HK_COUNT_OF(hkMultipleVertexBuffer_VertexBufferInfoClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkMultipleVertexBuffer::VertexBufferInfo::staticClass()
{
	return hkMultipleVertexBufferVertexBufferInfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkMultipleVertexBuffer::VertexBufferInfo*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkMultipleVertexBufferVertexBufferInfo(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkMultipleVertexBuffer::VertexBufferInfo(f);
}
static void HK_CALL cleanupLoadedObjecthkMultipleVertexBufferVertexBufferInfo(void* p)
{
	static_cast<hkMultipleVertexBuffer::VertexBufferInfo*>(p)->~VertexBufferInfo();
}
extern const hkTypeInfo hkMultipleVertexBufferVertexBufferInfoTypeInfo;
const hkTypeInfo hkMultipleVertexBufferVertexBufferInfoTypeInfo(
	"hkMultipleVertexBufferVertexBufferInfo",
	"!hkMultipleVertexBuffer::VertexBufferInfo",
	finishLoadedObjecthkMultipleVertexBufferVertexBufferInfo,
	cleanupLoadedObjecthkMultipleVertexBufferVertexBufferInfo,
	HK_NULL,
	sizeof(hkMultipleVertexBuffer::VertexBufferInfo)
	);
#endif

//
// Class hkMultipleVertexBuffer::ElementInfo
//
static const hkInternalClassMember hkMultipleVertexBuffer_ElementInfoClass_Members[] =
{
	{ "vertexBufferIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::ElementInfo,m_vertexBufferIndex), HK_NULL },
	{ "elementIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::ElementInfo,m_elementIndex), HK_NULL }
};
const hkClass hkMultipleVertexBufferElementInfoClass(
	"hkMultipleVertexBufferElementInfo",
	HK_NULL, // parent
	sizeof(hkMultipleVertexBuffer::ElementInfo),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkMultipleVertexBuffer_ElementInfoClass_Members),
	HK_COUNT_OF(hkMultipleVertexBuffer_ElementInfoClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkMultipleVertexBuffer::ElementInfo::staticClass()
{
	return hkMultipleVertexBufferElementInfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkMultipleVertexBuffer::ElementInfo*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkMultipleVertexBufferElementInfo(void* p)
{
	static_cast<hkMultipleVertexBuffer::ElementInfo*>(p)->~ElementInfo();
}
extern const hkTypeInfo hkMultipleVertexBufferElementInfoTypeInfo;
const hkTypeInfo hkMultipleVertexBufferElementInfoTypeInfo(
	"hkMultipleVertexBufferElementInfo",
	"!hkMultipleVertexBuffer::ElementInfo",
	HK_NULL,
	cleanupLoadedObjecthkMultipleVertexBufferElementInfo,
	HK_NULL,
	sizeof(hkMultipleVertexBuffer::ElementInfo)
	);
#endif

//
// Class hkMultipleVertexBuffer::LockedElement
//
static const hkInternalClassMember hkMultipleVertexBuffer_LockedElementClass_Members[] =
{
	{ "vertexBufferIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::LockedElement,m_vertexBufferIndex), HK_NULL },
	{ "elementIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::LockedElement,m_elementIndex), HK_NULL },
	{ "lockedBufferIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::LockedElement,m_lockedBufferIndex), HK_NULL },
	{ "vertexFormatIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::LockedElement,m_vertexFormatIndex), HK_NULL },
	{ "lockFlags", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::LockedElement,m_lockFlags), HK_NULL },
	{ "outputBufferIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::LockedElement,m_outputBufferIndex), HK_NULL },
	{ "emulatedIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_INT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer::LockedElement,m_emulatedIndex), HK_NULL }
};
const hkClass hkMultipleVertexBufferLockedElementClass(
	"hkMultipleVertexBufferLockedElement",
	HK_NULL, // parent
	sizeof(hkMultipleVertexBuffer::LockedElement),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkMultipleVertexBuffer_LockedElementClass_Members),
	HK_COUNT_OF(hkMultipleVertexBuffer_LockedElementClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkMultipleVertexBuffer::LockedElement::staticClass()
{
	return hkMultipleVertexBufferLockedElementClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkMultipleVertexBuffer::LockedElement*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkMultipleVertexBufferLockedElement(void* p)
{
	static_cast<hkMultipleVertexBuffer::LockedElement*>(p)->~LockedElement();
}
extern const hkTypeInfo hkMultipleVertexBufferLockedElementTypeInfo;
const hkTypeInfo hkMultipleVertexBufferLockedElementTypeInfo(
	"hkMultipleVertexBufferLockedElement",
	"!hkMultipleVertexBuffer::LockedElement",
	HK_NULL,
	cleanupLoadedObjecthkMultipleVertexBufferLockedElement,
	HK_NULL,
	sizeof(hkMultipleVertexBuffer::LockedElement)
	);
#endif

//
// Class hkMultipleVertexBuffer
//

const hkInternalClassMember hkMultipleVertexBuffer::Members[] =
{
	{ "vertexFormat", &hkVertexFormatClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_vertexFormat), HK_NULL },
	{ "lockedElements", &hkMultipleVertexBufferLockedElementClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_lockedElements), HK_NULL },
	{ "lockedBuffer", &hkMemoryMeshVertexBufferClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_lockedBuffer), HK_NULL },
	{ "elementInfos", &hkMultipleVertexBufferElementInfoClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_elementInfos), HK_NULL },
	{ "vertexBufferInfos", &hkMultipleVertexBufferVertexBufferInfoClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_vertexBufferInfos), HK_NULL },
	{ "numVertices", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_numVertices), HK_NULL },
	{ "isLocked", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_isLocked), HK_NULL },
	{ "updateCount", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_updateCount), HK_NULL },
	{ "writeLock", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_writeLock), HK_NULL },
	{ "isSharable", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_isSharable), HK_NULL },
	{ "constructionComplete", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkMultipleVertexBuffer,m_constructionComplete), HK_NULL }
};
extern const hkClass hkMultipleVertexBufferClass;
const hkClass hkMultipleVertexBufferClass(
	"hkMultipleVertexBuffer",
	&hkMeshVertexBufferClass, // parent
	sizeof(::hkMultipleVertexBuffer),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkMultipleVertexBuffer::Members),
	HK_COUNT_OF(hkMultipleVertexBuffer::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkMultipleVertexBuffer::staticClass()
{
	return hkMultipleVertexBufferClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkMultipleVertexBuffer*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkMultipleVertexBuffer(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkMultipleVertexBuffer(f);
}
static void HK_CALL cleanupLoadedObjecthkMultipleVertexBuffer(void* p)
{
	static_cast<hkMultipleVertexBuffer*>(p)->~hkMultipleVertexBuffer();
}
static const void* HK_CALL getVtablehkMultipleVertexBuffer()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkMultipleVertexBuffer).hash_code()));
	#else
	return ((const void*)(typeid(hkMultipleVertexBuffer).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkMultipleVertexBuffer)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkMultipleVertexBuffer(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkMultipleVertexBufferTypeInfo;
const hkTypeInfo hkMultipleVertexBufferTypeInfo(
	"hkMultipleVertexBuffer",
	"!hkMultipleVertexBuffer",
	finishLoadedObjecthkMultipleVertexBuffer,
	cleanupLoadedObjecthkMultipleVertexBuffer,
	getVtablehkMultipleVertexBuffer(),
	sizeof(hkMultipleVertexBuffer)
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