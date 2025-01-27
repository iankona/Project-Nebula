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

// Generated from 'Physics/Physics/Extensions/Vehicle/Suspension/hknpVehicleSuspension.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Extensions/Vehicle/Suspension/hknpVehicleSuspension.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hknpVehicleSuspensionSuspensionWheelParametersClass;

//
// Class hknpVehicleSuspension::SuspensionWheelParameters
//
static const hkInternalClassMember hknpVehicleSuspension_SuspensionWheelParametersClass_Members[] =
{
	{ "hardpointChassisSpace", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleSuspension::SuspensionWheelParameters,m_hardpointChassisSpace), HK_NULL },
	{ "directionChassisSpace", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleSuspension::SuspensionWheelParameters,m_directionChassisSpace), HK_NULL },
	{ "length", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleSuspension::SuspensionWheelParameters,m_length), HK_NULL }
};
const hkClass hknpVehicleSuspensionSuspensionWheelParametersClass(
	"hknpVehicleSuspensionSuspensionWheelParameters",
	HK_NULL, // parent
	sizeof(hknpVehicleSuspension::SuspensionWheelParameters),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpVehicleSuspension_SuspensionWheelParametersClass_Members),
	HK_COUNT_OF(hknpVehicleSuspension_SuspensionWheelParametersClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpVehicleSuspension::SuspensionWheelParameters::staticClass()
{
	return hknpVehicleSuspensionSuspensionWheelParametersClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpVehicleSuspension::SuspensionWheelParameters*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthknpVehicleSuspensionSuspensionWheelParameters(void* p)
{
	static_cast<hknpVehicleSuspension::SuspensionWheelParameters*>(p)->~SuspensionWheelParameters();
}
extern const hkTypeInfo hknpVehicleSuspensionSuspensionWheelParametersTypeInfo;
const hkTypeInfo hknpVehicleSuspensionSuspensionWheelParametersTypeInfo(
	"hknpVehicleSuspensionSuspensionWheelParameters",
	"!hknpVehicleSuspension::SuspensionWheelParameters",
	HK_NULL,
	cleanupLoadedObjecthknpVehicleSuspensionSuspensionWheelParameters,
	HK_NULL,
	sizeof(hknpVehicleSuspension::SuspensionWheelParameters)
	);
#endif

//
// Class hknpVehicleSuspension
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hknpVehicleSuspensionClass_Members[] =
{
	{ "wheelParams", &hknpVehicleSuspensionSuspensionWheelParametersClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleSuspension,m_wheelParams), HK_NULL }
};
extern const hkClass hknpVehicleSuspensionClass;
const hkClass hknpVehicleSuspensionClass(
	"hknpVehicleSuspension",
	&hkReferencedObjectClass, // parent
	sizeof(::hknpVehicleSuspension),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpVehicleSuspensionClass_Members),
	HK_COUNT_OF(hknpVehicleSuspensionClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpVehicleSuspension::staticClass()
{
	return hknpVehicleSuspensionClass;
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
