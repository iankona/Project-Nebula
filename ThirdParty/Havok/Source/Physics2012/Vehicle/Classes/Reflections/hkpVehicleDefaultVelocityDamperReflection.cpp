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

// Generated from 'Physics2012/Vehicle/VelocityDamper/Default/hkpVehicleDefaultVelocityDamper.h'
#include <Physics2012/Vehicle/hkpVehicle.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Vehicle/VelocityDamper/Default/hkpVehicleDefaultVelocityDamper.h>
#define True true
#define False false


//
// Class hkpVehicleDefaultVelocityDamper
//
extern const hkClass hkpVehicleVelocityDamperClass;

static const hkInternalClassMember hkpVehicleDefaultVelocityDamperClass_Members[] =
{
	{ "normalSpinDamping", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultVelocityDamper,m_normalSpinDamping), HK_NULL },
	{ "collisionSpinDamping", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultVelocityDamper,m_collisionSpinDamping), HK_NULL },
	{ "collisionThreshold", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultVelocityDamper,m_collisionThreshold), HK_NULL }
};
extern const hkClass hkpVehicleDefaultVelocityDamperClass;
const hkClass hkpVehicleDefaultVelocityDamperClass(
	"hkpVehicleDefaultVelocityDamper",
	&hkpVehicleVelocityDamperClass, // parent
	sizeof(::hkpVehicleDefaultVelocityDamper),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpVehicleDefaultVelocityDamperClass_Members),
	HK_COUNT_OF(hkpVehicleDefaultVelocityDamperClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpVehicleDefaultVelocityDamper::staticClass()
{
	return hkpVehicleDefaultVelocityDamperClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpVehicleDefaultVelocityDamper*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpVehicleDefaultVelocityDamper(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpVehicleDefaultVelocityDamper(f);
}
static void HK_CALL cleanupLoadedObjecthkpVehicleDefaultVelocityDamper(void* p)
{
	static_cast<hkpVehicleDefaultVelocityDamper*>(p)->~hkpVehicleDefaultVelocityDamper();
}
static const void* HK_CALL getVtablehkpVehicleDefaultVelocityDamper()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpVehicleDefaultVelocityDamper).hash_code()));
	#else
	return ((const void*)(typeid(hkpVehicleDefaultVelocityDamper).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpVehicleDefaultVelocityDamper)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpVehicleDefaultVelocityDamper(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpVehicleDefaultVelocityDamperTypeInfo;
const hkTypeInfo hkpVehicleDefaultVelocityDamperTypeInfo(
	"hkpVehicleDefaultVelocityDamper",
	"!hkpVehicleDefaultVelocityDamper",
	finishLoadedObjecthkpVehicleDefaultVelocityDamper,
	cleanupLoadedObjecthkpVehicleDefaultVelocityDamper,
	getVtablehkpVehicleDefaultVelocityDamper(),
	sizeof(hkpVehicleDefaultVelocityDamper)
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
