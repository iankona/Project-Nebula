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

// Generated from 'Physics/Physics/Collide/Filter/hknpCollisionFilter.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Collide/Filter/hknpCollisionFilter.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hknpBodyClass;
extern const hkClass hknpQueryFilterDataClass;
extern const hkClass hknpShapeClass;
extern const hkClassEnum* hknpCollisionFilterFilterTypeEnum;

//
// Enum hknpCollisionFilter::FilterType
//
static const hkInternalClassEnumItem hknpCollisionFilterFilterTypeEnumItems[] =
{
	{0, "ALWAYS_HIT_FILTER"},
	{1, "CONSTRAINT_FILTER"},
	{2, "GROUP_FILTER"},
	{3, "PAIR_FILTER"},
	{4, "USER_FILTER"},
};
static const hkInternalClassEnum hknpCollisionFilterEnums[] = {
	{"FilterType", hknpCollisionFilterFilterTypeEnumItems, 5, HK_NULL, 0 }
};
const hkClassEnum* hknpCollisionFilterFilterTypeEnum = reinterpret_cast<const hkClassEnum*>(&hknpCollisionFilterEnums[0]);

//
// Class hknpCollisionFilter
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hknpCollisionFilterClass_Members[] =
{
	{ "type", HK_NULL, hknpCollisionFilterFilterTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hknpCollisionFilter,m_type), HK_NULL }
};
extern const hkClass hknpCollisionFilterClass;
const hkClass hknpCollisionFilterClass(
	"hknpCollisionFilter",
	&hkReferencedObjectClass, // parent
	sizeof(::hknpCollisionFilter),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hknpCollisionFilterEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hknpCollisionFilterClass_Members),
	HK_COUNT_OF(hknpCollisionFilterClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpCollisionFilter::staticClass()
{
	return hknpCollisionFilterClass;
}
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
