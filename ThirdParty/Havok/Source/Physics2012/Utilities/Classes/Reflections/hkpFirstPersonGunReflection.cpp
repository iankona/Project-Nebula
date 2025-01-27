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

// Generated from 'Physics2012/Utilities/Weapons/hkpFirstPersonGun.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Utilities/Weapons/hkpFirstPersonGun.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkContactPointClass;
extern const hkClass hkpFirstPersonGunBulletListenerClass;
extern const hkClass hkpRigidBodyClass;
extern const hkClassEnum* hkpFirstPersonGunKeyboardKeyEnum;
extern const hkClassEnum* hkpFirstPersonGunTypeEnum;

//
// Enum hkpFirstPersonGun::Type
//
static const hkInternalClassEnumItem hkpFirstPersonGunTypeEnumItems[] =
{
	{0, "WEAPON_TYPE_INVALID"},
	{1, "WEAPON_TYPE_BALLGUN"},
	{2, "WEAPON_TYPE_GRENADEGUN"},
	{3, "WEAPON_TYPE_GRAVITYGUN"},
	{4, "WEAPON_TYPE_MOUNTEDBALLGUN"},
	{5, "WEAPON_TYPE_TWEAKERGUN"},
	{6, "WEAPON_TYPE_MISSILEGUN"},
	{7, "WEAPON_TYPE_RAYCASTGUN"},
	{8, "WEAPON_TYPE_SPHEREGUN"},
	{9, "WEAPON_TYPE_STICKYGUN"},
	{10, "WEAPON_TYPE_NUM_TYPES"},
};

//
// Enum hkpFirstPersonGun::KeyboardKey
//
static const hkInternalClassEnumItem hkpFirstPersonGunKeyboardKeyEnumItems[] =
{
	{112, "KEY_F1"},
	{113, "KEY_F2"},
	{114, "KEY_F3"},
	{115, "KEY_F4"},
	{116, "KEY_F5"},
	{117, "KEY_F6"},
	{118, "KEY_F7"},
	{119, "KEY_F8"},
	{120, "KEY_F9"},
	{121, "KEY_F10"},
	{122, "KEY_F11"},
	{123, "KEY_F12"},
};
static const hkInternalClassEnum hkpFirstPersonGunEnums[] = {
	{"Type", hkpFirstPersonGunTypeEnumItems, 11, HK_NULL, 0 },
	{"KeyboardKey", hkpFirstPersonGunKeyboardKeyEnumItems, 12, HK_NULL, 0 }
};
const hkClassEnum* hkpFirstPersonGunTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkpFirstPersonGunEnums[0]);
const hkClassEnum* hkpFirstPersonGunKeyboardKeyEnum = reinterpret_cast<const hkClassEnum*>(&hkpFirstPersonGunEnums[1]);

//
// Class hkpFirstPersonGun
//
extern const hkClass hkReferencedObjectClass;

// hkpFirstPersonGun_name attributes
static const hkUiAttribute hkpFirstPersonGun_name_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpFirstPersonGun_name_AttributesList[] =
{
	{ "hk.Ui", &hkpFirstPersonGun_name_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpFirstPersonGun_name_Attributes = { hkpFirstPersonGun_name_AttributesList, HK_COUNT_OF(hkpFirstPersonGun_name_AttributesList) };
// hkpFirstPersonGun_keyboardKey attributes
static const hkUiAttribute hkpFirstPersonGun_keyboardKey_hkUi = { True, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpFirstPersonGun_keyboardKey_AttributesList[] =
{
	{ "hk.Ui", &hkpFirstPersonGun_keyboardKey_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpFirstPersonGun_keyboardKey_Attributes = { hkpFirstPersonGun_keyboardKey_AttributesList, HK_COUNT_OF(hkpFirstPersonGun_keyboardKey_AttributesList) };
static const hkInternalClassMember hkpFirstPersonGunClass_Members[] =
{
	{ "type", HK_NULL, HK_NULL, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpFirstPersonGun,m_type), HK_NULL },
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpFirstPersonGun,m_name), &hkpFirstPersonGun_name_Attributes },
	{ "keyboardKey", HK_NULL, hkpFirstPersonGunKeyboardKeyEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkpFirstPersonGun,m_keyboardKey), &hkpFirstPersonGun_keyboardKey_Attributes },
	{ "listeners", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_POINTER, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpFirstPersonGun,m_listeners), HK_NULL }
};
namespace
{
	struct hkpFirstPersonGun_DefaultStruct
	{
		int s_defaultOffsets[4];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		const char* /* hkStringPtr */ m_name;
		hkUint8 /* hkEnum< enum hkpFirstPersonGun::KeyboardKey, hkUint8 > */ m_keyboardKey;
	};
	HK_ALIGN( static const char default_string_hkpFirstPersonGun_name[], 2 ) = "";
	const hkpFirstPersonGun_DefaultStruct hkpFirstPersonGun_Default =
	{
		{-1,HK_OFFSET_OF(hkpFirstPersonGun_DefaultStruct,m_name),HK_OFFSET_OF(hkpFirstPersonGun_DefaultStruct,m_keyboardKey),-1},
		default_string_hkpFirstPersonGun_name,hkpFirstPersonGun::KEY_F2
	};
}
extern const hkClass hkpFirstPersonGunClass;
const hkClass hkpFirstPersonGunClass(
	"hkpFirstPersonGun",
	&hkReferencedObjectClass, // parent
	sizeof(::hkpFirstPersonGun),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpFirstPersonGunEnums),
	2, // enums
	reinterpret_cast<const hkClassMember*>(hkpFirstPersonGunClass_Members),
	HK_COUNT_OF(hkpFirstPersonGunClass_Members),
	&hkpFirstPersonGun_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpFirstPersonGun::staticClass()
{
	return hkpFirstPersonGunClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpFirstPersonGun*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpFirstPersonGun(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpFirstPersonGun(f);
}
static void HK_CALL cleanupLoadedObjecthkpFirstPersonGun(void* p)
{
	static_cast<hkpFirstPersonGun*>(p)->~hkpFirstPersonGun();
}
static const void* HK_CALL getVtablehkpFirstPersonGun()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpFirstPersonGun).hash_code()));
	#else
	return ((const void*)(typeid(hkpFirstPersonGun).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpFirstPersonGun)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpFirstPersonGun(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpFirstPersonGunTypeInfo;
const hkTypeInfo hkpFirstPersonGunTypeInfo(
	"hkpFirstPersonGun",
	"!hkpFirstPersonGun",
	finishLoadedObjecthkpFirstPersonGun,
	cleanupLoadedObjecthkpFirstPersonGun,
	getVtablehkpFirstPersonGun(),
	sizeof(hkpFirstPersonGun)
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
