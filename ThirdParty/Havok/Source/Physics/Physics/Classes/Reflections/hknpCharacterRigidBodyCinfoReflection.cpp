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

// Generated from 'Physics/Physics/Extensions/CharacterControl/RigidBody/hknpCharacterRigidBodyCinfo.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Extensions/CharacterControl/RigidBody/hknpCharacterRigidBodyCinfo.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hknpBodyIdClass;
extern const hkClass hknpShapeClass;
extern const hkClass hknpWorldClass;
extern const hkClassEnum* hknpWorldAdditionFlagsEnumEnum;

//
// Class hknpCharacterRigidBodyCinfo
//
extern const hkClass hkReferencedObjectClass;

// hknpCharacterRigidBodyCinfo_collisionFilterInfo attributes
static const hkUiAttribute hknpCharacterRigidBodyCinfo_collisionFilterInfo_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_collisionFilterInfo_AttributesList[] =
{
	{ "hk.Ui", &hknpCharacterRigidBodyCinfo_collisionFilterInfo_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_collisionFilterInfo_Attributes = { hknpCharacterRigidBodyCinfo_collisionFilterInfo_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_collisionFilterInfo_AttributesList) };
// hknpCharacterRigidBodyCinfo_shape attributes
static const hkUiAttribute hknpCharacterRigidBodyCinfo_shape_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_shape_AttributesList[] =
{
	{ "hk.Ui", &hknpCharacterRigidBodyCinfo_shape_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_shape_Attributes = { hknpCharacterRigidBodyCinfo_shape_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_shape_AttributesList) };
// hknpCharacterRigidBodyCinfo_world attributes
static const hkUiAttribute hknpCharacterRigidBodyCinfo_world_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_world_AttributesList[] =
{
	{ "hk.Ui", &hknpCharacterRigidBodyCinfo_world_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_world_Attributes = { hknpCharacterRigidBodyCinfo_world_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_world_AttributesList) };
// hknpCharacterRigidBodyCinfo_position attributes
static const hkUiAttribute hknpCharacterRigidBodyCinfo_position_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_position_AttributesList[] =
{
	{ "hk.Ui", &hknpCharacterRigidBodyCinfo_position_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_position_Attributes = { hknpCharacterRigidBodyCinfo_position_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_position_AttributesList) };
// hknpCharacterRigidBodyCinfo_orientation attributes
static const hkUiAttribute hknpCharacterRigidBodyCinfo_orientation_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_orientation_AttributesList[] =
{
	{ "hk.Ui", &hknpCharacterRigidBodyCinfo_orientation_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_orientation_Attributes = { hknpCharacterRigidBodyCinfo_orientation_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_orientation_AttributesList) };
// hknpCharacterRigidBodyCinfo_mass attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_mass_hkRangeReal( 0.000000f, 1000.000000f, 0.000000f, 1000.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_mass_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_mass_hkDescription = { "The character rigid body mass." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_mass_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_mass_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_mass_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_mass_Attributes = { hknpCharacterRigidBodyCinfo_mass_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_mass_AttributesList) };
// hknpCharacterRigidBodyCinfo_dynamicFriction attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_dynamicFriction_hkRangeReal( 0.000000f, 4.000000f, 0.000000f, 4.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_dynamicFriction_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_dynamicFriction_hkDescription = { "The dynamic friction of the character rigid body." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_dynamicFriction_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_dynamicFriction_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_dynamicFriction_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_dynamicFriction_Attributes = { hknpCharacterRigidBodyCinfo_dynamicFriction_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_dynamicFriction_AttributesList) };
// hknpCharacterRigidBodyCinfo_staticFriction attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_staticFriction_hkRangeReal( 0.000000f, 4.000000f, 0.000000f, 4.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_staticFriction_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_staticFriction_hkDescription = { "The static friction of the character rigid body." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_staticFriction_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_staticFriction_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_staticFriction_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_staticFriction_Attributes = { hknpCharacterRigidBodyCinfo_staticFriction_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_staticFriction_AttributesList) };
// hknpCharacterRigidBodyCinfo_reservedBodyId attributes
static const hkUiAttribute hknpCharacterRigidBodyCinfo_reservedBodyId_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_reservedBodyId_AttributesList[] =
{
	{ "hk.Ui", &hknpCharacterRigidBodyCinfo_reservedBodyId_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_reservedBodyId_Attributes = { hknpCharacterRigidBodyCinfo_reservedBodyId_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_reservedBodyId_AttributesList) };
// hknpCharacterRigidBodyCinfo_up attributes
static const hkUiAttribute hknpCharacterRigidBodyCinfo_up_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_up_AttributesList[] =
{
	{ "hk.Ui", &hknpCharacterRigidBodyCinfo_up_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_up_Attributes = { hknpCharacterRigidBodyCinfo_up_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_up_AttributesList) };
// hknpCharacterRigidBodyCinfo_maxSlope attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_maxSlope_hkRangeReal( 0.000000f, 1.570796f, 0.000000f, 1.570796f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_maxSlope_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_maxSlope_hkDescription = { "The maximum slope that the character can walk up. This angle is measured in radians from the horizontal. The default value is pi / 3." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_maxSlope_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_maxSlope_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_maxSlope_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_maxSlope_Attributes = { hknpCharacterRigidBodyCinfo_maxSlope_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_maxSlope_AttributesList) };
// hknpCharacterRigidBodyCinfo_maxForce attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_maxForce_hkRangeReal( 0.000000f, 100000.000000f, 0.000000f, 100000.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_maxForce_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_maxForce_hkDescription = { " The maximum force of character." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_maxForce_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_maxForce_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_maxForce_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_maxForce_Attributes = { hknpCharacterRigidBodyCinfo_maxForce_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_maxForce_AttributesList) };
// hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkRangeReal( 0.000000f, 100.000000f, 0.000000f, 100.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkDescription = { "The maximum speed for the simplex solver." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_Attributes = { hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_AttributesList) };
// hknpCharacterRigidBodyCinfo_supportDistance attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_supportDistance_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_supportDistance_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_supportDistance_hkDescription = { "A character is considered supported if it is less than this distance above its supporting planes." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_supportDistance_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_supportDistance_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_supportDistance_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_supportDistance_Attributes = { hknpCharacterRigidBodyCinfo_supportDistance_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_supportDistance_AttributesList) };
// hknpCharacterRigidBodyCinfo_hardSupportDistance attributes
static const hkRangeRealAttribute hknpCharacterRigidBodyCinfo_hardSupportDistance_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_hardSupportDistance_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hknpCharacterRigidBodyCinfo_hardSupportDistance_hkDescription = { "A character should keep falling until it is this distance or less from its supporting planes." };
#endif
static const hkInternalCustomAttributes::Attribute hknpCharacterRigidBodyCinfo_hardSupportDistance_AttributesList[] =
{
	{ "hk.RangeReal", &hknpCharacterRigidBodyCinfo_hardSupportDistance_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hknpCharacterRigidBodyCinfo_hardSupportDistance_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hknpCharacterRigidBodyCinfo_hardSupportDistance_Attributes = { hknpCharacterRigidBodyCinfo_hardSupportDistance_AttributesList, HK_COUNT_OF(hknpCharacterRigidBodyCinfo_hardSupportDistance_AttributesList) };
static const hkInternalClassMember hknpCharacterRigidBodyCinfoClass_Members[] =
{
	{ "collisionFilterInfo", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_collisionFilterInfo), &hknpCharacterRigidBodyCinfo_collisionFilterInfo_Attributes },
	{ "shape", &hknpShapeClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_shape), &hknpCharacterRigidBodyCinfo_shape_Attributes },
	{ "world", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_world), &hknpCharacterRigidBodyCinfo_world_Attributes },
	{ "position", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_position), &hknpCharacterRigidBodyCinfo_position_Attributes },
	{ "orientation", HK_NULL, HK_NULL, hkClassMember::TYPE_QUATERNION, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_orientation), &hknpCharacterRigidBodyCinfo_orientation_Attributes },
	{ "mass", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_mass), &hknpCharacterRigidBodyCinfo_mass_Attributes },
	{ "dynamicFriction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_dynamicFriction), &hknpCharacterRigidBodyCinfo_dynamicFriction_Attributes },
	{ "staticFriction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_staticFriction), &hknpCharacterRigidBodyCinfo_staticFriction_Attributes },
	{ "weldingTolerance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_weldingTolerance), HK_NULL },
	{ "reservedBodyId", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_reservedBodyId), &hknpCharacterRigidBodyCinfo_reservedBodyId_Attributes },
	{ "additionFlags", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_additionFlags), HK_NULL },
	{ "up", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_up), &hknpCharacterRigidBodyCinfo_up_Attributes },
	{ "maxSlope", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_maxSlope), &hknpCharacterRigidBodyCinfo_maxSlope_Attributes },
	{ "maxForce", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_maxForce), &hknpCharacterRigidBodyCinfo_maxForce_Attributes },
	{ "maxSpeedForSimplexSolver", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_maxSpeedForSimplexSolver), &hknpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_Attributes },
	{ "supportDistance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_supportDistance), &hknpCharacterRigidBodyCinfo_supportDistance_Attributes },
	{ "hardSupportDistance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpCharacterRigidBodyCinfo,m_hardSupportDistance), &hknpCharacterRigidBodyCinfo_hardSupportDistance_Attributes }
};
namespace
{
	struct hknpCharacterRigidBodyCinfo_DefaultStruct
	{
		int s_defaultOffsets[17];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		float m_mass;
		float m_weldingTolerance;
		float m_maxSlope;
		float m_maxForce;
		float m_maxSpeedForSimplexSolver;
		float m_supportDistance;
	};
	const hknpCharacterRigidBodyCinfo_DefaultStruct hknpCharacterRigidBodyCinfo_Default =
	{
		{-1,-1,-1,-1,-1,HK_OFFSET_OF(hknpCharacterRigidBodyCinfo_DefaultStruct,m_mass),hkClassMember::HK_CLASS_ZERO_DEFAULT,hkClassMember::HK_CLASS_ZERO_DEFAULT,HK_OFFSET_OF(hknpCharacterRigidBodyCinfo_DefaultStruct,m_weldingTolerance),-1,hkClassMember::HK_CLASS_ZERO_DEFAULT,-1,HK_OFFSET_OF(hknpCharacterRigidBodyCinfo_DefaultStruct,m_maxSlope),HK_OFFSET_OF(hknpCharacterRigidBodyCinfo_DefaultStruct,m_maxForce),HK_OFFSET_OF(hknpCharacterRigidBodyCinfo_DefaultStruct,m_maxSpeedForSimplexSolver),HK_OFFSET_OF(hknpCharacterRigidBodyCinfo_DefaultStruct,m_supportDistance),hkClassMember::HK_CLASS_ZERO_DEFAULT},
		100.0f,0.1f,1.04719755f,1000.0f,10.0f,0.1f
	};
}
extern const hkClass hknpCharacterRigidBodyCinfoClass;
const hkClass hknpCharacterRigidBodyCinfoClass(
	"hknpCharacterRigidBodyCinfo",
	&hkReferencedObjectClass, // parent
	sizeof(::hknpCharacterRigidBodyCinfo),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpCharacterRigidBodyCinfoClass_Members),
	HK_COUNT_OF(hknpCharacterRigidBodyCinfoClass_Members),
	&hknpCharacterRigidBodyCinfo_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpCharacterRigidBodyCinfo::staticClass()
{
	return hknpCharacterRigidBodyCinfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpCharacterRigidBodyCinfo*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthknpCharacterRigidBodyCinfo(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hknpCharacterRigidBodyCinfo(f);
}
static void HK_CALL cleanupLoadedObjecthknpCharacterRigidBodyCinfo(void* p)
{
	static_cast<hknpCharacterRigidBodyCinfo*>(p)->~hknpCharacterRigidBodyCinfo();
}
static const void* HK_CALL getVtablehknpCharacterRigidBodyCinfo()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hknpCharacterRigidBodyCinfo).hash_code()));
	#else
	return ((const void*)(typeid(hknpCharacterRigidBodyCinfo).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hknpCharacterRigidBodyCinfo)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hknpCharacterRigidBodyCinfo(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hknpCharacterRigidBodyCinfoTypeInfo;
const hkTypeInfo hknpCharacterRigidBodyCinfoTypeInfo(
	"hknpCharacterRigidBodyCinfo",
	"!hknpCharacterRigidBodyCinfo",
	finishLoadedObjecthknpCharacterRigidBodyCinfo,
	cleanupLoadedObjecthknpCharacterRigidBodyCinfo,
	getVtablehknpCharacterRigidBodyCinfo(),
	sizeof(hknpCharacterRigidBodyCinfo)
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
