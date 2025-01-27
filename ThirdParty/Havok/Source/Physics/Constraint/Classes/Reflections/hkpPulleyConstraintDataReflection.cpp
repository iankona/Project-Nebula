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

// Generated from 'Physics/Constraint/Data/Pulley/hkpPulleyConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/Pulley/hkpPulleyConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpPulleyConstraintAtomClass;
extern const hkClass hkpPulleyConstraintDataAtomsClass;
extern const hkClass hkpSetLocalTranslationsConstraintAtomClass;
extern const hkClass hkpSolverResultsClass;

//
// Class hkpPulleyConstraintData::Atoms
//
static const hkInternalClassMember hkpPulleyConstraintData_AtomsClass_Members[] =
{
	{ "translations", &hkpSetLocalTranslationsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPulleyConstraintData::Atoms,m_translations), HK_NULL },
	{ "pulley", &hkpPulleyConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpPulleyConstraintData::Atoms,m_pulley), HK_NULL }
};
const hkClass hkpPulleyConstraintDataAtomsClass(
	"hkpPulleyConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpPulleyConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpPulleyConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpPulleyConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpPulleyConstraintData::Atoms::staticClass()
{
	return hkpPulleyConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpPulleyConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpPulleyConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpPulleyConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpPulleyConstraintDataAtoms(void* p)
{
	static_cast<hkpPulleyConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpPulleyConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpPulleyConstraintDataAtomsTypeInfo(
	"hkpPulleyConstraintDataAtoms",
	"!hkpPulleyConstraintData::Atoms",
	finishLoadedObjecthkpPulleyConstraintDataAtoms,
	cleanupLoadedObjecthkpPulleyConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpPulleyConstraintData::Atoms)
	);
#endif

//
// Class hkpPulleyConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpPulleyConstraintDataClass_Members[] =
{
	{ "atoms", &hkpPulleyConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpPulleyConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpPulleyConstraintDataClass;
const hkClass hkpPulleyConstraintDataClass(
	"hkpPulleyConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpPulleyConstraintData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpPulleyConstraintDataClass_Members),
	HK_COUNT_OF(hkpPulleyConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpPulleyConstraintData::staticClass()
{
	return hkpPulleyConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpPulleyConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpPulleyConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpPulleyConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpPulleyConstraintData(void* p)
{
	static_cast<hkpPulleyConstraintData*>(p)->~hkpPulleyConstraintData();
}
static const void* HK_CALL getVtablehkpPulleyConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpPulleyConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpPulleyConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpPulleyConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpPulleyConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpPulleyConstraintDataTypeInfo;
const hkTypeInfo hkpPulleyConstraintDataTypeInfo(
	"hkpPulleyConstraintData",
	"!hkpPulleyConstraintData",
	finishLoadedObjecthkpPulleyConstraintData,
	cleanupLoadedObjecthkpPulleyConstraintData,
	getVtablehkpPulleyConstraintData(),
	sizeof(hkpPulleyConstraintData)
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
