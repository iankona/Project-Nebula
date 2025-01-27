/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Common/Compat/hkCompat.h>
#include <Common/Compat/Deprecated/Compat/hkCompatUtil.h>
#include <Common/Compat/Deprecated/Compat/hkHavokAllClasses.h>
#include <Common/Base/Config/hkConfigVersion.h>
#include <Common/Compat/Deprecated/Version/hkVersionRegistry.h>
#include <Common/Serialize/Version/hkVersionUtil.h>
#include <Common/Compat/Deprecated/Version/hkVersionUtilOld.h>
#include <Common/Serialize/Util/hkBuiltinTypeRegistry.h>

static void hkbBlendingTransitionEffect_400r1_402r1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	// the type of m_flags has changed but they are both actually hkInt16
	hkClassMemberAccessor newFlags(newObj, "flags");
	hkClassMemberAccessor oldFlags(oldObj, "flags");

	newFlags.asInt16() = oldFlags.asInt16();
}

static void hkbCharacterData_400r1_hkbBehavior_402r1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	hkClassMemberAccessor newRootGenerator(newObj, "rootGenerator");
	hkClassMemberAccessor oldRootGenerator(oldObj, "generator");
	void* oldRootGeneratorPtr = oldRootGenerator.asPointer();
	newRootGenerator.asPointer() = oldRootGeneratorPtr;
	tracker.objectPointedBy(oldRootGeneratorPtr, newRootGenerator.getAddress());
}

static void hkbFootIkModifier_400r1_402r1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	// copy the gains, which were directly inside hkbFootIkModifier, into the gains structure
	{
		hkClassMemberAccessor newGains( newObj, "gains" );
		hkVariant newGainsVariant;
		newGainsVariant.m_class = &(newObj.m_class->getMemberByName( "gains" )->getStructClass());
		newGainsVariant.m_object = newGains.getAddress();

		hkClassMemberAccessor newOnOffGain(newGainsVariant, "onOffGain");
		hkClassMemberAccessor oldOnOffGain(oldObj, "onOffGain");
		newOnOffGain.asReal() = oldOnOffGain.asReal();

		hkClassMemberAccessor newAscendingGain(newGainsVariant, "ascendingGain");
		hkClassMemberAccessor oldAscendingGain(oldObj, "ascendingGain");
		newAscendingGain.asReal() = oldAscendingGain.asReal();

		hkClassMemberAccessor newStandAscendingGain(newGainsVariant, "standAscendingGain");
		hkClassMemberAccessor oldStandAscendingGain(oldObj, "standAscendingGain");
		newStandAscendingGain.asReal() = oldStandAscendingGain.asReal();

		hkClassMemberAccessor newDescendingGain(newGainsVariant, "descendingGain");
		hkClassMemberAccessor oldDescendingGain(oldObj, "descendingGain");
		newDescendingGain.asReal() = oldDescendingGain.asReal();
	}
}

