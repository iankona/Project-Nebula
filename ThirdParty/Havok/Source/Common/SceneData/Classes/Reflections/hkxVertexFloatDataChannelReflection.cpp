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

// Generated from 'Common/SceneData/Mesh/Channels/hkxVertexFloatDataChannel.h'
#include <Common/SceneData/hkSceneData.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/SceneData/Mesh/Channels/hkxVertexFloatDataChannel.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClassEnum* hkxVertexFloatDataChannelVertexFloatDimensionsEnum;

//
// Enum hkxVertexFloatDataChannel::VertexFloatDimensions
//
static const hkInternalClassEnumItem hkxVertexFloatDataChannelVertexFloatDimensionsEnumItems[] =
{
	{0, "FLOAT"},
	{1, "DISTANCE"},
	{2, "ANGLE"},
};
static const hkInternalClassEnum hkxVertexFloatDataChannelEnums[] = {
	{"VertexFloatDimensions", hkxVertexFloatDataChannelVertexFloatDimensionsEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hkxVertexFloatDataChannelVertexFloatDimensionsEnum = reinterpret_cast<const hkClassEnum*>(&hkxVertexFloatDataChannelEnums[0]);

//
// Class hkxVertexFloatDataChannel
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkxVertexFloatDataChannelClass_Members[] =
{
	{ "perVertexFloats", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkxVertexFloatDataChannel,m_perVertexFloats), HK_NULL },
	{ "dimensions", HK_NULL, hkxVertexFloatDataChannelVertexFloatDimensionsEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkxVertexFloatDataChannel,m_dimensions), HK_NULL }
};
extern const hkClass hkxVertexFloatDataChannelClass;
const hkClass hkxVertexFloatDataChannelClass(
	"hkxVertexFloatDataChannel",
	&hkReferencedObjectClass, // parent
	sizeof(::hkxVertexFloatDataChannel),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkxVertexFloatDataChannelEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkxVertexFloatDataChannelClass_Members),
	HK_COUNT_OF(hkxVertexFloatDataChannelClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkxVertexFloatDataChannel::staticClass()
{
	return hkxVertexFloatDataChannelClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkxVertexFloatDataChannel*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkxVertexFloatDataChannel(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkxVertexFloatDataChannel(f);
}
static void HK_CALL cleanupLoadedObjecthkxVertexFloatDataChannel(void* p)
{
	static_cast<hkxVertexFloatDataChannel*>(p)->~hkxVertexFloatDataChannel();
}
static const void* HK_CALL getVtablehkxVertexFloatDataChannel()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkxVertexFloatDataChannel).hash_code()));
	#else
	return ((const void*)(typeid(hkxVertexFloatDataChannel).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkxVertexFloatDataChannel)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkxVertexFloatDataChannel(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkxVertexFloatDataChannelTypeInfo;
const hkTypeInfo hkxVertexFloatDataChannelTypeInfo(
	"hkxVertexFloatDataChannel",
	"!hkxVertexFloatDataChannel",
	finishLoadedObjecthkxVertexFloatDataChannel,
	cleanupLoadedObjecthkxVertexFloatDataChannel,
	getVtablehkxVertexFloatDataChannel(),
	sizeof(hkxVertexFloatDataChannel)
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
