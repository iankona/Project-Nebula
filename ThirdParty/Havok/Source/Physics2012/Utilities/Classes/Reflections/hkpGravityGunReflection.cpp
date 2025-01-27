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

// Generated from 'Physics2012/Utilities/Weapons/hkpGravityGun.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Utilities/Weapons/hkpGravityGun.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpRigidBodyClass;

//
// Class hkpGravityGun
//
extern const hkClass hkpFirstPersonGunClass;

// hkpGravityGun_maxNumObjectsPicked attributes
static const hkUiAttribute hkpGravityGun_maxNumObjectsPicked_hkUi = { True, hkUiAttribute::NONE, "Max. Objects Picked", "", "", false, false, false };
static const hkRangeInt32Attribute hkpGravityGun_maxNumObjectsPicked_hkRangeInt32( 0, 1000, 0, 1000 );
static const hkInternalCustomAttributes::Attribute hkpGravityGun_maxNumObjectsPicked_AttributesList[] =
{
	{ "hk.Ui", &hkpGravityGun_maxNumObjectsPicked_hkUi, &hkUiAttributeClass },
	{ "hk.RangeInt32", &hkpGravityGun_maxNumObjectsPicked_hkRangeInt32, &hkRangeInt32AttributeClass }
};
static const hkInternalCustomAttributes hkpGravityGun_maxNumObjectsPicked_Attributes = { hkpGravityGun_maxNumObjectsPicked_AttributesList, HK_COUNT_OF(hkpGravityGun_maxNumObjectsPicked_AttributesList) };
// hkpGravityGun_maxMassOfObjectPicked attributes
static const hkRangeRealAttribute hkpGravityGun_maxMassOfObjectPicked_hkRangeReal( 0.000000f, 1000000.000000f, 0.000000f, 1000000.000000f );
static const hkUiAttribute hkpGravityGun_maxMassOfObjectPicked_hkUi = { True, hkUiAttribute::NONE, "Max. Object Mass", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpGravityGun_maxMassOfObjectPicked_AttributesList[] =
{
	{ "hk.RangeReal", &hkpGravityGun_maxMassOfObjectPicked_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Ui", &hkpGravityGun_maxMassOfObjectPicked_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpGravityGun_maxMassOfObjectPicked_Attributes = { hkpGravityGun_maxMassOfObjectPicked_AttributesList, HK_COUNT_OF(hkpGravityGun_maxMassOfObjectPicked_AttributesList) };
// hkpGravityGun_maxDistOfObjectPicked attributes
static const hkRangeRealAttribute hkpGravityGun_maxDistOfObjectPicked_hkRangeReal( 0.000000f, 10000.000000f, 0.000000f, 10000.000000f );
static const hkUiAttribute hkpGravityGun_maxDistOfObjectPicked_hkUi = { True, hkUiAttribute::NONE, "Max. Distance", "", "", false, false, false };
static const hkSemanticsAttribute hkpGravityGun_maxDistOfObjectPicked_hkSemantics = { hkSemanticsAttribute::DISTANCE };
static const hkInternalCustomAttributes::Attribute hkpGravityGun_maxDistOfObjectPicked_AttributesList[] =
{
	{ "hk.RangeReal", &hkpGravityGun_maxDistOfObjectPicked_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Ui", &hkpGravityGun_maxDistOfObjectPicked_hkUi, &hkUiAttributeClass },
	{ "hk.Semantics", &hkpGravityGun_maxDistOfObjectPicked_hkSemantics, &hkSemanticsAttributeClass }
};
static const hkInternalCustomAttributes hkpGravityGun_maxDistOfObjectPicked_Attributes = { hkpGravityGun_maxDistOfObjectPicked_AttributesList, HK_COUNT_OF(hkpGravityGun_maxDistOfObjectPicked_AttributesList) };
// hkpGravityGun_impulseAppliedWhenObjectNotPicked attributes
static const hkRangeRealAttribute hkpGravityGun_impulseAppliedWhenObjectNotPicked_hkRangeReal( 0.000000f, 1000.000000f, 0.000000f, 1000.000000f );
static const hkUiAttribute hkpGravityGun_impulseAppliedWhenObjectNotPicked_hkUi = { True, hkUiAttribute::NONE, "Impulse on Unpicked", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpGravityGun_impulseAppliedWhenObjectNotPicked_AttributesList[] =
{
	{ "hk.RangeReal", &hkpGravityGun_impulseAppliedWhenObjectNotPicked_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Ui", &hkpGravityGun_impulseAppliedWhenObjectNotPicked_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpGravityGun_impulseAppliedWhenObjectNotPicked_Attributes = { hkpGravityGun_impulseAppliedWhenObjectNotPicked_AttributesList, HK_COUNT_OF(hkpGravityGun_impulseAppliedWhenObjectNotPicked_AttributesList) };
// hkpGravityGun_throwVelocity attributes
static const hkRangeRealAttribute hkpGravityGun_throwVelocity_hkRangeReal( 0.000000f, 1000.000000f, 0.000000f, 100.000000f );
static const hkUiAttribute hkpGravityGun_throwVelocity_hkUi = { True, hkUiAttribute::NONE, "Throw Velocity", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpGravityGun_throwVelocity_AttributesList[] =
{
	{ "hk.RangeReal", &hkpGravityGun_throwVelocity_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Ui", &hkpGravityGun_throwVelocity_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpGravityGun_throwVelocity_Attributes = { hkpGravityGun_throwVelocity_AttributesList, HK_COUNT_OF(hkpGravityGun_throwVelocity_AttributesList) };
// hkpGravityGun_capturedObjectPosition attributes
static const hkRangeRealAttribute hkpGravityGun_capturedObjectPosition_hkRangeReal( -10000.000000f, 100000.000000f, -10000.000000f, 100000.000000f );
static const hkUiAttribute hkpGravityGun_capturedObjectPosition_hkUi = { True, hkUiAttribute::NONE, "Captured Object's Position", "", "", false, false, True };
static const hkSemanticsAttribute hkpGravityGun_capturedObjectPosition_hkSemantics = { hkSemanticsAttribute::POSITION };
static const hkInternalCustomAttributes::Attribute hkpGravityGun_capturedObjectPosition_AttributesList[] =
{
	{ "hk.RangeReal", &hkpGravityGun_capturedObjectPosition_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Ui", &hkpGravityGun_capturedObjectPosition_hkUi, &hkUiAttributeClass },
	{ "hk.Semantics", &hkpGravityGun_capturedObjectPosition_hkSemantics, &hkSemanticsAttributeClass }
};
static const hkInternalCustomAttributes hkpGravityGun_capturedObjectPosition_Attributes = { hkpGravityGun_capturedObjectPosition_AttributesList, HK_COUNT_OF(hkpGravityGun_capturedObjectPosition_AttributesList) };
// hkpGravityGun_capturedObjectsOffset attributes
static const hkRangeRealAttribute hkpGravityGun_capturedObjectsOffset_hkRangeReal( -10000.000000f, 100000.000000f, -10000.000000f, 100000.000000f );
static const hkUiAttribute hkpGravityGun_capturedObjectsOffset_hkUi = { True, hkUiAttribute::NONE, "Captured Object's Offset", "", "", false, false, True };
static const hkSemanticsAttribute hkpGravityGun_capturedObjectsOffset_hkSemantics = { hkSemanticsAttribute::POSITION };
static const hkInternalCustomAttributes::Attribute hkpGravityGun_capturedObjectsOffset_AttributesList[] =
{
	{ "hk.RangeReal", &hkpGravityGun_capturedObjectsOffset_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Ui", &hkpGravityGun_capturedObjectsOffset_hkUi, &hkUiAttributeClass },
	{ "hk.Semantics", &hkpGravityGun_capturedObjectsOffset_hkSemantics, &hkSemanticsAttributeClass }
};
static const hkInternalCustomAttributes hkpGravityGun_capturedObjectsOffset_Attributes = { hkpGravityGun_capturedObjectsOffset_AttributesList, HK_COUNT_OF(hkpGravityGun_capturedObjectsOffset_AttributesList) };
static const hkInternalClassMember hkpGravityGunClass_Members[] =
{
	{ "grabbedBodies", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_POINTER, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpGravityGun,m_grabbedBodies), HK_NULL },
	{ "maxNumObjectsPicked", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpGravityGun,m_maxNumObjectsPicked), &hkpGravityGun_maxNumObjectsPicked_Attributes },
	{ "maxMassOfObjectPicked", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpGravityGun,m_maxMassOfObjectPicked), &hkpGravityGun_maxMassOfObjectPicked_Attributes },
	{ "maxDistOfObjectPicked", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpGravityGun,m_maxDistOfObjectPicked), &hkpGravityGun_maxDistOfObjectPicked_Attributes },
	{ "impulseAppliedWhenObjectNotPicked", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpGravityGun,m_impulseAppliedWhenObjectNotPicked), &hkpGravityGun_impulseAppliedWhenObjectNotPicked_Attributes },
	{ "throwVelocity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpGravityGun,m_throwVelocity), &hkpGravityGun_throwVelocity_Attributes },
	{ "capturedObjectPosition", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpGravityGun,m_capturedObjectPosition), &hkpGravityGun_capturedObjectPosition_Attributes },
	{ "capturedObjectsOffset", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpGravityGun,m_capturedObjectsOffset), &hkpGravityGun_capturedObjectsOffset_Attributes }
};
namespace
{
	struct hkpGravityGun_DefaultStruct
	{
		int s_defaultOffsets[8];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		hkInt32 m_maxNumObjectsPicked;
		float m_maxMassOfObjectPicked;
		float m_maxDistOfObjectPicked;
		float m_impulseAppliedWhenObjectNotPicked;
		float m_throwVelocity;
		_hkVector4 m_capturedObjectPosition;
		_hkVector4 m_capturedObjectsOffset;
	};
	const hkpGravityGun_DefaultStruct hkpGravityGun_Default =
	{
		{-1,HK_OFFSET_OF(hkpGravityGun_DefaultStruct,m_maxNumObjectsPicked),HK_OFFSET_OF(hkpGravityGun_DefaultStruct,m_maxMassOfObjectPicked),HK_OFFSET_OF(hkpGravityGun_DefaultStruct,m_maxDistOfObjectPicked),HK_OFFSET_OF(hkpGravityGun_DefaultStruct,m_impulseAppliedWhenObjectNotPicked),HK_OFFSET_OF(hkpGravityGun_DefaultStruct,m_throwVelocity),HK_OFFSET_OF(hkpGravityGun_DefaultStruct,m_capturedObjectPosition),HK_OFFSET_OF(hkpGravityGun_DefaultStruct,m_capturedObjectsOffset)},
10,200.0,50.0,100.0,50.0,	{2.5f,0.6f,0.0f},	{0.0f,1.0f,0.0f}
	};
}
extern const hkClass hkpGravityGunClass;
const hkClass hkpGravityGunClass(
	"hkpGravityGun",
	&hkpFirstPersonGunClass, // parent
	sizeof(::hkpGravityGun),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpGravityGunClass_Members),
	HK_COUNT_OF(hkpGravityGunClass_Members),
	&hkpGravityGun_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpGravityGun::staticClass()
{
	return hkpGravityGunClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpGravityGun*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpGravityGun(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpGravityGun(f);
}
static void HK_CALL cleanupLoadedObjecthkpGravityGun(void* p)
{
	static_cast<hkpGravityGun*>(p)->~hkpGravityGun();
}
static const void* HK_CALL getVtablehkpGravityGun()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpGravityGun).hash_code()));
	#else
	return ((const void*)(typeid(hkpGravityGun).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpGravityGun)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpGravityGun(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpGravityGunTypeInfo;
const hkTypeInfo hkpGravityGunTypeInfo(
	"hkpGravityGun",
	"!hkpGravityGun",
	finishLoadedObjecthkpGravityGun,
	cleanupLoadedObjecthkpGravityGun,
	getVtablehkpGravityGun(),
	sizeof(hkpGravityGun)
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
