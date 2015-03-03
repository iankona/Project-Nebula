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

// Generated from 'Physics/Constraint/Data/WheelFriction/hkpWheelFrictionConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/WheelFriction/hkpWheelFrictionConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpSetLocalTransformsConstraintAtomClass;
extern const hkClass hkpWheelFrictionConstraintAtomClass;
extern const hkClass hkpWheelFrictionConstraintDataAtomsClass;

//
// Class hkpWheelFrictionConstraintData::Runtime
//
extern const hkClass hkpWheelFrictionConstraintDataRuntimeClass;
const hkClass hkpWheelFrictionConstraintDataRuntimeClass(
	"hkpWheelFrictionConstraintDataRuntime",
	HK_NULL, // parent
	sizeof(hkpWheelFrictionConstraintData::Runtime),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	HK_NULL,
	0,
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpWheelFrictionConstraintData::Runtime::staticClass()
{
	return hkpWheelFrictionConstraintDataRuntimeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpWheelFrictionConstraintData::Runtime*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkpWheelFrictionConstraintDataRuntime(void* p)
{
	static_cast<hkpWheelFrictionConstraintData::Runtime*>(p)->~Runtime();
}
extern const hkTypeInfo hkpWheelFrictionConstraintDataRuntimeTypeInfo;
const hkTypeInfo hkpWheelFrictionConstraintDataRuntimeTypeInfo(
	"hkpWheelFrictionConstraintDataRuntime",
	"!hkpWheelFrictionConstraintData::Runtime",
	HK_NULL,
	cleanupLoadedObjecthkpWheelFrictionConstraintDataRuntime,
	HK_NULL,
	sizeof(hkpWheelFrictionConstraintData::Runtime)
	);
#endif

//
// Class hkpWheelFrictionConstraintData::Atoms
//
static const hkInternalClassMember hkpWheelFrictionConstraintData_AtomsClass_Members[] =
{
	{ "transforms", &hkpSetLocalTransformsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpWheelFrictionConstraintData::Atoms,m_transforms), HK_NULL },
	{ "friction", &hkpWheelFrictionConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpWheelFrictionConstraintData::Atoms,m_friction), HK_NULL }
};
const hkClass hkpWheelFrictionConstraintDataAtomsClass(
	"hkpWheelFrictionConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpWheelFrictionConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpWheelFrictionConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpWheelFrictionConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpWheelFrictionConstraintData::Atoms::staticClass()
{
	return hkpWheelFrictionConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpWheelFrictionConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpWheelFrictionConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpWheelFrictionConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpWheelFrictionConstraintDataAtoms(void* p)
{
	static_cast<hkpWheelFrictionConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpWheelFrictionConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpWheelFrictionConstraintDataAtomsTypeInfo(
	"hkpWheelFrictionConstraintDataAtoms",
	"!hkpWheelFrictionConstraintData::Atoms",
	finishLoadedObjecthkpWheelFrictionConstraintDataAtoms,
	cleanupLoadedObjecthkpWheelFrictionConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpWheelFrictionConstraintData::Atoms)
	);
#endif

//
// Class hkpWheelFrictionConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpWheelFrictionConstraintDataClass_Members[] =
{
	{ "atoms", &hkpWheelFrictionConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpWheelFrictionConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpWheelFrictionConstraintDataClass;
const hkClass hkpWheelFrictionConstraintDataClass(
	"hkpWheelFrictionConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpWheelFrictionConstraintData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpWheelFrictionConstraintDataClass_Members),
	HK_COUNT_OF(hkpWheelFrictionConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpWheelFrictionConstraintData::staticClass()
{
	return hkpWheelFrictionConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpWheelFrictionConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpWheelFrictionConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpWheelFrictionConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpWheelFrictionConstraintData(void* p)
{
	static_cast<hkpWheelFrictionConstraintData*>(p)->~hkpWheelFrictionConstraintData();
}
static const void* HK_CALL getVtablehkpWheelFrictionConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpWheelFrictionConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpWheelFrictionConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpWheelFrictionConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpWheelFrictionConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpWheelFrictionConstraintDataTypeInfo;
const hkTypeInfo hkpWheelFrictionConstraintDataTypeInfo(
	"hkpWheelFrictionConstraintData",
	"!hkpWheelFrictionConstraintData",
	finishLoadedObjecthkpWheelFrictionConstraintData,
	cleanupLoadedObjecthkpWheelFrictionConstraintData,
	getVtablehkpWheelFrictionConstraintData(),
	sizeof(hkpWheelFrictionConstraintData)
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