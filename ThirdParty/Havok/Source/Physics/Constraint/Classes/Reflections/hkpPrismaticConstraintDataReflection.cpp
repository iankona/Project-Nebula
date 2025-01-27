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

// Generated from 'Physics/Constraint/Data/Prismatic/hkpPrismaticConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/Prismatic/hkpPrismaticConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpAngConstraintAtomClass;
extern const hkClass hkpLinConstraintAtomClass;
extern const hkClass hkpLinFrictionConstraintAtomClass;
extern const hkClass hkpLinLimitConstraintAtomClass;
extern const hkClass hkpLinMotorConstraintAtomClass;
extern const hkClass hkpPrismaticConstraintDataAtomsClass;
extern const hkClass hkpSetLocalTransformsConstraintAtomClass;
extern const hkClass hkpSolverResultsClass;

//
// Enum hkpPrismaticConstraintData::Atoms::Axis
//
static const hkInternalClassEnumItem hkpPrismaticConstraintDataAtomsAxisEnumItems[] =
{
	{0, "AXIS_SHAFT"},
	{1, "AXIS_PERP_TO_SHAFT"},
};
static const hkInternalClassEnum hkpPrismaticConstraintDataAtomsEnums[] = {
	{"Axis", hkpPrismaticConstraintDataAtomsAxisEnumItems, 2, HK_NULL, 0 }
};
const hkClassEnum* hkpPrismaticConstraintDataAtomsAxisEnum = reinterpret_cast<const hkClassEnum*>(&hkpPrismaticConstraintDataAtomsEnums[0]);

//
// Class hkpPrismaticConstraintData::Atoms
//
static const hkInternalClassMember hkpPrismaticConstraintData_AtomsClass_Members[] =
{
	{ "transforms", &hkpSetLocalTransformsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPrismaticConstraintData::Atoms,m_transforms), HK_NULL },
	{ "motor", &hkpLinMotorConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPrismaticConstraintData::Atoms,m_motor), HK_NULL },
	{ "friction", &hkpLinFrictionConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPrismaticConstraintData::Atoms,m_friction), HK_NULL },
	{ "ang", &hkpAngConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPrismaticConstraintData::Atoms,m_ang), HK_NULL },
	{ "lin0", &hkpLinConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPrismaticConstraintData::Atoms,m_lin0), HK_NULL },
	{ "lin1", &hkpLinConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPrismaticConstraintData::Atoms,m_lin1), HK_NULL },
	{ "linLimit", &hkpLinLimitConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPrismaticConstraintData::Atoms,m_linLimit), HK_NULL }
};
const hkClass hkpPrismaticConstraintDataAtomsClass(
	"hkpPrismaticConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpPrismaticConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpPrismaticConstraintDataAtomsEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpPrismaticConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpPrismaticConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpPrismaticConstraintData::Atoms::staticClass()
{
	return hkpPrismaticConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpPrismaticConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpPrismaticConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpPrismaticConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpPrismaticConstraintDataAtoms(void* p)
{
	static_cast<hkpPrismaticConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpPrismaticConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpPrismaticConstraintDataAtomsTypeInfo(
	"hkpPrismaticConstraintDataAtoms",
	"!hkpPrismaticConstraintData::Atoms",
	finishLoadedObjecthkpPrismaticConstraintDataAtoms,
	cleanupLoadedObjecthkpPrismaticConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpPrismaticConstraintData::Atoms)
	);
#endif

//
// Class hkpPrismaticConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpPrismaticConstraintDataClass_Members[] =
{
	{ "atoms", &hkpPrismaticConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpPrismaticConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpPrismaticConstraintDataClass;
const hkClass hkpPrismaticConstraintDataClass(
	"hkpPrismaticConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpPrismaticConstraintData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpPrismaticConstraintDataClass_Members),
	HK_COUNT_OF(hkpPrismaticConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpPrismaticConstraintData::staticClass()
{
	return hkpPrismaticConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpPrismaticConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpPrismaticConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpPrismaticConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpPrismaticConstraintData(void* p)
{
	static_cast<hkpPrismaticConstraintData*>(p)->~hkpPrismaticConstraintData();
}
static const void* HK_CALL getVtablehkpPrismaticConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpPrismaticConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpPrismaticConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpPrismaticConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpPrismaticConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpPrismaticConstraintDataTypeInfo;
const hkTypeInfo hkpPrismaticConstraintDataTypeInfo(
	"hkpPrismaticConstraintData",
	"!hkpPrismaticConstraintData",
	finishLoadedObjecthkpPrismaticConstraintData,
	cleanupLoadedObjecthkpPrismaticConstraintData,
	getVtablehkpPrismaticConstraintData(),
	sizeof(hkpPrismaticConstraintData)
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
