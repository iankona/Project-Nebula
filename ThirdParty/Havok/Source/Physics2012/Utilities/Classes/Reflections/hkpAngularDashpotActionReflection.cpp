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

// Generated from 'Physics2012/Utilities/Actions/AngularDashpot/hkpAngularDashpotAction.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Utilities/Actions/AngularDashpot/hkpAngularDashpotAction.h>
#define True true
#define False false


//
// Class hkpAngularDashpotAction
//
extern const hkClass hkpBinaryActionClass;

static const hkInternalClassMember hkpAngularDashpotActionClass_Members[] =
{
	{ "rotation", HK_NULL, HK_NULL, hkClassMember::TYPE_QUATERNION, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpAngularDashpotAction,m_rotation), HK_NULL },
	{ "strength", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpAngularDashpotAction,m_strength), HK_NULL },
	{ "damping", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpAngularDashpotAction,m_damping), HK_NULL }
};
extern const hkClass hkpAngularDashpotActionClass;
const hkClass hkpAngularDashpotActionClass(
	"hkpAngularDashpotAction",
	&hkpBinaryActionClass, // parent
	sizeof(::hkpAngularDashpotAction),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpAngularDashpotActionClass_Members),
	HK_COUNT_OF(hkpAngularDashpotActionClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpAngularDashpotAction::staticClass()
{
	return hkpAngularDashpotActionClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpAngularDashpotAction*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpAngularDashpotAction(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpAngularDashpotAction(f);
}
static void HK_CALL cleanupLoadedObjecthkpAngularDashpotAction(void* p)
{
	static_cast<hkpAngularDashpotAction*>(p)->~hkpAngularDashpotAction();
}
static const void* HK_CALL getVtablehkpAngularDashpotAction()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpAngularDashpotAction).hash_code()));
	#else
	return ((const void*)(typeid(hkpAngularDashpotAction).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpAngularDashpotAction)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpAngularDashpotAction(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpAngularDashpotActionTypeInfo;
const hkTypeInfo hkpAngularDashpotActionTypeInfo(
	"hkpAngularDashpotAction",
	"!hkpAngularDashpotAction",
	finishLoadedObjecthkpAngularDashpotAction,
	cleanupLoadedObjecthkpAngularDashpotAction,
	getVtablehkpAngularDashpotAction(),
	sizeof(hkpAngularDashpotAction)
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
