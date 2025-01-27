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

// Generated from 'Physics2012/Internal/Collide/Mopp/Code/hkpMoppCode.h'
#include <Physics2012/Internal/hkpInternal.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Internal/Collide/Mopp/Code/hkpMoppCode.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpMoppCodeCodeInfoClass;
extern const hkClassEnum* hkpMoppCodeBuildTypeEnum;

//
// Class hkpMoppCodeReindexedTerminal
//
static const hkInternalClassMember hkpMoppCodeReindexedTerminalClass_Members[] =
{
	{ "origShapeKey", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMoppCodeReindexedTerminal,m_origShapeKey), HK_NULL },
	{ "reindexedShapeKey", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMoppCodeReindexedTerminal,m_reindexedShapeKey), HK_NULL }
};
extern const hkClass hkpMoppCodeReindexedTerminalClass;
const hkClass hkpMoppCodeReindexedTerminalClass(
	"hkpMoppCodeReindexedTerminal",
	HK_NULL, // parent
	sizeof(::hkpMoppCodeReindexedTerminal),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpMoppCodeReindexedTerminalClass_Members),
	HK_COUNT_OF(hkpMoppCodeReindexedTerminalClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpMoppCodeReindexedTerminal::staticClass()
{
	return hkpMoppCodeReindexedTerminalClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpMoppCodeReindexedTerminal*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkpMoppCodeReindexedTerminal(void* p)
{
	static_cast<hkpMoppCodeReindexedTerminal*>(p)->~hkpMoppCodeReindexedTerminal();
}
extern const hkTypeInfo hkpMoppCodeReindexedTerminalTypeInfo;
const hkTypeInfo hkpMoppCodeReindexedTerminalTypeInfo(
	"hkpMoppCodeReindexedTerminal",
	"!hkpMoppCodeReindexedTerminal",
	HK_NULL,
	cleanupLoadedObjecthkpMoppCodeReindexedTerminal,
	HK_NULL,
	sizeof(hkpMoppCodeReindexedTerminal)
	);
#endif

//
// Enum hkpMoppCode::BuildType
//
static const hkInternalClassEnumItem hkpMoppCodeBuildTypeEnumItems[] =
{
	{0, "BUILT_WITH_CHUNK_SUBDIVISION"},
	{1, "BUILT_WITHOUT_CHUNK_SUBDIVISION"},
	{2, "BUILD_NOT_SET"},
};
static const hkInternalClassEnum hkpMoppCodeEnums[] = {
	{"BuildType", hkpMoppCodeBuildTypeEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hkpMoppCodeBuildTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkpMoppCodeEnums[0]);

//
// Class hkpMoppCode::CodeInfo
//
static const hkInternalClassMember hkpMoppCode_CodeInfoClass_Members[] =
{
	{ "offset", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMoppCode::CodeInfo,m_offset), HK_NULL }
};
const hkClass hkpMoppCodeCodeInfoClass(
	"hkpMoppCodeCodeInfo",
	HK_NULL, // parent
	sizeof(hkpMoppCode::CodeInfo),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpMoppCode_CodeInfoClass_Members),
	HK_COUNT_OF(hkpMoppCode_CodeInfoClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpMoppCode::CodeInfo::staticClass()
{
	return hkpMoppCodeCodeInfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpMoppCode::CodeInfo*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkpMoppCodeCodeInfo(void* p)
{
	static_cast<hkpMoppCode::CodeInfo*>(p)->~CodeInfo();
}
extern const hkTypeInfo hkpMoppCodeCodeInfoTypeInfo;
const hkTypeInfo hkpMoppCodeCodeInfoTypeInfo(
	"hkpMoppCodeCodeInfo",
	"!hkpMoppCode::CodeInfo",
	HK_NULL,
	cleanupLoadedObjecthkpMoppCodeCodeInfo,
	HK_NULL,
	sizeof(hkpMoppCode::CodeInfo)
	);
#endif

//
// Class hkpMoppCode
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkpMoppCodeClass_Members[] =
{
	{ "info", &hkpMoppCodeCodeInfoClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMoppCode,m_info), HK_NULL },
	{ "data", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkpMoppCode,m_data), HK_NULL },
	{ "buildType", HK_NULL, hkpMoppCodeBuildTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(hkpMoppCode,m_buildType), HK_NULL }
};
namespace
{
	struct hkpMoppCode_DefaultStruct
	{
		int s_defaultOffsets[3];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		hkInt8 /* hkEnum< enum hkpMoppCode::BuildType, hkInt8 > */ m_buildType;
	};
	const hkpMoppCode_DefaultStruct hkpMoppCode_Default =
	{
		{-1,-1,HK_OFFSET_OF(hkpMoppCode_DefaultStruct,m_buildType)},
		hkpMoppCode::BUILT_WITHOUT_CHUNK_SUBDIVISION
	};
}
extern const hkClass hkpMoppCodeClass;
const hkClass hkpMoppCodeClass(
	"hkpMoppCode",
	&hkReferencedObjectClass, // parent
	sizeof(::hkpMoppCode),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpMoppCodeEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpMoppCodeClass_Members),
	HK_COUNT_OF(hkpMoppCodeClass_Members),
	&hkpMoppCode_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpMoppCode::staticClass()
{
	return hkpMoppCodeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpMoppCode*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpMoppCode(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpMoppCode(f);
}
static void HK_CALL cleanupLoadedObjecthkpMoppCode(void* p)
{
	static_cast<hkpMoppCode*>(p)->~hkpMoppCode();
}
static const void* HK_CALL getVtablehkpMoppCode()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpMoppCode).hash_code()));
	#else
	return ((const void*)(typeid(hkpMoppCode).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpMoppCode)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpMoppCode(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpMoppCodeTypeInfo;
const hkTypeInfo hkpMoppCodeTypeInfo(
	"hkpMoppCode",
	"!hkpMoppCode",
	finishLoadedObjecthkpMoppCode,
	cleanupLoadedObjecthkpMoppCode,
	getVtablehkpMoppCode(),
	sizeof(hkpMoppCode)
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
