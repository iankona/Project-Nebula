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

// Generated from 'Physics/Constraint/Data/Rotational/hkpRotationalConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/Rotational/hkpRotationalConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpAngConstraintAtomClass;
extern const hkClass hkpRotationalConstraintDataAtomsClass;
extern const hkClass hkpSetLocalRotationsConstraintAtomClass;
extern const hkClass hkpSolverResultsClass;

//
// Class hkpRotationalConstraintData::Atoms
//
static const hkInternalClassMember hkpRotationalConstraintData_AtomsClass_Members[] =
{
	{ "rotations", &hkpSetLocalRotationsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpRotationalConstraintData::Atoms,m_rotations), HK_NULL },
	{ "ang", &hkpAngConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpRotationalConstraintData::Atoms,m_ang), HK_NULL }
};
const hkClass hkpRotationalConstraintDataAtomsClass(
	"hkpRotationalConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpRotationalConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpRotationalConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpRotationalConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpRotationalConstraintData::Atoms::staticClass()
{
	return hkpRotationalConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpRotationalConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpRotationalConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpRotationalConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpRotationalConstraintDataAtoms(void* p)
{
	static_cast<hkpRotationalConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpRotationalConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpRotationalConstraintDataAtomsTypeInfo(
	"hkpRotationalConstraintDataAtoms",
	"!hkpRotationalConstraintData::Atoms",
	finishLoadedObjecthkpRotationalConstraintDataAtoms,
	cleanupLoadedObjecthkpRotationalConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpRotationalConstraintData::Atoms)
	);
#endif

//
// Class hkpRotationalConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpRotationalConstraintDataClass_Members[] =
{
	{ "atoms", &hkpRotationalConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpRotationalConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpRotationalConstraintDataClass;
const hkClass hkpRotationalConstraintDataClass(
	"hkpRotationalConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpRotationalConstraintData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpRotationalConstraintDataClass_Members),
	HK_COUNT_OF(hkpRotationalConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpRotationalConstraintData::staticClass()
{
	return hkpRotationalConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpRotationalConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpRotationalConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpRotationalConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpRotationalConstraintData(void* p)
{
	static_cast<hkpRotationalConstraintData*>(p)->~hkpRotationalConstraintData();
}
static const void* HK_CALL getVtablehkpRotationalConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpRotationalConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpRotationalConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpRotationalConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpRotationalConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpRotationalConstraintDataTypeInfo;
const hkTypeInfo hkpRotationalConstraintDataTypeInfo(
	"hkpRotationalConstraintData",
	"!hkpRotationalConstraintData",
	finishLoadedObjecthkpRotationalConstraintData,
	cleanupLoadedObjecthkpRotationalConstraintData,
	getVtablehkpRotationalConstraintData(),
	sizeof(hkpRotationalConstraintData)
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
