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

// Generated from 'Physics2012/Dynamics/Constraint/Atom/hkpModifierConstraintAtom.h'
#include <Physics2012/Dynamics/hkpDynamics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Dynamics/Constraint/Atom/hkpModifierConstraintAtom.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpConstraintAtomClass;

//
// Class hkpModifierConstraintAtom
//

static const hkInternalClassMember hkpModifierConstraintAtomClass_Members[] =
{
	{ "modifierAtomSize", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_16, HK_OFFSET_OF(hkpModifierConstraintAtom,m_modifierAtomSize), HK_NULL },
	{ "childSize", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpModifierConstraintAtom,m_childSize), HK_NULL },
	{ "child", &hkpConstraintAtomClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpModifierConstraintAtom,m_child), HK_NULL },
	{ "pad", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 2, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpModifierConstraintAtom,m_pad), HK_NULL }
};
extern const hkClass hkpModifierConstraintAtomClass;
const hkClass hkpModifierConstraintAtomClass(
	"hkpModifierConstraintAtom",
	&hkpConstraintAtomClass, // parent
	sizeof(::hkpModifierConstraintAtom),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpModifierConstraintAtomClass_Members),
	HK_COUNT_OF(hkpModifierConstraintAtomClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpModifierConstraintAtom::staticClass()
{
	return hkpModifierConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpModifierConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpModifierConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpModifierConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpModifierConstraintAtom(void* p)
{
	static_cast<hkpModifierConstraintAtom*>(p)->~hkpModifierConstraintAtom();
}
extern const hkTypeInfo hkpModifierConstraintAtomTypeInfo;
const hkTypeInfo hkpModifierConstraintAtomTypeInfo(
	"hkpModifierConstraintAtom",
	"!hkpModifierConstraintAtom",
	finishLoadedObjecthkpModifierConstraintAtom,
	cleanupLoadedObjecthkpModifierConstraintAtom,
	HK_NULL,
	sizeof(hkpModifierConstraintAtom)
	);
#endif

//
// Class hkpMassChangerModifierConstraintAtom
//

static const hkInternalClassMember hkpMassChangerModifierConstraintAtomClass_Members[] =
{
	{ "factorA", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMassChangerModifierConstraintAtom,m_factorA), HK_NULL },
	{ "factorB", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMassChangerModifierConstraintAtom,m_factorB), HK_NULL }
};
extern const hkClass hkpMassChangerModifierConstraintAtomClass;
const hkClass hkpMassChangerModifierConstraintAtomClass(
	"hkpMassChangerModifierConstraintAtom",
	&hkpModifierConstraintAtomClass, // parent
	sizeof(::hkpMassChangerModifierConstraintAtom),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpMassChangerModifierConstraintAtomClass_Members),
	HK_COUNT_OF(hkpMassChangerModifierConstraintAtomClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpMassChangerModifierConstraintAtom::staticClass()
{
	return hkpMassChangerModifierConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpMassChangerModifierConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpMassChangerModifierConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpMassChangerModifierConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpMassChangerModifierConstraintAtom(void* p)
{
	static_cast<hkpMassChangerModifierConstraintAtom*>(p)->~hkpMassChangerModifierConstraintAtom();
}
extern const hkTypeInfo hkpMassChangerModifierConstraintAtomTypeInfo;
const hkTypeInfo hkpMassChangerModifierConstraintAtomTypeInfo(
	"hkpMassChangerModifierConstraintAtom",
	"!hkpMassChangerModifierConstraintAtom",
	finishLoadedObjecthkpMassChangerModifierConstraintAtom,
	cleanupLoadedObjecthkpMassChangerModifierConstraintAtom,
	HK_NULL,
	sizeof(hkpMassChangerModifierConstraintAtom)
	);
#endif

//
// Class hkpCenterOfMassChangerModifierConstraintAtom
//

static const hkInternalClassMember hkpCenterOfMassChangerModifierConstraintAtomClass_Members[] =
{
	{ "displacementA", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCenterOfMassChangerModifierConstraintAtom,m_displacementA), HK_NULL },
	{ "displacementB", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCenterOfMassChangerModifierConstraintAtom,m_displacementB), HK_NULL }
};
extern const hkClass hkpCenterOfMassChangerModifierConstraintAtomClass;
const hkClass hkpCenterOfMassChangerModifierConstraintAtomClass(
	"hkpCenterOfMassChangerModifierConstraintAtom",
	&hkpModifierConstraintAtomClass, // parent
	sizeof(::hkpCenterOfMassChangerModifierConstraintAtom),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpCenterOfMassChangerModifierConstraintAtomClass_Members),
	HK_COUNT_OF(hkpCenterOfMassChangerModifierConstraintAtomClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCenterOfMassChangerModifierConstraintAtom::staticClass()
{
	return hkpCenterOfMassChangerModifierConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpCenterOfMassChangerModifierConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpCenterOfMassChangerModifierConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpCenterOfMassChangerModifierConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpCenterOfMassChangerModifierConstraintAtom(void* p)
{
	static_cast<hkpCenterOfMassChangerModifierConstraintAtom*>(p)->~hkpCenterOfMassChangerModifierConstraintAtom();
}
extern const hkTypeInfo hkpCenterOfMassChangerModifierConstraintAtomTypeInfo;
const hkTypeInfo hkpCenterOfMassChangerModifierConstraintAtomTypeInfo(
	"hkpCenterOfMassChangerModifierConstraintAtom",
	"!hkpCenterOfMassChangerModifierConstraintAtom",
	finishLoadedObjecthkpCenterOfMassChangerModifierConstraintAtom,
	cleanupLoadedObjecthkpCenterOfMassChangerModifierConstraintAtom,
	HK_NULL,
	sizeof(hkpCenterOfMassChangerModifierConstraintAtom)
	);
#endif

//
// Class hkpSoftContactModifierConstraintAtom
//

static const hkInternalClassMember hkpSoftContactModifierConstraintAtomClass_Members[] =
{
	{ "tau", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSoftContactModifierConstraintAtom,m_tau), HK_NULL },
	{ "maxAcceleration", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSoftContactModifierConstraintAtom,m_maxAcceleration), HK_NULL }
};
extern const hkClass hkpSoftContactModifierConstraintAtomClass;
const hkClass hkpSoftContactModifierConstraintAtomClass(
	"hkpSoftContactModifierConstraintAtom",
	&hkpModifierConstraintAtomClass, // parent
	sizeof(::hkpSoftContactModifierConstraintAtom),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpSoftContactModifierConstraintAtomClass_Members),
	HK_COUNT_OF(hkpSoftContactModifierConstraintAtomClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpSoftContactModifierConstraintAtom::staticClass()
{
	return hkpSoftContactModifierConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpSoftContactModifierConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpSoftContactModifierConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpSoftContactModifierConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpSoftContactModifierConstraintAtom(void* p)
{
	static_cast<hkpSoftContactModifierConstraintAtom*>(p)->~hkpSoftContactModifierConstraintAtom();
}
extern const hkTypeInfo hkpSoftContactModifierConstraintAtomTypeInfo;
const hkTypeInfo hkpSoftContactModifierConstraintAtomTypeInfo(
	"hkpSoftContactModifierConstraintAtom",
	"!hkpSoftContactModifierConstraintAtom",
	finishLoadedObjecthkpSoftContactModifierConstraintAtom,
	cleanupLoadedObjecthkpSoftContactModifierConstraintAtom,
	HK_NULL,
	sizeof(hkpSoftContactModifierConstraintAtom)
	);
#endif

//
// Class hkpViscousSurfaceModifierConstraintAtom
//

extern const hkClass hkpViscousSurfaceModifierConstraintAtomClass;
const hkClass hkpViscousSurfaceModifierConstraintAtomClass(
	"hkpViscousSurfaceModifierConstraintAtom",
	&hkpModifierConstraintAtomClass, // parent
	sizeof(::hkpViscousSurfaceModifierConstraintAtom),
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
const hkClass& HK_CALL hkpViscousSurfaceModifierConstraintAtom::staticClass()
{
	return hkpViscousSurfaceModifierConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpViscousSurfaceModifierConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpViscousSurfaceModifierConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpViscousSurfaceModifierConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpViscousSurfaceModifierConstraintAtom(void* p)
{
	static_cast<hkpViscousSurfaceModifierConstraintAtom*>(p)->~hkpViscousSurfaceModifierConstraintAtom();
}
extern const hkTypeInfo hkpViscousSurfaceModifierConstraintAtomTypeInfo;
const hkTypeInfo hkpViscousSurfaceModifierConstraintAtomTypeInfo(
	"hkpViscousSurfaceModifierConstraintAtom",
	"!hkpViscousSurfaceModifierConstraintAtom",
	finishLoadedObjecthkpViscousSurfaceModifierConstraintAtom,
	cleanupLoadedObjecthkpViscousSurfaceModifierConstraintAtom,
	HK_NULL,
	sizeof(hkpViscousSurfaceModifierConstraintAtom)
	);
#endif

//
// Class hkpMovingSurfaceModifierConstraintAtom
//

static const hkInternalClassMember hkpMovingSurfaceModifierConstraintAtomClass_Members[] =
{
	{ "velocity", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMovingSurfaceModifierConstraintAtom,m_velocity), HK_NULL }
};
extern const hkClass hkpMovingSurfaceModifierConstraintAtomClass;
const hkClass hkpMovingSurfaceModifierConstraintAtomClass(
	"hkpMovingSurfaceModifierConstraintAtom",
	&hkpModifierConstraintAtomClass, // parent
	sizeof(::hkpMovingSurfaceModifierConstraintAtom),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpMovingSurfaceModifierConstraintAtomClass_Members),
	HK_COUNT_OF(hkpMovingSurfaceModifierConstraintAtomClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpMovingSurfaceModifierConstraintAtom::staticClass()
{
	return hkpMovingSurfaceModifierConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpMovingSurfaceModifierConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpMovingSurfaceModifierConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpMovingSurfaceModifierConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpMovingSurfaceModifierConstraintAtom(void* p)
{
	static_cast<hkpMovingSurfaceModifierConstraintAtom*>(p)->~hkpMovingSurfaceModifierConstraintAtom();
}
extern const hkTypeInfo hkpMovingSurfaceModifierConstraintAtomTypeInfo;
const hkTypeInfo hkpMovingSurfaceModifierConstraintAtomTypeInfo(
	"hkpMovingSurfaceModifierConstraintAtom",
	"!hkpMovingSurfaceModifierConstraintAtom",
	finishLoadedObjecthkpMovingSurfaceModifierConstraintAtom,
	cleanupLoadedObjecthkpMovingSurfaceModifierConstraintAtom,
	HK_NULL,
	sizeof(hkpMovingSurfaceModifierConstraintAtom)
	);
#endif

//
// Class hkpIgnoreModifierConstraintAtom
//

extern const hkClass hkpIgnoreModifierConstraintAtomClass;
const hkClass hkpIgnoreModifierConstraintAtomClass(
	"hkpIgnoreModifierConstraintAtom",
	&hkpModifierConstraintAtomClass, // parent
	sizeof(::hkpIgnoreModifierConstraintAtom),
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
const hkClass& HK_CALL hkpIgnoreModifierConstraintAtom::staticClass()
{
	return hkpIgnoreModifierConstraintAtomClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpIgnoreModifierConstraintAtom*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpIgnoreModifierConstraintAtom(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpIgnoreModifierConstraintAtom(f);
}
static void HK_CALL cleanupLoadedObjecthkpIgnoreModifierConstraintAtom(void* p)
{
	static_cast<hkpIgnoreModifierConstraintAtom*>(p)->~hkpIgnoreModifierConstraintAtom();
}
extern const hkTypeInfo hkpIgnoreModifierConstraintAtomTypeInfo;
const hkTypeInfo hkpIgnoreModifierConstraintAtomTypeInfo(
	"hkpIgnoreModifierConstraintAtom",
	"!hkpIgnoreModifierConstraintAtom",
	finishLoadedObjecthkpIgnoreModifierConstraintAtom,
	cleanupLoadedObjecthkpIgnoreModifierConstraintAtom,
	HK_NULL,
	sizeof(hkpIgnoreModifierConstraintAtom)
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
