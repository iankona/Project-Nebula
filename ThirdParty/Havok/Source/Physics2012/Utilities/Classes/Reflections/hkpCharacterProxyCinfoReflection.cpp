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

// Generated from 'Physics2012/Utilities/CharacterControl/CharacterProxy/hkpCharacterProxyCinfo.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Utilities/CharacterControl/CharacterProxy/hkpCharacterProxyCinfo.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpShapePhantomClass;

//
// Class hkpCharacterProxyCinfo
//
extern const hkClass hkpCharacterControllerCinfoClass;

// hkpCharacterProxyCinfo_position attributes
static const hkUiAttribute hkpCharacterProxyCinfo_position_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_position_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterProxyCinfo_position_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_position_Attributes = { hkpCharacterProxyCinfo_position_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_position_AttributesList) };
// hkpCharacterProxyCinfo_velocity attributes
static const hkUiAttribute hkpCharacterProxyCinfo_velocity_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_velocity_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterProxyCinfo_velocity_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_velocity_Attributes = { hkpCharacterProxyCinfo_velocity_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_velocity_AttributesList) };
// hkpCharacterProxyCinfo_dynamicFriction attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_dynamicFriction_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_dynamicFriction_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_dynamicFriction_hkDescription = { "Controls the default dynamic friction for surfaces hit. A value of 0 maintains character momentum. A value of 1 clips all momentum against the normal of the surface hit." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_dynamicFriction_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_dynamicFriction_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_dynamicFriction_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_dynamicFriction_Attributes = { hkpCharacterProxyCinfo_dynamicFriction_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_dynamicFriction_AttributesList) };
// hkpCharacterProxyCinfo_staticFriction attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_staticFriction_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_staticFriction_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_staticFriction_hkDescription = { "Controls the default static friction for surfaces hit." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_staticFriction_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_staticFriction_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_staticFriction_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_staticFriction_Attributes = { hkpCharacterProxyCinfo_staticFriction_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_staticFriction_AttributesList) };
// hkpCharacterProxyCinfo_keepContactTolerance attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_keepContactTolerance_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_keepContactTolerance_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_keepContactTolerance_hkDescription = { "This parameter is used to determine when a contact point should be considered as part of the character's contact manifold. The default is 0.1f, which means that points .1 above the keep distance will be considered as part of the manifold. This value should be kept at the its default, as changing it from the default value can have undesirable effects." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_keepContactTolerance_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_keepContactTolerance_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_keepContactTolerance_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_keepContactTolerance_Attributes = { hkpCharacterProxyCinfo_keepContactTolerance_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_keepContactTolerance_AttributesList) };
// hkpCharacterProxyCinfo_up attributes
static const hkUiAttribute hkpCharacterProxyCinfo_up_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_up_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterProxyCinfo_up_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_up_Attributes = { hkpCharacterProxyCinfo_up_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_up_AttributesList) };
// hkpCharacterProxyCinfo_extraUpStaticFriction attributes
static const hkUiAttribute hkpCharacterProxyCinfo_extraUpStaticFriction_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_extraUpStaticFriction_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterProxyCinfo_extraUpStaticFriction_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_extraUpStaticFriction_Attributes = { hkpCharacterProxyCinfo_extraUpStaticFriction_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_extraUpStaticFriction_AttributesList) };
// hkpCharacterProxyCinfo_extraDownStaticFriction attributes
static const hkUiAttribute hkpCharacterProxyCinfo_extraDownStaticFriction_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_extraDownStaticFriction_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterProxyCinfo_extraDownStaticFriction_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_extraDownStaticFriction_Attributes = { hkpCharacterProxyCinfo_extraDownStaticFriction_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_extraDownStaticFriction_AttributesList) };
// hkpCharacterProxyCinfo_shapePhantom attributes
static const hkUiAttribute hkpCharacterProxyCinfo_shapePhantom_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_shapePhantom_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterProxyCinfo_shapePhantom_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_shapePhantom_Attributes = { hkpCharacterProxyCinfo_shapePhantom_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_shapePhantom_AttributesList) };
// hkpCharacterProxyCinfo_keepDistance attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_keepDistance_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_keepDistance_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_keepDistance_hkDescription = { "Attempt to keep the character at least this distance from the surface." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_keepDistance_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_keepDistance_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_keepDistance_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_keepDistance_Attributes = { hkpCharacterProxyCinfo_keepDistance_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_keepDistance_AttributesList) };
// hkpCharacterProxyCinfo_contactAngleSensitivity attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_contactAngleSensitivity_hkRangeReal( 0.010000f, 100.000000f, 0.010000f, 100.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_contactAngleSensitivity_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_contactAngleSensitivity_hkDescription = { "This value is used when deciding which contact points in the manifold are duplicates. Precisely, it determines when two contact points are found, whether they are to be treated as the same based on the angle between the normals. For the default value of 10, contact points with angles less then 2.56 degrees are considered as identical. If you decrease this to 1, contact points with angles less then 8.1 degrees are considered as identical. A larger value will increase the number of contact points considered in the manifold, and make for a more accurate simulation at slightly higher computational expense." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_contactAngleSensitivity_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_contactAngleSensitivity_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_contactAngleSensitivity_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_contactAngleSensitivity_Attributes = { hkpCharacterProxyCinfo_contactAngleSensitivity_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_contactAngleSensitivity_AttributesList) };
// hkpCharacterProxyCinfo_userPlanes attributes
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_userPlanes_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_userPlanes_hkDescription = { "The maximum number of extra planes the user may add to the simplex input during a processConstraints callback." };
#endif
static const hkRangeInt32Attribute hkpCharacterProxyCinfo_userPlanes_hkRangeInt32( 0, 20, 0, 20 );
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_userPlanes_AttributesList[] =
{
	{ "hk.Description", &hkpCharacterProxyCinfo_userPlanes_hkDescription, &hkDescriptionAttributeClass },
	{ "hk.RangeInt32", &hkpCharacterProxyCinfo_userPlanes_hkRangeInt32, &hkRangeInt32AttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_userPlanes_Attributes = { hkpCharacterProxyCinfo_userPlanes_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_userPlanes_AttributesList) };
// hkpCharacterProxyCinfo_maxCharacterSpeedForSolver attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_hkRangeReal( 0.000000f, 100.000000f, 0.000000f, 100.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_hkDescription = { "This value is used to clip the characters velocity when it is being squeezed by two moving planes. When two nearly parallel planes squeeze the character, the resultant velocity necessary to move the character so that both planes do not penetrate it can be extremely high, which can cause in the character controller to move at a very fast velocity. This value defaults to 10 which is appropriate if your default walking speed is 10. If this velocity is exceeded by the character solver when solving parallel planes, the solver solves the planes independently. The result is that instead of moving at a high velocity, the character may penetrate one of the planes - based on plane priorities." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_Attributes = { hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_AttributesList) };
// hkpCharacterProxyCinfo_characterStrength attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_characterStrength_hkRangeReal( 0.000000f, 78999999999999996926548246528.000000f, 0.000000f, 78999999999999996926548246528.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_characterStrength_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_characterStrength_hkDescription = { "The maximum constant force that the character controller can impart onto moving objects. By default this is HK_REAL_MAX, i.e. the character controller is infinitely strong." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_characterStrength_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_characterStrength_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_characterStrength_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_characterStrength_Attributes = { hkpCharacterProxyCinfo_characterStrength_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_characterStrength_AttributesList) };
// hkpCharacterProxyCinfo_characterMass attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_characterMass_hkRangeReal( 0.000000f, 1000.000000f, 0.000000f, 1000.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_characterMass_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_characterMass_hkDescription = { "The mass of the character. This value is only used to apply an extra downward force to dynamic rigid bodies that the character is standing on.  By default this value is 0, which means no additional downward force is applied.  It should only be set to a positive value if you do not apply gravity from your state machine when the character is on the ground." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_characterMass_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_characterMass_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_characterMass_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_characterMass_Attributes = { hkpCharacterProxyCinfo_characterMass_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_characterMass_AttributesList) };
// hkpCharacterProxyCinfo_maxSlope attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_maxSlope_hkRangeReal( 0.000000f, 1.570796f, 0.000000f, 1.570796f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_maxSlope_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_maxSlope_hkDescription = { "The maximum slope that the character can walk up. If the character is standing on a slope that is steeper than this, checkSupport will return false, and an additional vertical plane will be added during integrate that will block the character's movement in the direction of the slope. This angle is measured in degrees from the horizontal. By default this value is set to PI / 2, i.e. vertical, which disables this feature." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_maxSlope_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_maxSlope_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_maxSlope_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_maxSlope_Attributes = { hkpCharacterProxyCinfo_maxSlope_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_maxSlope_AttributesList) };
// hkpCharacterProxyCinfo_penetrationRecoverySpeed attributes
static const hkRangeRealAttribute hkpCharacterProxyCinfo_penetrationRecoverySpeed_hkRangeReal( 0.000000f, 10.000000f, 0.000000f, 10.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_penetrationRecoverySpeed_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_penetrationRecoverySpeed_hkDescription = { "When a penetrating plane is added to the manifold we set its velocity so it will push the character away from the point of penetration. This variable controls the speed at which this recovery takes place. The velocity applied is proportional to the penetration distance. This values controls the proportion. By default this value is set to 1.0" };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_penetrationRecoverySpeed_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterProxyCinfo_penetrationRecoverySpeed_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterProxyCinfo_penetrationRecoverySpeed_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_penetrationRecoverySpeed_Attributes = { hkpCharacterProxyCinfo_penetrationRecoverySpeed_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_penetrationRecoverySpeed_AttributesList) };
// hkpCharacterProxyCinfo_maxCastIterations attributes
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_maxCastIterations_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_maxCastIterations_hkDescription = { "The number of iterations the character controller will take to resolve an integrate call. The character controller will iterate if it hits a surface, and needs to change direction to complete the integrate for that timestep.  The default is 10 iterations." };
#endif
static const hkRangeInt32Attribute hkpCharacterProxyCinfo_maxCastIterations_hkRangeInt32( 0, 50, 0, 50 );
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_maxCastIterations_AttributesList[] =
{
	{ "hk.Description", &hkpCharacterProxyCinfo_maxCastIterations_hkDescription, &hkDescriptionAttributeClass },
	{ "hk.RangeInt32", &hkpCharacterProxyCinfo_maxCastIterations_hkRangeInt32, &hkRangeInt32AttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_maxCastIterations_Attributes = { hkpCharacterProxyCinfo_maxCastIterations_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_maxCastIterations_AttributesList) };
// hkpCharacterProxyCinfo_refreshManifoldInCheckSupport attributes
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_hkDescription = { "This flag determines whether the character controller refreshes the manifold when checkSupport is called. By default this is set to false, i.e. the manifold is not updated. This leads to a small inaccuracy when the character controller is hit by a rapidly accelerating body, however it is better to accept this inaccuracy, as the extra refresh manifold call can be computationally expensive." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_AttributesList[] =
{
	{ "hk.Description", &hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_Attributes = { hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_AttributesList, HK_COUNT_OF(hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_AttributesList) };
static const hkInternalClassMember hkpCharacterProxyCinfoClass_Members[] =
{
	{ "position", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_position), &hkpCharacterProxyCinfo_position_Attributes },
	{ "velocity", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_velocity), &hkpCharacterProxyCinfo_velocity_Attributes },
	{ "dynamicFriction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_dynamicFriction), &hkpCharacterProxyCinfo_dynamicFriction_Attributes },
	{ "staticFriction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_staticFriction), &hkpCharacterProxyCinfo_staticFriction_Attributes },
	{ "keepContactTolerance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_keepContactTolerance), &hkpCharacterProxyCinfo_keepContactTolerance_Attributes },
	{ "up", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_up), &hkpCharacterProxyCinfo_up_Attributes },
	{ "extraUpStaticFriction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_extraUpStaticFriction), &hkpCharacterProxyCinfo_extraUpStaticFriction_Attributes },
	{ "extraDownStaticFriction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_extraDownStaticFriction), &hkpCharacterProxyCinfo_extraDownStaticFriction_Attributes },
	{ "shapePhantom", &hkpShapePhantomClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_shapePhantom), &hkpCharacterProxyCinfo_shapePhantom_Attributes },
	{ "keepDistance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_keepDistance), &hkpCharacterProxyCinfo_keepDistance_Attributes },
	{ "contactAngleSensitivity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_contactAngleSensitivity), &hkpCharacterProxyCinfo_contactAngleSensitivity_Attributes },
	{ "userPlanes", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_userPlanes), &hkpCharacterProxyCinfo_userPlanes_Attributes },
	{ "maxCharacterSpeedForSolver", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_maxCharacterSpeedForSolver), &hkpCharacterProxyCinfo_maxCharacterSpeedForSolver_Attributes },
	{ "characterStrength", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_characterStrength), &hkpCharacterProxyCinfo_characterStrength_Attributes },
	{ "characterMass", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_characterMass), &hkpCharacterProxyCinfo_characterMass_Attributes },
	{ "maxSlope", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_maxSlope), &hkpCharacterProxyCinfo_maxSlope_Attributes },
	{ "penetrationRecoverySpeed", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_penetrationRecoverySpeed), &hkpCharacterProxyCinfo_penetrationRecoverySpeed_Attributes },
	{ "maxCastIterations", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_maxCastIterations), &hkpCharacterProxyCinfo_maxCastIterations_Attributes },
	{ "refreshManifoldInCheckSupport", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterProxyCinfo,m_refreshManifoldInCheckSupport), &hkpCharacterProxyCinfo_refreshManifoldInCheckSupport_Attributes }
};
namespace
{
	struct hkpCharacterProxyCinfo_DefaultStruct
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
		float m_dynamicFriction;
		float m_keepContactTolerance;
		float m_keepDistance;
		float m_contactAngleSensitivity;
		hkUint32 m_userPlanes;
		float m_maxCharacterSpeedForSolver;
		float m_characterStrength;
		float m_maxSlope;
		float m_penetrationRecoverySpeed;
		hkInt32 m_maxCastIterations;
	};
	const hkpCharacterProxyCinfo_DefaultStruct hkpCharacterProxyCinfo_Default =
	{
		{-1,-1,HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_dynamicFriction),hkClassMember::HK_CLASS_ZERO_DEFAULT,HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_keepContactTolerance),-1,-1,-1,-1,HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_keepDistance),HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_contactAngleSensitivity),HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_userPlanes),HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_maxCharacterSpeedForSolver),HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_characterStrength),hkClassMember::HK_CLASS_ZERO_DEFAULT,HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_maxSlope),HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_penetrationRecoverySpeed),HK_OFFSET_OF(hkpCharacterProxyCinfo_DefaultStruct,m_maxCastIterations),hkClassMember::HK_CLASS_ZERO_DEFAULT},
		1.0,0.1,0.05,10,4,10,7.9E+28f,1.57079633,1.0,10
	};
}
extern const hkClass hkpCharacterProxyCinfoClass;
const hkClass hkpCharacterProxyCinfoClass(
	"hkpCharacterProxyCinfo",
	&hkpCharacterControllerCinfoClass, // parent
	sizeof(::hkpCharacterProxyCinfo),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpCharacterProxyCinfoClass_Members),
	HK_COUNT_OF(hkpCharacterProxyCinfoClass_Members),
	&hkpCharacterProxyCinfo_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCharacterProxyCinfo::staticClass()
{
	return hkpCharacterProxyCinfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpCharacterProxyCinfo*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpCharacterProxyCinfo(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpCharacterProxyCinfo(f);
}
static void HK_CALL cleanupLoadedObjecthkpCharacterProxyCinfo(void* p)
{
	static_cast<hkpCharacterProxyCinfo*>(p)->~hkpCharacterProxyCinfo();
}
static const void* HK_CALL getVtablehkpCharacterProxyCinfo()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpCharacterProxyCinfo).hash_code()));
	#else
	return ((const void*)(typeid(hkpCharacterProxyCinfo).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpCharacterProxyCinfo)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpCharacterProxyCinfo(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpCharacterProxyCinfoTypeInfo;
const hkTypeInfo hkpCharacterProxyCinfoTypeInfo(
	"hkpCharacterProxyCinfo",
	"!hkpCharacterProxyCinfo",
	finishLoadedObjecthkpCharacterProxyCinfo,
	cleanupLoadedObjecthkpCharacterProxyCinfo,
	getVtablehkpCharacterProxyCinfo(),
	sizeof(hkpCharacterProxyCinfo)
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