namespace hkCompat_hk400r1_hk402r1
{

#define REMOVED(TYPE) { 0,0, hkVersionRegistry::VERSION_REMOVED, TYPE, HK_NULL }
#define BINARY_IDENTICAL(OLDSIG,NEWSIG,TYPE) { OLDSIG, NEWSIG, hkVersionRegistry::VERSION_MANUAL, TYPE, HK_NULL }

static const hkVersionRegistry::ClassAction s_updateActions[] =
{
	// common
	{ 0x8bdd3e9a, 0x8bdd3e9a, hkVersionRegistry::VERSION_VARIANT, "hkBoneAttachment", HK_NULL },
	{ 0xf598a34e, 0xf598a34e, hkVersionRegistry::VERSION_VARIANT, "hkRootLevelContainer", HK_NULL },
	{ 0x853a899c, 0x853a899c, hkVersionRegistry::VERSION_VARIANT, "hkRootLevelContainerNamedVariant", HK_NULL }, 
	{ 0x3d43489c, 0x3d43489c, hkVersionRegistry::VERSION_VARIANT, "hkxMaterial", HK_NULL },
	{ 0x914da6c1, 0x914da6c1, hkVersionRegistry::VERSION_VARIANT, "hkxAttribute", HK_NULL },
	{ 0x1667c01c, 0x1667c01c, hkVersionRegistry::VERSION_VARIANT, "hkxAttributeGroup", HK_NULL }, 
	{ 0x0a62c79f, 0x0a62c79f, hkVersionRegistry::VERSION_VARIANT, "hkxNode", HK_NULL }, 
	{ 0xe085ba9f, 0xe085ba9f, hkVersionRegistry::VERSION_VARIANT, "hkxMaterialTextureStage", HK_NULL },
	{ 0x57061454, 0x57061454, hkVersionRegistry::VERSION_HOMOGENEOUSARRAY, "hkxVertexBuffer", HK_NULL },

	// hkbehavior
	{ 0xcb1ea129, 0x6ede2b9f, hkVersionRegistry::VERSION_COPY, "hkbBinaryBlenderGenerator", HK_NULL },
	{ 0x73d13d8b, 0x00432048, hkVersionRegistry::VERSION_COPY, "hkbBlenderGenerator", HK_NULL },
	{ 0x86405dd4, 0x65d36ce9, hkVersionRegistry::VERSION_COPY, "hkbBlendingTransitionEffect", hkbBlendingTransitionEffect_400r1_402r1 },
	{ 0x6e04a880, 0x6d2b388a, hkVersionRegistry::VERSION_COPY, "hkbCharacterData", hkbCharacterData_400r1_hkbBehavior_402r1 },
	{ 0x37666936, 0xb9f995b7, hkVersionRegistry::VERSION_COPY, "hkbClipGenerator", HK_NULL },
	{ 0x8916b3a7, 0x7caf4e9c, hkVersionRegistry::VERSION_COPY, "hkbClipTrigger", HK_NULL },
	{ 0x62958e18, 0x891625db, hkVersionRegistry::VERSION_COPY, "hkbEvent", HK_NULL },
	{ 0x6d5dc665, 0x920e26fa, hkVersionRegistry::VERSION_COPY, "hkbFootIkModifier", hkbFootIkModifier_400r1_402r1 },
	{ 0x26036a03, 0x75e55f96, hkVersionRegistry::VERSION_COPY, "hkbGetUpModifier", HK_NULL },
	// the following line is needed to work around a bug in which the old finish constructor is called instead of the new one
	{ 0x9afe073a, 0x874cf48e, hkVersionRegistry::VERSION_COPY, "hkbPoseMatchingModifier", HK_NULL },
	{ 0x7a23640f, 0xd16d0946, hkVersionRegistry::VERSION_COPY, "hkbPoweredRagdollModifier", HK_NULL },
	{ 0xe20769b8, 0x407cc6a1, hkVersionRegistry::VERSION_COPY, "hkbRagdollDriverModifier", HK_NULL },
	{ 0x4dc9f7a1, 0xf1a273f4, hkVersionRegistry::VERSION_COPY, "hkbRigidBodyRagdollControlData", HK_NULL },
	{ 0xcda57532, 0xb9388b3c, hkVersionRegistry::VERSION_COPY, "hkbRigidBodyRagdollControlsModifier", HK_NULL },
	{ 0xa18be826, 0x73fc19c4, hkVersionRegistry::VERSION_COPY, "hkbRigidBodyRagdollModifier", HK_NULL },
	{ 0xac0fbec5, 0x04055ac5, hkVersionRegistry::VERSION_COPY, "hkbStateMachine", HK_NULL },
	{ 0xfd4a1d12, 0x7c043ced, hkVersionRegistry::VERSION_COPY, "hkbStateMachineStateInfo", HK_NULL },
	{ 0x61a06913, 0xc39b1082, hkVersionRegistry::VERSION_COPY, "hkbStateMachineTransitionInfo", HK_NULL },
	{ 0x7bd27e34, 0xbf6c3a94, hkVersionRegistry::VERSION_COPY, "hkbVariableSet", HK_NULL },
	{ 0x0d44f6e7, 0xe0863b1d, hkVersionRegistry::VERSION_COPY, "hkbVariableSetTarget", HK_NULL }, 
	{ 0x6164be0e, 0x46e399e7, hkVersionRegistry::VERSION_COPY, "hkbVariableSetVariable", HK_NULL },

	REMOVED( "hkbFootPoseExtractionModifier" ),

	{ 0, 0, 0, HK_NULL, HK_NULL }
};

static const hkVersionRegistry::ClassRename s_renames[] =
{
	{ "hkbModifiedGenerator", "hkbModifierGenerator" },
	{ "hkbCharacterData", "hkbBehavior" },
	{ HK_NULL, HK_NULL }
};

#define HK_COMPAT_VERSION_FROM hkHavok400r1Classes
#define HK_COMPAT_VERSION_TO hkHavok402r1Classes
#define HK_COMPAT_OPTIONAL_UPDATE_FUNC update

extern hkVersionRegistry::UpdateDescription hkVersionUpdateDescription;

static hkResult HK_CALL update(
	hkArray<hkVariant>& objectsInOut,
	hkObjectUpdateTracker& tracker )
{
	hkCompatUtil::updateNamedVariantClassName( objectsInOut, s_renames, tracker );
	return hkVersionUtil::updateSingleVersion( objectsInOut, tracker, hkVersionUpdateDescription, hkVersionRegistry::getInstance().getClassNameRegistry(HK_COMPAT_VERSION_TO::VersionString) );
}

#include<Common/Compat/Deprecated/Compat/hkCompat_Common.cxx>
#undef HK_COMPAT_VERSION_FROM
#undef HK_COMPAT_VERSION_TO
} // namespace hkCompat_hk400r1_hk402r1

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
