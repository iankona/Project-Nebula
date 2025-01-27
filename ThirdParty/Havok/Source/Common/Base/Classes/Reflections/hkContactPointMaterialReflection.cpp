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

// Generated from 'Common/Base/Types/Physics/ContactPoint/hkContactPointMaterial.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Base/Types/Physics/ContactPoint/hkContactPointMaterial.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkUFloat8Class;

//
// Enum hkContactPointMaterial::FlagEnum
//
static const hkInternalClassEnumItem hkContactPointMaterialFlagEnumEnumItems[] =
{
	{1, "CONTACT_IS_NEW"},
	{2, "CONTACT_USES_SOLVER_PATH2"},
	{4, "CONTACT_BREAKOFF_OBJECT_ID_SMALLER"},
	{8, "CONTACT_IS_DISABLED"},
};
static const hkInternalClassEnum hkContactPointMaterialEnums[] = {
	{"FlagEnum", hkContactPointMaterialFlagEnumEnumItems, 4, HK_NULL, 0 }
};
const hkClassEnum* hkContactPointMaterialFlagEnumEnum = reinterpret_cast<const hkClassEnum*>(&hkContactPointMaterialEnums[0]);

//
// Class hkContactPointMaterial
//
const hkInternalClassMember hkContactPointMaterial::Members[] =
{
	{ "userData", HK_NULL, HK_NULL, hkClassMember::TYPE_ULONG, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkContactPointMaterial,m_userData), HK_NULL },
	{ "friction", &hkUFloat8Class, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkContactPointMaterial,m_friction), HK_NULL },
	{ "restitution", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkContactPointMaterial,m_restitution), HK_NULL },
	{ "maxImpulse", &hkUFloat8Class, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkContactPointMaterial,m_maxImpulse), HK_NULL },
	{ "flags", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkContactPointMaterial,m_flags), HK_NULL }
};
namespace
{
	struct hkContactPointMaterial_DefaultStruct
	{
		int s_defaultOffsets[5];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
	};
	const hkContactPointMaterial_DefaultStruct hkContactPointMaterial_Default =
	{
		{hkClassMember::HK_CLASS_ZERO_DEFAULT,-1,-1,-1,-1},
		
	};
}
extern const hkClass hkContactPointMaterialClass;
const hkClass hkContactPointMaterialClass(
	"hkContactPointMaterial",
	HK_NULL, // parent
	sizeof(::hkContactPointMaterial),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkContactPointMaterialEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkContactPointMaterial::Members),
	HK_COUNT_OF(hkContactPointMaterial::Members),
	&hkContactPointMaterial_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkContactPointMaterial::staticClass()
{
	return hkContactPointMaterialClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkContactPointMaterial*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkContactPointMaterial(void* p)
{
	static_cast<hkContactPointMaterial*>(p)->~hkContactPointMaterial();
}
extern const hkTypeInfo hkContactPointMaterialTypeInfo;
const hkTypeInfo hkContactPointMaterialTypeInfo(
	"hkContactPointMaterial",
	"!hkContactPointMaterial",
	HK_NULL,
	cleanupLoadedObjecthkContactPointMaterial,
	HK_NULL,
	sizeof(hkContactPointMaterial)
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
