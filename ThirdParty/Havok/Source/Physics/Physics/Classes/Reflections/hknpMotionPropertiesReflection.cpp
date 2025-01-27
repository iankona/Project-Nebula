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

// Generated from 'Physics/Physics/Dynamics/Motion/hknpMotionProperties.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Dynamics/Motion/hknpMotionProperties.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClassEnum* hknpMotionPropertiesFlagsEnumEnum;

//
// Enum hknpMotionProperties::FlagsEnum
//
static const hkInternalClassEnumItem hknpMotionPropertiesFlagsEnumEnumItems[] =
{
	{1, "ENABLE_GRAVITY_MODIFICATION"},
	{2, "NEVER_REBUILD_MASS_PROPERTIES"},
};

//
// Enum hknpMotionProperties::SolverStabilizationType
//
static const hkInternalClassEnumItem hknpMotionPropertiesSolverStabilizationTypeEnumItems[] =
{
	{0, "SOLVER_STABILIZATION_OFF"},
	{1, "SOLVER_STABILIZATION_LOW"},
	{2, "SOLVER_STABILIZATION_MEDIUM"},
	{3, "SOLVER_STABILIZATION_HIGH"},
	{4, "SOLVER_STABILIZATION_AGGRESSIVE"},
};

//
// Enum hknpMotionProperties::DeactivationStrategy
//
static const hkInternalClassEnumItem hknpMotionPropertiesDeactivationStrategyEnumItems[] =
{
	{3, "DEACTIVATION_STRATEGY_AGGRESSIVE"},
	{4, "DEACTIVATION_STRATEGY_BALANCED"},
	{5, "DEACTIVATION_STRATEGY_ACCURATE"},
};
static const hkInternalClassEnum hknpMotionPropertiesEnums[] = {
	{"FlagsEnum", hknpMotionPropertiesFlagsEnumEnumItems, 2, HK_NULL, 0 },
	{"SolverStabilizationType", hknpMotionPropertiesSolverStabilizationTypeEnumItems, 5, HK_NULL, 0 },
	{"DeactivationStrategy", hknpMotionPropertiesDeactivationStrategyEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hknpMotionPropertiesFlagsEnumEnum = reinterpret_cast<const hkClassEnum*>(&hknpMotionPropertiesEnums[0]);
const hkClassEnum* hknpMotionPropertiesSolverStabilizationTypeEnum = reinterpret_cast<const hkClassEnum*>(&hknpMotionPropertiesEnums[1]);
const hkClassEnum* hknpMotionPropertiesDeactivationStrategyEnum = reinterpret_cast<const hkClassEnum*>(&hknpMotionPropertiesEnums[2]);

//
// Class hknpMotionProperties
//
static const hkInternalClassMember hknpMotionPropertiesClass_Members[] =
{
	{ "isExclusive", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hknpMotionProperties,m_isExclusive), HK_NULL },
	{ "flags", HK_NULL, hknpMotionPropertiesFlagsEnumEnum, hkClassMember::TYPE_FLAGS, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_flags), HK_NULL },
	{ "gravityFactor", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_gravityFactor), HK_NULL },
	{ "maxLinearSpeed", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_maxLinearSpeed), HK_NULL },
	{ "maxAngularSpeed", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_maxAngularSpeed), HK_NULL },
	{ "linearDamping", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_linearDamping), HK_NULL },
	{ "angularDamping", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_angularDamping), HK_NULL },
	{ "solverStabilizationSpeedThreshold", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_solverStabilizationSpeedThreshold), HK_NULL },
	{ "solverStabilizationSpeedReduction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_solverStabilizationSpeedReduction), HK_NULL },
	{ "maxDistSqrd", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_maxDistSqrd), HK_NULL },
	{ "maxRotSqrd", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_maxRotSqrd), HK_NULL },
	{ "invBlockSize", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_invBlockSize), HK_NULL },
	{ "pathingUpperThreshold", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_pathingUpperThreshold), HK_NULL },
	{ "pathingLowerThreshold", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_pathingLowerThreshold), HK_NULL },
	{ "numDeactivationFrequencyPasses", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_numDeactivationFrequencyPasses), HK_NULL },
	{ "deactivationVelocityScaleSquare", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_deactivationVelocityScaleSquare), HK_NULL },
	{ "minimumPathingVelocityScaleSquare", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_minimumPathingVelocityScaleSquare), HK_NULL },
	{ "spikingVelocityScaleThresholdSquared", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_spikingVelocityScaleThresholdSquared), HK_NULL },
	{ "minimumSpikingVelocityScaleSquared", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpMotionProperties,m_minimumSpikingVelocityScaleSquared), HK_NULL }
};
namespace
{
	struct hknpMotionProperties_DefaultStruct
	{
		int s_defaultOffsets[19];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		float m_solverStabilizationSpeedThreshold;
	};
	const hknpMotionProperties_DefaultStruct hknpMotionProperties_Default =
	{
		{-1,-1,-1,-1,-1,-1,-1,HK_OFFSET_OF(hknpMotionProperties_DefaultStruct,m_solverStabilizationSpeedThreshold),hkClassMember::HK_CLASS_ZERO_DEFAULT,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
		1.0
	};
}
extern const hkClass hknpMotionPropertiesClass;
const hkClass hknpMotionPropertiesClass(
	"hknpMotionProperties",
	HK_NULL, // parent
	sizeof(::hknpMotionProperties),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hknpMotionPropertiesEnums),
	3, // enums
	reinterpret_cast<const hkClassMember*>(hknpMotionPropertiesClass_Members),
	HK_COUNT_OF(hknpMotionPropertiesClass_Members),
	&hknpMotionProperties_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpMotionProperties::staticClass()
{
	return hknpMotionPropertiesClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpMotionProperties*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthknpMotionProperties(void* p)
{
	static_cast<hknpMotionProperties*>(p)->~hknpMotionProperties();
}
extern const hkTypeInfo hknpMotionPropertiesTypeInfo;
const hkTypeInfo hknpMotionPropertiesTypeInfo(
	"hknpMotionProperties",
	"!hknpMotionProperties",
	HK_NULL,
	cleanupLoadedObjecthknpMotionProperties,
	HK_NULL,
	sizeof(hknpMotionProperties)
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
