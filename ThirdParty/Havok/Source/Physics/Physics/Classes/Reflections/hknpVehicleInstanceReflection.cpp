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

// Generated from 'Physics/Physics/Extensions/Vehicle/hknpVehicleInstance.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Extensions/Vehicle/hknpVehicleInstance.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkBoolClass;
extern const hkClass hkContactPointClass;
extern const hkClass hknpBodyIdClass;
extern const hkClass hknpTyremarksInfoClass;
extern const hkClass hknpVehicleAerodynamicsClass;
extern const hkClass hknpVehicleBrakeClass;
extern const hkClass hknpVehicleDataClass;
extern const hkClass hknpVehicleDriverInputClass;
extern const hkClass hknpVehicleDriverInputStatusClass;
extern const hkClass hknpVehicleEngineClass;
extern const hkClass hknpVehicleInstanceWheelInfoClass;
extern const hkClass hknpVehicleSteeringClass;
extern const hkClass hknpVehicleSuspensionClass;
extern const hkClass hknpVehicleTransmissionClass;
extern const hkClass hknpVehicleVelocityDamperClass;
extern const hkClass hknpVehicleWheelCollideClass;
extern const hkClass hknpWorldClass;
extern const hkClass hkpVehicleFrictionStatusClass;

//
// Class hknpVehicleInstance::WheelInfo
//
static const hkInternalClassMember hknpVehicleInstance_WheelInfoClass_Members[] =
{
	{ "contactPoint", &hkContactPointClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_contactPoint), HK_NULL },
	{ "contactFriction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_contactFriction), HK_NULL },
	{ "contactBodyId", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_contactBodyId), HK_NULL },
	{ "contactShapeKey", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_contactShapeKey), HK_NULL },
	{ "hardPointWs", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_hardPointWs), HK_NULL },
	{ "rayEndPointWs", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_rayEndPointWs), HK_NULL },
	{ "currentSuspensionLength", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_currentSuspensionLength), HK_NULL },
	{ "suspensionDirectionWs", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_suspensionDirectionWs), HK_NULL },
	{ "spinAxisChassisSpace", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_spinAxisChassisSpace), HK_NULL },
	{ "spinAxisWs", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_spinAxisWs), HK_NULL },
	{ "steeringOrientationChassisSpace", HK_NULL, HK_NULL, hkClassMember::TYPE_QUATERNION, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_steeringOrientationChassisSpace), HK_NULL },
	{ "spinVelocity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_spinVelocity), HK_NULL },
	{ "noSlipIdealSpinVelocity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_noSlipIdealSpinVelocity), HK_NULL },
	{ "spinAngle", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_spinAngle), HK_NULL },
	{ "skidEnergyDensity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_skidEnergyDensity), HK_NULL },
	{ "sideForce", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_sideForce), HK_NULL },
	{ "forwardSlipVelocity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_forwardSlipVelocity), HK_NULL },
	{ "sideSlipVelocity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance::WheelInfo,m_sideSlipVelocity), HK_NULL }
};
const hkClass hknpVehicleInstanceWheelInfoClass(
	"hknpVehicleInstanceWheelInfo",
	HK_NULL, // parent
	sizeof(hknpVehicleInstance::WheelInfo),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpVehicleInstance_WheelInfoClass_Members),
	HK_COUNT_OF(hknpVehicleInstance_WheelInfoClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpVehicleInstance::WheelInfo::staticClass()
{
	return hknpVehicleInstanceWheelInfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpVehicleInstance::WheelInfo*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthknpVehicleInstanceWheelInfo(void* p)
{
	static_cast<hknpVehicleInstance::WheelInfo*>(p)->~WheelInfo();
}
extern const hkTypeInfo hknpVehicleInstanceWheelInfoTypeInfo;
const hkTypeInfo hknpVehicleInstanceWheelInfoTypeInfo(
	"hknpVehicleInstanceWheelInfo",
	"!hknpVehicleInstance::WheelInfo",
	HK_NULL,
	cleanupLoadedObjecthknpVehicleInstanceWheelInfo,
	HK_NULL,
	sizeof(hknpVehicleInstance::WheelInfo)
	);
#endif

//
// Class hknpVehicleInstance
//
extern const hkClass hknpUnaryActionClass;

static const hkInternalClassMember hknpVehicleInstanceClass_Members[] =
{
	{ "data", &hknpVehicleDataClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_data), HK_NULL },
	{ "driverInput", &hknpVehicleDriverInputClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_driverInput), HK_NULL },
	{ "steering", &hknpVehicleSteeringClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_steering), HK_NULL },
	{ "engine", &hknpVehicleEngineClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_engine), HK_NULL },
	{ "transmission", &hknpVehicleTransmissionClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_transmission), HK_NULL },
	{ "brake", &hknpVehicleBrakeClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_brake), HK_NULL },
	{ "suspension", &hknpVehicleSuspensionClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_suspension), HK_NULL },
	{ "aerodynamics", &hknpVehicleAerodynamicsClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_aerodynamics), HK_NULL },
	{ "wheelCollide", &hknpVehicleWheelCollideClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_wheelCollide), HK_NULL },
	{ "tyreMarks", &hknpTyremarksInfoClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_tyreMarks), HK_NULL },
	{ "velocityDamper", &hknpVehicleVelocityDamperClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_velocityDamper), HK_NULL },
	{ "wheelsInfo", &hknpVehicleInstanceWheelInfoClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_wheelsInfo), HK_NULL },
	{ "frictionStatus", &hkpVehicleFrictionStatusClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_frictionStatus), HK_NULL },
	{ "deviceStatus", &hknpVehicleDriverInputStatusClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_deviceStatus), HK_NULL },
	{ "isFixed", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_BOOL, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_isFixed), HK_NULL },
	{ "wheelsTimeSinceMaxPedalInput", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_wheelsTimeSinceMaxPedalInput), HK_NULL },
	{ "tryingToReverse", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_tryingToReverse), HK_NULL },
	{ "torque", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_torque), HK_NULL },
	{ "rpm", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_rpm), HK_NULL },
	{ "mainSteeringAngle", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_mainSteeringAngle), HK_NULL },
	{ "mainSteeringAngleAssumingNoReduction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_mainSteeringAngleAssumingNoReduction), HK_NULL },
	{ "wheelsSteeringAngle", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_wheelsSteeringAngle), HK_NULL },
	{ "isReversing", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_isReversing), HK_NULL },
	{ "currentGear", HK_NULL, HK_NULL, hkClassMember::TYPE_INT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_currentGear), HK_NULL },
	{ "delayed", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_delayed), HK_NULL },
	{ "clutchDelayCountdown", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpVehicleInstance,m_clutchDelayCountdown), HK_NULL },
	{ "world", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpVehicleInstance,m_world), HK_NULL }
};
extern const hkClass hknpVehicleInstanceClass;
const hkClass hknpVehicleInstanceClass(
	"hknpVehicleInstance",
	&hknpUnaryActionClass, // parent
	sizeof(::hknpVehicleInstance),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpVehicleInstanceClass_Members),
	HK_COUNT_OF(hknpVehicleInstanceClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpVehicleInstance::staticClass()
{
	return hknpVehicleInstanceClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpVehicleInstance*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthknpVehicleInstance(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hknpVehicleInstance(f);
}
static void HK_CALL cleanupLoadedObjecthknpVehicleInstance(void* p)
{
	static_cast<hknpVehicleInstance*>(p)->~hknpVehicleInstance();
}
static const void* HK_CALL getVtablehknpVehicleInstance()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hknpVehicleInstance).hash_code()));
	#else
	return ((const void*)(typeid(hknpVehicleInstance).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hknpVehicleInstance)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hknpVehicleInstance(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hknpVehicleInstanceTypeInfo;
const hkTypeInfo hknpVehicleInstanceTypeInfo(
	"hknpVehicleInstance",
	"!hknpVehicleInstance",
	finishLoadedObjecthknpVehicleInstance,
	cleanupLoadedObjecthknpVehicleInstance,
	getVtablehknpVehicleInstance(),
	sizeof(hknpVehicleInstance)
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
