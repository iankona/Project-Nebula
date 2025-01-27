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

// Generated from 'Physics2012/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.h'
#include <Physics2012/Vehicle/hkpVehicle.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.h>
#define True true
#define False false


//
// Class hkpVehicleDefaultTransmission
//
extern const hkClass hkpVehicleTransmissionClass;

static const hkInternalClassMember hkpVehicleDefaultTransmissionClass_Members[] =
{
	{ "downshiftRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultTransmission,m_downshiftRPM), HK_NULL },
	{ "upshiftRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultTransmission,m_upshiftRPM), HK_NULL },
	{ "primaryTransmissionRatio", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultTransmission,m_primaryTransmissionRatio), HK_NULL },
	{ "clutchDelayTime", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultTransmission,m_clutchDelayTime), HK_NULL },
	{ "reverseGearRatio", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultTransmission,m_reverseGearRatio), HK_NULL },
	{ "gearsRatio", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultTransmission,m_gearsRatio), HK_NULL },
	{ "wheelsTorqueRatio", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultTransmission,m_wheelsTorqueRatio), HK_NULL }
};
extern const hkClass hkpVehicleDefaultTransmissionClass;
const hkClass hkpVehicleDefaultTransmissionClass(
	"hkpVehicleDefaultTransmission",
	&hkpVehicleTransmissionClass, // parent
	sizeof(::hkpVehicleDefaultTransmission),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpVehicleDefaultTransmissionClass_Members),
	HK_COUNT_OF(hkpVehicleDefaultTransmissionClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpVehicleDefaultTransmission::staticClass()
{
	return hkpVehicleDefaultTransmissionClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpVehicleDefaultTransmission*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpVehicleDefaultTransmission(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpVehicleDefaultTransmission(f);
}
static void HK_CALL cleanupLoadedObjecthkpVehicleDefaultTransmission(void* p)
{
	static_cast<hkpVehicleDefaultTransmission*>(p)->~hkpVehicleDefaultTransmission();
}
static const void* HK_CALL getVtablehkpVehicleDefaultTransmission()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpVehicleDefaultTransmission).hash_code()));
	#else
	return ((const void*)(typeid(hkpVehicleDefaultTransmission).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpVehicleDefaultTransmission)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpVehicleDefaultTransmission(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpVehicleDefaultTransmissionTypeInfo;
const hkTypeInfo hkpVehicleDefaultTransmissionTypeInfo(
	"hkpVehicleDefaultTransmission",
	"!hkpVehicleDefaultTransmission",
	finishLoadedObjecthkpVehicleDefaultTransmission,
	cleanupLoadedObjecthkpVehicleDefaultTransmission,
	getVtablehkpVehicleDefaultTransmission(),
	sizeof(hkpVehicleDefaultTransmission)
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
