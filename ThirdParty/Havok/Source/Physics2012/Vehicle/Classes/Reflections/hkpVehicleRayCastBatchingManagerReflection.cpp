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

// Generated from 'Physics2012/Vehicle/Manager/RayCastBatchingManager/hkpVehicleRayCastBatchingManager.h'
#include <Physics2012/Vehicle/hkpVehicle.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Vehicle/Manager/RayCastBatchingManager/hkpVehicleRayCastBatchingManager.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpCollisionQueryJobHeaderClass;
extern const hkClass hkpShapeRayCastCommandClass;
extern const hkClass hkpWorldRayCastOutputClass;

//
// Class hkpVehicleRayCastBatchingManager
//
extern const hkClass hkpVehicleCastBatchingManagerClass;

extern const hkClass hkpVehicleRayCastBatchingManagerClass;
const hkClass hkpVehicleRayCastBatchingManagerClass(
	"hkpVehicleRayCastBatchingManager",
	&hkpVehicleCastBatchingManagerClass, // parent
	sizeof(::hkpVehicleRayCastBatchingManager),
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
const hkClass& HK_CALL hkpVehicleRayCastBatchingManager::staticClass()
{
	return hkpVehicleRayCastBatchingManagerClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpVehicleRayCastBatchingManager*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpVehicleRayCastBatchingManager(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpVehicleRayCastBatchingManager(f);
}
static void HK_CALL cleanupLoadedObjecthkpVehicleRayCastBatchingManager(void* p)
{
	static_cast<hkpVehicleRayCastBatchingManager*>(p)->~hkpVehicleRayCastBatchingManager();
}
static const void* HK_CALL getVtablehkpVehicleRayCastBatchingManager()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpVehicleRayCastBatchingManager).hash_code()));
	#else
	return ((const void*)(typeid(hkpVehicleRayCastBatchingManager).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpVehicleRayCastBatchingManager)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpVehicleRayCastBatchingManager(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpVehicleRayCastBatchingManagerTypeInfo;
const hkTypeInfo hkpVehicleRayCastBatchingManagerTypeInfo(
	"hkpVehicleRayCastBatchingManager",
	"!hkpVehicleRayCastBatchingManager",
	finishLoadedObjecthkpVehicleRayCastBatchingManager,
	cleanupLoadedObjecthkpVehicleRayCastBatchingManager,
	getVtablehkpVehicleRayCastBatchingManager(),
	sizeof(hkpVehicleRayCastBatchingManager)
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
