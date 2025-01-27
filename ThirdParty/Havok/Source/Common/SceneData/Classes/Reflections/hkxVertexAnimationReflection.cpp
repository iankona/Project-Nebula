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

// Generated from 'Common/SceneData/Mesh/hkxVertexAnimation.h'
#include <Common/SceneData/hkSceneData.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/SceneData/Mesh/hkxVertexAnimation.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkBitFieldClass;
extern const hkClass hkxVertexAnimationUsageMapClass;
extern const hkClass hkxVertexBufferClass;
extern const hkClassEnum* hkxVertexDescriptionDataUsageEnum;

//
// Class hkxVertexAnimation::UsageMap
//
static const hkInternalClassMember hkxVertexAnimation_UsageMapClass_Members[] =
{
	{ "use", HK_NULL, hkxVertexDescriptionDataUsageEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkxVertexAnimation::UsageMap,m_use), HK_NULL },
	{ "useIndexOrig", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexAnimation::UsageMap,m_useIndexOrig), HK_NULL },
	{ "useIndexLocal", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexAnimation::UsageMap,m_useIndexLocal), HK_NULL }
};
const hkClass hkxVertexAnimationUsageMapClass(
	"hkxVertexAnimationUsageMap",
	HK_NULL, // parent
	sizeof(hkxVertexAnimation::UsageMap),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkxVertexAnimation_UsageMapClass_Members),
	HK_COUNT_OF(hkxVertexAnimation_UsageMapClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkxVertexAnimation::UsageMap::staticClass()
{
	return hkxVertexAnimationUsageMapClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkxVertexAnimation::UsageMap*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkxVertexAnimationUsageMap(void* p)
{
	static_cast<hkxVertexAnimation::UsageMap*>(p)->~UsageMap();
}
extern const hkTypeInfo hkxVertexAnimationUsageMapTypeInfo;
const hkTypeInfo hkxVertexAnimationUsageMapTypeInfo(
	"hkxVertexAnimationUsageMap",
	"!hkxVertexAnimation::UsageMap",
	HK_NULL,
	cleanupLoadedObjecthkxVertexAnimationUsageMap,
	HK_NULL,
	sizeof(hkxVertexAnimation::UsageMap)
	);
#endif

//
// Class hkxVertexAnimation
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkxVertexAnimationClass_Members[] =
{
	{ "time", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexAnimation,m_time), HK_NULL },
	{ "vertData", &hkxVertexBufferClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxVertexAnimation,m_vertData), HK_NULL },
	{ "vertexIndexMap", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT32, 0, 0, HK_OFFSET_OF(hkxVertexAnimation,m_vertexIndexMap), HK_NULL },
	{ "componentMap", &hkxVertexAnimationUsageMapClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkxVertexAnimation,m_componentMap), HK_NULL }
};
extern const hkClass hkxVertexAnimationClass;
const hkClass hkxVertexAnimationClass(
	"hkxVertexAnimation",
	&hkReferencedObjectClass, // parent
	sizeof(::hkxVertexAnimation),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkxVertexAnimationClass_Members),
	HK_COUNT_OF(hkxVertexAnimationClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkxVertexAnimation::staticClass()
{
	return hkxVertexAnimationClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkxVertexAnimation*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkxVertexAnimation(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkxVertexAnimation(f);
}
static void HK_CALL cleanupLoadedObjecthkxVertexAnimation(void* p)
{
	static_cast<hkxVertexAnimation*>(p)->~hkxVertexAnimation();
}
static const void* HK_CALL getVtablehkxVertexAnimation()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkxVertexAnimation).hash_code()));
	#else
	return ((const void*)(typeid(hkxVertexAnimation).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkxVertexAnimation)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkxVertexAnimation(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkxVertexAnimationTypeInfo;
const hkTypeInfo hkxVertexAnimationTypeInfo(
	"hkxVertexAnimation",
	"!hkxVertexAnimation",
	finishLoadedObjecthkxVertexAnimation,
	cleanupLoadedObjecthkxVertexAnimation,
	getVtablehkxVertexAnimation(),
	sizeof(hkxVertexAnimation)
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
