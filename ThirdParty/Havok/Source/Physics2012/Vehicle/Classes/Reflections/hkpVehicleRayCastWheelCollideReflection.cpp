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

// Generated from 'Physics2012/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.h'
#include <Physics2012/Vehicle/hkpVehicle.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpAabbPhantomClass;
extern const hkClass hkpRejectChassisListenerClass;

//
// Class hkpVehicleRayCastWheelCollide
//
extern const hkClass hkpVehicleWheelCollideClass;

static const hkInternalClassMember hkpVehicleRayCastWheelCollideClass_Members[] =
{
	{ "wheelCollisionFilterInfo", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleRayCastWheelCollide,m_wheelCollisionFilterInfo), HK_NULL },
	{ "phantom", &hkpAabbPhantomClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpVehicleRayCastWheelCollide,m_phantom), HK_NULL },
	{ "rejectRayChassisListener", &hkpRejectChassisListenerClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleRayCastWheelCollide,m_rejectRayChassisListener), HK_NULL }
};
extern const hkClass hkpVehicleRayCastWheelCollideClass;
const hkClass hkpVehicleRayCastWheelCollideClass(
	"hkpVehicleRayCastWheelCollide",
	&hkpVehicleWheelCollideClass, // parent
	sizeof(::hkpVehicleRayCastWheelCollide),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpVehicleRayCastWheelCollideClass_Members),
	HK_COUNT_OF(hkpVehicleRayCastWheelCollideClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpVehicleRayCastWheelCollide::staticClass()
{
	return hkpVehicleRayCastWheelCollideClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpVehicleRayCastWheelCollide*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpVehicleRayCastWheelCollide(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpVehicleRayCastWheelCollide(f);
}
static void HK_CALL cleanupLoadedObjecthkpVehicleRayCastWheelCollide(void* p)
{
	static_cast<hkpVehicleRayCastWheelCollide*>(p)->~hkpVehicleRayCastWheelCollide();
}
static const void* HK_CALL getVtablehkpVehicleRayCastWheelCollide()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpVehicleRayCastWheelCollide).hash_code()));
	#else
	return ((const void*)(typeid(hkpVehicleRayCastWheelCollide).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpVehicleRayCastWheelCollide)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpVehicleRayCastWheelCollide(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpVehicleRayCastWheelCollideTypeInfo;
const hkTypeInfo hkpVehicleRayCastWheelCollideTypeInfo(
	"hkpVehicleRayCastWheelCollide",
	"!hkpVehicleRayCastWheelCollide",
	finishLoadedObjecthkpVehicleRayCastWheelCollide,
	cleanupLoadedObjecthkpVehicleRayCastWheelCollide,
	getVtablehkpVehicleRayCastWheelCollide(),
	sizeof(hkpVehicleRayCastWheelCollide)
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