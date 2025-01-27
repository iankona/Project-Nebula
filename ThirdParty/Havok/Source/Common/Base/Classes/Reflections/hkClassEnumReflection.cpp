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

// Generated from 'Common/Base/Reflection/hkClassEnum.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Base/Reflection/hkClassEnum.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkClassEnumItemClass;
extern const hkClass hkCustomAttributesClass;
extern const hkClassEnum* hkClassEnumFlagValuesEnum;

//
// Enum hkClassEnum::FlagValues
//
static const hkInternalClassEnumItem hkClassEnumFlagValuesEnumItems[] =
{
	{0, "FLAGS_NONE"},
};
static const hkInternalClassEnum hkClassEnumEnums[] = {
	{"FlagValues", hkClassEnumFlagValuesEnumItems, 1, HK_NULL, 0 }
};
const hkClassEnum* hkClassEnumFlagValuesEnum = reinterpret_cast<const hkClassEnum*>(&hkClassEnumEnums[0]);

//
// Class hkClassEnum::Item
//
const hkInternalClassMember hkClassEnum::Item::Members[] =
{
	{ "value", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkClassEnum::Item,m_value), HK_NULL },
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_CSTRING, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkClassEnum::Item,m_name), HK_NULL }
};
const hkClass hkClassEnumItemClass(
	"hkClassEnumItem",
	HK_NULL, // parent
	sizeof(hkClassEnum::Item),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkClassEnum::Item::Members),
	HK_COUNT_OF(hkClassEnum::Item::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkClassEnum::Item::staticClass()
{
	return hkClassEnumItemClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkClassEnum::Item*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkClassEnumItem(void* p)
{
	static_cast<hkClassEnum::Item*>(p)->~Item();
}
extern const hkTypeInfo hkClassEnumItemTypeInfo;
const hkTypeInfo hkClassEnumItemTypeInfo(
	"hkClassEnumItem",
	"!hkClassEnum::Item",
	HK_NULL,
	cleanupLoadedObjecthkClassEnumItem,
	HK_NULL,
	sizeof(hkClassEnum::Item)
	);
#endif

//
// Class hkClassEnum
//
const hkInternalClassMember hkClassEnum::Members[] =
{
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_CSTRING, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkClassEnum,m_name), HK_NULL },
	{ "items", &hkClassEnumItemClass, HK_NULL, hkClassMember::TYPE_SIMPLEARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkClassEnum,m_items), HK_NULL },
	{ "attributes", &hkCustomAttributesClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkClassEnum,m_attributes), HK_NULL },
	{ "flags", HK_NULL, hkClassEnumFlagValuesEnum, hkClassMember::TYPE_FLAGS, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkClassEnum,m_flags), HK_NULL }
};
extern const hkClass hkClassEnumClass;
const hkClass hkClassEnumClass(
	"hkClassEnum",
	HK_NULL, // parent
	sizeof(::hkClassEnum),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkClassEnumEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkClassEnum::Members),
	HK_COUNT_OF(hkClassEnum::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkClassEnum::staticClass()
{
	return hkClassEnumClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkClassEnum*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkClassEnum(void* p)
{
	static_cast<hkClassEnum*>(p)->~hkClassEnum();
}
extern const hkTypeInfo hkClassEnumTypeInfo;
const hkTypeInfo hkClassEnumTypeInfo(
	"hkClassEnum",
	"!hkClassEnum",
	HK_NULL,
	cleanupLoadedObjecthkClassEnum,
	HK_NULL,
	sizeof(hkClassEnum)
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
