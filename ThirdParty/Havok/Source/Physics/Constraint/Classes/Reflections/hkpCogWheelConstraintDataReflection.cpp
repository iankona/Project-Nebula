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

// Generated from 'Physics/Constraint/Data/CogWheel/hkpCogWheelConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/CogWheel/hkpCogWheelConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpCogWheelConstraintAtomClass;
extern const hkClass hkpCogWheelConstraintDataAtomsClass;
extern const hkClass hkpSetLocalTransformsConstraintAtomClass;
extern const hkClass hkpSolverResultsClass;

//
// Class hkpCogWheelConstraintData::Atoms
//
static const hkInternalClassMember hkpCogWheelConstraintData_AtomsClass_Members[] =
{
	{ "transforms", &hkpSetLocalTransformsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCogWheelConstraintData::Atoms,m_transforms), HK_NULL },
	{ "cogWheels", &hkpCogWheelConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCogWheelConstraintData::Atoms,m_cogWheels), HK_NULL }
};
const hkClass hkpCogWheelConstraintDataAtomsClass(
	"hkpCogWheelConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpCogWheelConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpCogWheelConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpCogWheelConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCogWheelConstraintData::Atoms::staticClass()
{
	return hkpCogWheelConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpCogWheelConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpCogWheelConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpCogWheelConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpCogWheelConstraintDataAtoms(void* p)
{
	static_cast<hkpCogWheelConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpCogWheelConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpCogWheelConstraintDataAtomsTypeInfo(
	"hkpCogWheelConstraintDataAtoms",
	"!hkpCogWheelConstraintData::Atoms",
	finishLoadedObjecthkpCogWheelConstraintDataAtoms,
	cleanupLoadedObjecthkpCogWheelConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpCogWheelConstraintData::Atoms)
	);
#endif

//
// Class hkpCogWheelConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpCogWheelConstraintDataClass_Members[] =
{
	{ "atoms", &hkpCogWheelConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpCogWheelConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpCogWheelConstraintDataClass;
const hkClass hkpCogWheelConstraintDataClass(
	"hkpCogWheelConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpCogWheelConstraintData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpCogWheelConstraintDataClass_Members),
	HK_COUNT_OF(hkpCogWheelConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCogWheelConstraintData::staticClass()
{
	return hkpCogWheelConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpCogWheelConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpCogWheelConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpCogWheelConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpCogWheelConstraintData(void* p)
{
	static_cast<hkpCogWheelConstraintData*>(p)->~hkpCogWheelConstraintData();
}
static const void* HK_CALL getVtablehkpCogWheelConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpCogWheelConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpCogWheelConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpCogWheelConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpCogWheelConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpCogWheelConstraintDataTypeInfo;
const hkTypeInfo hkpCogWheelConstraintDataTypeInfo(
	"hkpCogWheelConstraintData",
	"!hkpCogWheelConstraintData",
	finishLoadedObjecthkpCogWheelConstraintData,
	cleanupLoadedObjecthkpCogWheelConstraintData,
	getVtablehkpCogWheelConstraintData(),
	sizeof(hkpCogWheelConstraintData)
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
