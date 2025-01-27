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

// Generated from 'Physics/Physics/Dynamics/World/hknpWorldCinfo.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Dynamics/World/hknpWorldCinfo.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkAabbClass;
extern const hkClass hkBlockStreamAllocatorClass;
extern const hkClass hknpBodyClass;
extern const hkClass hknpBodyQualityLibraryClass;
extern const hkClass hknpBroadPhaseConfigClass;
extern const hkClass hknpCollisionFilterClass;
extern const hkClass hknpMaterialLibraryClass;
extern const hkClass hknpMotionClass;
extern const hkClass hknpMotionPropertiesLibraryClass;
extern const hkClass hknpShapeTagCodecClass;
extern const hkClassEnum* hknpWorldCinfoLeavingBroadPhaseBehaviorEnum;
extern const hkClassEnum* hknpWorldCinfoSimulationTypeEnum;

//
// Enum hknpWorldCinfo::SimulationType
//
static const hkInternalClassEnumItem hknpWorldCinfoSimulationTypeEnumItems[] =
{
	{0, "SIMULATION_TYPE_SINGLE_THREADED"},
	{1, "SIMULATION_TYPE_MULTI_THREADED"},
};

//
// Enum hknpWorldCinfo::SolverType
//
static const hkInternalClassEnumItem hknpWorldCinfoSolverTypeEnumItems[] =
{
	{0, "SOLVER_TYPE_INVALID"},
	{1, "SOLVER_TYPE_2ITERS_SOFT"},
	{2, "SOLVER_TYPE_2ITERS_MEDIUM"},
	{3, "SOLVER_TYPE_2ITERS_HARD"},
	{4, "SOLVER_TYPE_4ITERS_SOFT"},
	{5, "SOLVER_TYPE_4ITERS_MEDIUM"},
	{6, "SOLVER_TYPE_4ITERS_HARD"},
	{7, "SOLVER_TYPE_8ITERS_SOFT"},
	{8, "SOLVER_TYPE_8ITERS_MEDIUM"},
	{9, "SOLVER_TYPE_8ITERS_HARD"},
	{10, "SOLVER_TYPE_MAX"},
};

