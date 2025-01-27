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

// Generated from 'Physics/Physics/Dynamics/Action/hknpAction.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Dynamics/Action/hknpAction.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hknpBodyIdClass;

//
// Enum hknpAction::ApplyActionResult
//
static const hkInternalClassEnumItem hknpActionApplyActionResultEnumItems[] =
{
	{0, "RESULT_OK"},
	{1, "RESULT_DEACTIVATE"},
	{2, "RESULT_REMOVE"},
};
static const hkInternalClassEnum hknpActionEnums[] = {
	{"ApplyActionResult", hknpActionApplyActionResultEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hknpActionApplyActionResultEnum = reinterpret_cast<const hkClassEnum*>(&hknpActionEnums[0]);

//
// Class hknpAction
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hknpActionClass_Members[] =
{
	{ "userData", HK_NULL, HK_NULL, hkClassMember::TYPE_ULONG, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpAction,m_userData), HK_NULL }
};
extern const hkClass hknpActionClass;
const hkClass hknpActionClass(
	"hknpAction",
	&hkReferencedObjectClass, // parent
	sizeof(::hknpAction),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hknpActionEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hknpActionClass_Members),
	HK_COUNT_OF(hknpActionClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpAction::staticClass()
{
	return hknpActionClass;
}
#endif

//
// Class hknpUnaryAction
//

static const hkInternalClassMember hknpUnaryActionClass_Members[] =
{
	{ "body", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpUnaryAction,m_body), HK_NULL }
};
extern const hkClass hknpUnaryActionClass;
const hkClass hknpUnaryActionClass(
	"hknpUnaryAction",
	&hknpActionClass, // parent
	sizeof(::hknpUnaryAction),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpUnaryActionClass_Members),
	HK_COUNT_OF(hknpUnaryActionClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpUnaryAction::staticClass()
{
	return hknpUnaryActionClass;
}
#endif

//
// Class hknpBinaryAction
//

static const hkInternalClassMember hknpBinaryActionClass_Members[] =
{
	{ "bodyA", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpBinaryAction,m_bodyA), HK_NULL },
	{ "bodyB", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpBinaryAction,m_bodyB), HK_NULL }
};
extern const hkClass hknpBinaryActionClass;
const hkClass hknpBinaryActionClass(
	"hknpBinaryAction",
	&hknpActionClass, // parent
	sizeof(::hknpBinaryAction),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpBinaryActionClass_Members),
	HK_COUNT_OF(hknpBinaryActionClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpBinaryAction::staticClass()
{
	return hknpBinaryActionClass;
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
