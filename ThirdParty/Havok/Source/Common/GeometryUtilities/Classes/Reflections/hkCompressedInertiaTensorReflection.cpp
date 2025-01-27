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

// Generated from 'Common/GeometryUtilities/Inertia/hkCompressedInertiaTensor.h'
#include <Common/GeometryUtilities/hkGeometryUtilities.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/GeometryUtilities/Inertia/hkCompressedInertiaTensor.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkPackedVector3Class;

//
// Class hkCompressedMassProperties
//
extern const hkClass hkPackedUnitVector4Class;

static const hkInternalClassMember hkCompressedMassPropertiesClass_Members[] =
{
	{ "centerOfMass", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 4, 0, HK_OFFSET_OF(hkCompressedMassProperties,m_centerOfMass), HK_NULL },
	{ "inertia", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 4, 0, HK_OFFSET_OF(hkCompressedMassProperties,m_inertia), HK_NULL },
	{ "majorAxisSpace", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 4, 0, HK_OFFSET_OF(hkCompressedMassProperties,m_majorAxisSpace), HK_NULL },
	{ "mass", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkCompressedMassProperties,m_mass), HK_NULL },
	{ "volume", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkCompressedMassProperties,m_volume), HK_NULL }
};
extern const hkClass hkCompressedMassPropertiesClass;
const hkClass hkCompressedMassPropertiesClass(
	"hkCompressedMassProperties",
	HK_NULL, // parent
	sizeof(::hkCompressedMassProperties),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkCompressedMassPropertiesClass_Members),
	HK_COUNT_OF(hkCompressedMassPropertiesClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkCompressedMassProperties::staticClass()
{
	return hkCompressedMassPropertiesClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkCompressedMassProperties*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkCompressedMassProperties(void* p)
{
	static_cast<hkCompressedMassProperties*>(p)->~hkCompressedMassProperties();
}
extern const hkTypeInfo hkCompressedMassPropertiesTypeInfo;
const hkTypeInfo hkCompressedMassPropertiesTypeInfo(
	"hkCompressedMassProperties",
	"!hkCompressedMassProperties",
	HK_NULL,
	cleanupLoadedObjecthkCompressedMassProperties,
	HK_NULL,
	sizeof(hkCompressedMassProperties)
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