//
// Enum hknpWorldCinfo::LeavingBroadPhaseBehavior
//
static const hkInternalClassEnumItem hknpWorldCinfoLeavingBroadPhaseBehaviorEnumItems[] =
{
	{0, "ON_LEAVING_BROAD_PHASE_DO_NOTHING"},
	{1, "ON_LEAVING_BROAD_PHASE_REMOVE_BODY"},
	{2, "ON_LEAVING_BROAD_PHASE_FREEZE_BODY"},
};
static const hkInternalClassEnum hknpWorldCinfoEnums[] = {
	{"SimulationType", hknpWorldCinfoSimulationTypeEnumItems, 2, HK_NULL, 0 },
	{"SolverType", hknpWorldCinfoSolverTypeEnumItems, 11, HK_NULL, 0 },
	{"LeavingBroadPhaseBehavior", hknpWorldCinfoLeavingBroadPhaseBehaviorEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hknpWorldCinfoSimulationTypeEnum = reinterpret_cast<const hkClassEnum*>(&hknpWorldCinfoEnums[0]);
const hkClassEnum* hknpWorldCinfoSolverTypeEnum = reinterpret_cast<const hkClassEnum*>(&hknpWorldCinfoEnums[1]);
const hkClassEnum* hknpWorldCinfoLeavingBroadPhaseBehaviorEnum = reinterpret_cast<const hkClassEnum*>(&hknpWorldCinfoEnums[2]);

//
// Class hknpWorldCinfo
//
static const hkInternalClassMember hknpWorldCinfoClass_Members[] =
{
	{ "bodyBufferCapacity", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_bodyBufferCapacity), HK_NULL },
	{ "userBodyBuffer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpWorldCinfo,m_userBodyBuffer), HK_NULL },
	{ "motionBufferCapacity", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_motionBufferCapacity), HK_NULL },
	{ "userMotionBuffer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpWorldCinfo,m_userMotionBuffer), HK_NULL },
	{ "materialLibrary", &hknpMaterialLibraryClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_materialLibrary), HK_NULL },
	{ "motionPropertiesLibrary", &hknpMotionPropertiesLibraryClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_motionPropertiesLibrary), HK_NULL },
	{ "qualityLibrary", &hknpBodyQualityLibraryClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_qualityLibrary), HK_NULL },
	{ "persistentStreamAllocator", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpWorldCinfo,m_persistentStreamAllocator), HK_NULL },
	{ "broadPhaseAabb", &hkAabbClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_broadPhaseAabb), HK_NULL },
	{ "leavingBroadPhaseBehavior", HK_NULL, hknpWorldCinfoLeavingBroadPhaseBehaviorEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_leavingBroadPhaseBehavior), HK_NULL },
	{ "broadPhaseConfig", &hknpBroadPhaseConfigClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_broadPhaseConfig), HK_NULL },
	{ "collisionFilter", &hknpCollisionFilterClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_collisionFilter), HK_NULL },
	{ "collisionQueryFilter", &hknpCollisionFilterClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_collisionQueryFilter), HK_NULL },
	{ "shapeTagCodec", &hknpShapeTagCodecClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_shapeTagCodec), HK_NULL },
	{ "collisionTolerance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_collisionTolerance), HK_NULL },
	{ "relativeCollisionAccuracy", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_relativeCollisionAccuracy), HK_NULL },
	{ "gravity", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_gravity), HK_NULL },
	{ "solverIterations", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_solverIterations), HK_NULL },
	{ "solverTau", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_solverTau), HK_NULL },
	{ "solverDamp", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_solverDamp), HK_NULL },
	{ "solverMicrosteps", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_solverMicrosteps), HK_NULL },
	{ "defaultSolverTimestep", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_defaultSolverTimestep), HK_NULL },
	{ "maxApproachSpeedForHighQualitySolver", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_maxApproachSpeedForHighQualitySolver), HK_NULL },
	{ "enableSolverDynamicScheduling", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_enableSolverDynamicScheduling), HK_NULL },
	{ "enableDeactivation", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_enableDeactivation), HK_NULL },
	{ "largeIslandSize", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_largeIslandSize), HK_NULL },
	{ "simulationType", HK_NULL, hknpWorldCinfoSimulationTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_simulationType), HK_NULL },
	{ "numSplitterCells", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_numSplitterCells), HK_NULL },
	{ "mergeEventsBeforeDispatch", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_mergeEventsBeforeDispatch), HK_NULL },
	{ "unitScale", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpWorldCinfo,m_unitScale), HK_NULL }
};
namespace
{
	struct hknpWorldCinfo_DefaultStruct
	{
		int s_defaultOffsets[30];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		hkInt32 m_bodyBufferCapacity;
		hkInt32 m_motionBufferCapacity;
		hkUint8 /* hkEnum< enum hknpWorldCinfo::LeavingBroadPhaseBehavior, hkUint8 > */ m_leavingBroadPhaseBehavior;
		float m_collisionTolerance;
		float m_relativeCollisionAccuracy;
		_hkVector4 m_gravity;
		hkInt32 m_solverIterations;
		float m_solverTau;
		float m_solverDamp;
		hkInt32 m_solverMicrosteps;
		float m_defaultSolverTimestep;
		float m_maxApproachSpeedForHighQualitySolver;
		_hkBool m_enableDeactivation;
		hkInt32 m_largeIslandSize;
		hkUint8 /* hkEnum< enum hknpWorldCinfo::SimulationType, hkUint8 > */ m_simulationType;
		hkInt32 m_numSplitterCells;
		_hkBool m_mergeEventsBeforeDispatch;
		float m_unitScale;
	};
	const hknpWorldCinfo_DefaultStruct hknpWorldCinfo_Default =
	{
		{HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_bodyBufferCapacity),hkClassMember::HK_CLASS_ZERO_DEFAULT,HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_motionBufferCapacity),hkClassMember::HK_CLASS_ZERO_DEFAULT,hkClassMember::HK_CLASS_ZERO_DEFAULT,hkClassMember::HK_CLASS_ZERO_DEFAULT,hkClassMember::HK_CLASS_ZERO_DEFAULT,-1,-1,HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_leavingBroadPhaseBehavior),hkClassMember::HK_CLASS_ZERO_DEFAULT,hkClassMember::HK_CLASS_ZERO_DEFAULT,hkClassMember::HK_CLASS_ZERO_DEFAULT,hkClassMember::HK_CLASS_ZERO_DEFAULT,HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_collisionTolerance),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_relativeCollisionAccuracy),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_gravity),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_solverIterations),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_solverTau),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_solverDamp),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_solverMicrosteps),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_defaultSolverTimestep),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_maxApproachSpeedForHighQualitySolver),hkClassMember::HK_CLASS_ZERO_DEFAULT,HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_enableDeactivation),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_largeIslandSize),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_simulationType),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_numSplitterCells),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_mergeEventsBeforeDispatch),HK_OFFSET_OF(hknpWorldCinfo_DefaultStruct,m_unitScale)},
	4096,4096,hknpWorldCinfo::ON_LEAVING_BROAD_PHASE_FREEZE_BODY,0.05f,0.05f,	{0.0f,-9.81f,0.0f,0.0f},4,0.6f,1.0f,1,1.0f/30.0f,1.0f,true,100,hknpWorldCinfo::SIMULATION_TYPE_MULTI_THREADED,16,true,1.0f
	};
}
extern const hkClass hknpWorldCinfoClass;
const hkClass hknpWorldCinfoClass(
	"hknpWorldCinfo",
	HK_NULL, // parent
	sizeof(::hknpWorldCinfo),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hknpWorldCinfoEnums),
	3, // enums
	reinterpret_cast<const hkClassMember*>(hknpWorldCinfoClass_Members),
	HK_COUNT_OF(hknpWorldCinfoClass_Members),
	&hknpWorldCinfo_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpWorldCinfo::staticClass()
{
	return hknpWorldCinfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpWorldCinfo*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthknpWorldCinfo(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hknpWorldCinfo(f);
}
static void HK_CALL cleanupLoadedObjecthknpWorldCinfo(void* p)
{
	static_cast<hknpWorldCinfo*>(p)->~hknpWorldCinfo();
}
extern const hkTypeInfo hknpWorldCinfoTypeInfo;
const hkTypeInfo hknpWorldCinfoTypeInfo(
	"hknpWorldCinfo",
	"!hknpWorldCinfo",
	finishLoadedObjecthknpWorldCinfo,
	cleanupLoadedObjecthknpWorldCinfo,
	HK_NULL,
	sizeof(hknpWorldCinfo)
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
