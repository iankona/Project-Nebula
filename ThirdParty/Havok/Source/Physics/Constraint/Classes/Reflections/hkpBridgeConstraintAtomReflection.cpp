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

// Generated from 'Physics/Constraint/Atom/Bridge/hkpBridgeConstraintAtom.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Atom/Bridge/hkpBridgeConstraintAtom.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpBridgeConstraintAtomClass;
extern const hkClass hkpConstraintDataClass;

//
// Class hkpBridgeConstraintAtom
//
extern const hkClass hkpConstraintAtomClass;

static const hkInternalClassMember hkpBridgeConstraintAtomClass_Members[] =
{
	{ "buildJacobianFunc", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpBridgeConstraintAtom,m_buildJacobianFunc), HK_NULL },
	{ "constraintData", &hkpConstraintDataClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0|hkClassMember::NOT_OWNED, HK_OFFSET_OF(hkpBridgeConstraintAtom,m_constraintData), HK_NULL },
	{ "padding", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 4, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpBridgeConstraintAtom,m_padding), HK_NULL }
};
const hkClass hkpBridgeConstraintAtomClass(
	"hkpBridgeConstraintAtom",
	&hkpConstraintAtomClass, // parent
	sizeof(::hkpBridgeConstraintAtom),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpBridgeConstraintAtomClass_Members),
	HK_COUNT_OF(hkpBridgeConstraintAtomClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpBridgeConstraintAtom::staticClass()
{
	return hkpBridgeConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpBridgeConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpBridgeConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpBridgeConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpBridgeConstraintAtom(void* p)
{
	static_cast<hkpBridgeConstraintAtom*>(p)->~hkpBridgeConstraintAtom();
}
extern const hkTypeInfo hkpBridgeConstraintAtomTypeInfo;
const hkTypeInfo hkpBridgeConstraintAtomTypeInfo(
	"hkpBridgeConstraintAtom",
	"!hkpBridgeConstraintAtom",
	finishLoadedObjecthkpBridgeConstraintAtom,
	cleanupLoadedObjecthkpBridgeConstraintAtom,
	HK_NULL,
	sizeof(hkpBridgeConstraintAtom)
	);
#endif

//
// Class hkpBridgeAtoms
//
static const hkInternalClassMember hkpBridgeAtomsClass_Members[] =
{
	{ "bridgeAtom", &hkpBridgeConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpBridgeAtoms,m_bridgeAtom), HK_NULL }
};
extern const hkClass hkpBridgeAtomsClass;
const hkClass hkpBridgeAtomsClass(
	"hkpBridgeAtoms",
	HK_NULL, // parent
	sizeof(::hkpBridgeAtoms),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpBridgeAtomsClass_Members),
	HK_COUNT_OF(hkpBridgeAtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpBridgeAtoms::staticClass()
{
	return hkpBridgeAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpBridgeAtoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpBridgeAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpBridgeAtoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpBridgeAtoms(void* p)
{
	static_cast<hkpBridgeAtoms*>(p)->~hkpBridgeAtoms();
}
extern const hkTypeInfo hkpBridgeAtomsTypeInfo;
const hkTypeInfo hkpBridgeAtomsTypeInfo(
	"hkpBridgeAtoms",
	"!hkpBridgeAtoms",
	finishLoadedObjecthkpBridgeAtoms,
	cleanupLoadedObjecthkpBridgeAtoms,
	HK_NULL,
	sizeof(hkpBridgeAtoms)
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
