/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Common/Compat/hkCompat.h>
#include <Common/Compat/Deprecated/Compat/hkCompatUtil.h>
#include <Common/Base/Config/hkConfigVersion.h>
#include <Common/Compat/Deprecated/Version/hkVersionRegistry.h>
#include <Common/Serialize/Version/hkVersionUtil.h>
#include <Common/Serialize/Util/hkBuiltinTypeRegistry.h>
#include <Common/Base/Math/hkMath.h>
#include <Common/Base/Container/BitField/hkBitField.h>

#include <Common/Compat/Deprecated/Compat/hkHavokAllClasses.h>

namespace
{
	struct DummyArray
	{
		void* data;
		hkInt32 size;
		hkInt32 capacity;
	};
	struct DummyBitField
	{
		enum
		{
			DONT_DEALLOCATE_FLAG = 0x80000000
		};

		hkUint32* words;
		hkInt32 numWords;
		hkInt32 numBitsAndFlags;
	};
}

static void EmptyVerFunc_410r1_450b1(
	hkVariant&,
	hkVariant&,
	hkObjectUpdateTracker& )
{

}

static void hkbBitField_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	hkClassMemberAccessor oldWords(oldObj, "words");
	hkClassMemberAccessor newNumBitsAndFlags(newObj, "numBitsAndFlags");

	// we'll set the numBits to the maximum that can fit in the allocated buffer
	newNumBitsAndFlags.asInt32() = ( 32 * oldWords.asSimpleArray().size );

	// the flag is set in the constructor
}

struct _hkbAttributeModifier_410r1_450b1Assignment
{
	int m_attributeIndex;
	hkReal m_attributeValue;
};


static void hkbAttributeModifier_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	// convert attribute (index,value) pairs from two arrays to an array of structs
	hkClassMemberAccessor oldAttributes(oldObj, "attributes" );
	hkClassMemberAccessor oldAttributeIndices(oldObj, "attributeIndices" );
	hkClassMemberAccessor newAssignments(newObj, "assignments" );

	DummyArray& oldAttributesArray = *static_cast<DummyArray*>(oldAttributes.asRaw()); // hkReal array
	DummyArray& oldAttributeIndicesArray = *static_cast<DummyArray*>(oldAttributeIndices.asRaw()); // hkInt32 array
	DummyArray& newAssignmentsArray = *static_cast<DummyArray*>(newAssignments.asRaw()); // _hkbAttributeModifier_410r1_450b1Assignment

	HK_ASSERT( 0x450c3b46, oldAttributesArray.size == oldAttributeIndicesArray.size );

	newAssignmentsArray.size = newAssignmentsArray.capacity = oldAttributesArray.size;
	newAssignmentsArray.data = hkAllocateChunk<_hkbAttributeModifier_410r1_450b1Assignment>(newAssignmentsArray.capacity, HK_MEMORY_CLASS_ARRAY);
	for( int i = 0; i < oldAttributesArray.size; i++ )
	{
		_hkbAttributeModifier_410r1_450b1Assignment& a = static_cast<_hkbAttributeModifier_410r1_450b1Assignment*>(newAssignmentsArray.data)[i];
		a.m_attributeIndex = static_cast<hkInt32*>(oldAttributeIndicesArray.data)[i];
		a.m_attributeValue = static_cast<hkReal*>(oldAttributesArray.data)[i];
	}
	// track allocated memory
	tracker.addChunk(newAssignmentsArray.data, hkSizeOf(_hkbAttributeModifier_410r1_450b1Assignment)*newAssignmentsArray.capacity, HK_MEMORY_CLASS_ARRAY);
	newAssignmentsArray.capacity |= hkArray<char>::DONT_DEALLOCATE_FLAG;
}

static void hkbBlenderGenerator_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	// two hkBools are now flags
	hkClassMemberAccessor newFlags(newObj, "flags");
	hkClassMemberAccessor oldSync(oldObj, "sync" );
	hkClassMemberAccessor oldAutoComputeSecondGeneratorWeight(oldObj, "autoComputeSecondGeneratorWeight" );

	if ( oldSync.asBool() )
	{
		newFlags.asInt16() |= 1;
	}

	if ( oldAutoComputeSecondGeneratorWeight.asBool() )
	{
		newFlags.asInt16() |= 2;
	}
}

static void convertBoneArray(	
	hkVariant& oldObj,
	hkVariant& newObj,
	const char* memberName,
	hkObjectUpdateTracker& tracker)
{
	hkClassMemberAccessor oldBoneIndices(oldObj, memberName);
	hkClassMemberAccessor newBoneIndices(newObj, memberName);

	//hkInt16* oldBonePtr = (hkInt16*)oldBoneIndices.getAddress();
	DummyArray& newBoneArray = *static_cast<DummyArray*>(newBoneIndices.asRaw()); // hkInt16

	newBoneArray.size = newBoneArray.capacity = oldBoneIndices.getClassMember().getCstyleArraySize();
	// use placement constructor to initialize the hkArray
	newBoneArray.data = hkAllocateChunk<hkInt16>(newBoneArray.capacity, HK_MEMORY_CLASS_ARRAY);

	for( int i = 0; i < newBoneArray.size; ++i )
	{
		static_cast<hkInt16*>(newBoneArray.data)[i] = oldBoneIndices.asInt16(i);
	}
	tracker.addChunk(newBoneArray.data, hkSizeOf(hkInt16)*newBoneArray.capacity, HK_MEMORY_CLASS_ARRAY);
	newBoneArray.capacity |= hkArray<char>::DONT_DEALLOCATE_FLAG;
}

static void hkbCharacterBoneInfo_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	// convert the bone arrays from hkInt16[2] to hkArray<hkInt16>
	convertBoneArray( oldObj, newObj, "clavicleIndex", tracker );
	convertBoneArray( oldObj, newObj, "shoulderIndex", tracker );
	convertBoneArray( oldObj, newObj, "elbowIndex", tracker );
	convertBoneArray( oldObj, newObj, "wristIndex", tracker );
	convertBoneArray( oldObj, newObj, "hipIndex", tracker );
	convertBoneArray( oldObj, newObj, "kneeIndex", tracker );
	convertBoneArray( oldObj, newObj, "ankleIndex", tracker );
}

static void BoneInfo_410r1_450b1(
	const hkClassMemberAccessor& oldObjMem,
	const hkClassMemberAccessor& newObjMem,
	hkObjectUpdateTracker& tracker)
{
	hkVariant oldBoneInfoVariant = {oldObjMem.object().getAddress(), &oldObjMem.object().getClass()};
	hkVariant newBoneInfoVariant = {newObjMem.object().getAddress(), &newObjMem.object().getClass()};

	hkbCharacterBoneInfo_410r1_450b1(oldBoneInfoVariant, newBoneInfoVariant, tracker);
}

static void hkbCharacterSetup_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	// hkbCharacterSetup::m_animationBoneInfo
	BoneInfo_410r1_450b1(hkClassMemberAccessor(oldObj, "animationBoneInfo"),
							hkClassMemberAccessor(newObj, "animationBoneInfo"),
							tracker);

	// hkbCharacterSetup::m_ragdollBoneInfo
	BoneInfo_410r1_450b1(hkClassMemberAccessor(oldObj, "ragdollBoneInfo"),
							hkClassMemberAccessor(newObj, "ragdollBoneInfo"),
							tracker);
}

static void hkbClipGenerator_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	// filename has been renamed animationName
	{
		hkClassMemberAccessor oldFilename(oldObj, "filename");
		hkClassMemberAccessor newAnimationName(newObj, "animationName");

		newAnimationName.asPointer() = oldFilename.asPointer();
	}

	// continueMotionAtEnd is now a flag
	{
		hkClassMemberAccessor oldContinueMotionAtEnd(oldObj, "continueMotionAtEnd");
		hkClassMemberAccessor newFlags(newObj, "flags");

		if ( oldContinueMotionAtEnd.asBool() )
		{
			newFlags.asInt8() = 1;
		}
	}
}

static void hkbFootIkGains_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	// renamed ascendingGain to groundAscendingGain
	{
		hkClassMemberAccessor oldAg(oldObj, "ascendingGain");
		hkClassMemberAccessor newAg(newObj, "groundAscendingGain");

		newAg.asReal() = oldAg.asReal();
	}

	// renamed descendingGain to groundDescendingGain
	{
		hkClassMemberAccessor oldDg(oldObj, "descendingGain");
		hkClassMemberAccessor newDg(newObj, "groundDescendingGain");

		newDg.asReal() = oldDg.asReal();
	}
}

static void hkbFootIkGains_410r1_450b1(
	const hkClassMemberAccessor& oldObjMem,
	const hkClassMemberAccessor& newObjMem,
	hkObjectUpdateTracker& tracker)
{
	hkVariant oldFootIkGainsVariant = {oldObjMem.object().getAddress(), &oldObjMem.object().getClass()};
	hkVariant newFootIkGainsVariant = {newObjMem.object().getAddress(), &newObjMem.object().getClass()};

	hkbFootIkGains_410r1_450b1(oldFootIkGainsVariant, newFootIkGainsVariant, tracker);
}

static void hkbFootIkControlData_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	hkbFootIkGains_410r1_450b1(
		hkClassMemberAccessor(oldObj, "gains"),
		hkClassMemberAccessor(newObj, "gains"),
		tracker);
}

static void hkbFootIkModifier_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	hkbFootIkGains_410r1_450b1(
		hkClassMemberAccessor(oldObj, "gains"),
		hkClassMemberAccessor(newObj, "gains"),
		tracker);
}

static void hkbFootIkControlsModifier_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	hkClassMemberAccessor oldControlData(oldObj, "controlData");
	hkClassMemberAccessor newControlData(newObj, "controlData");

	hkVariant oldControlDataVariant = {oldControlData.object().getAddress(), &oldControlData.object().getClass()};
	hkVariant newControlDataVariant = {newControlData.object().getAddress(), &newControlData.object().getClass()};

	hkbFootIkControlData_410r1_450b1(oldControlDataVariant, newControlDataVariant, tracker);
}

static void hkbReachModifier_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	// The old class had one reachReferenceBoneIdx, and the new class has an array of 2 of them.
	{
		hkClassMemberAccessor oldRefBoneIdx(oldObj, "reachReferenceBoneIdx");
		hkClassMemberAccessor newRefBoneIdx(newObj, "reachReferenceBoneIdx");

		hkInt16* newRefBonePtr = (hkInt16*)newRefBoneIdx.getAddress();

		*newRefBonePtr = *(newRefBonePtr+1) = oldRefBoneIdx.asInt16();
	}

	// The new member m_isHandEnabled[2] needs defaults.
	{
		hkClassMemberAccessor isHandEnabled(newObj, "isHandEnabled");

		hkBool* p = (hkBool*)isHandEnabled.getAddress();

		// enable both hands
		*p = *(p+1) = true;
	}
}

static void hkbStateMachineStateInfo_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	hkClassMemberAccessor newEnterNotifyEvent(newObj, "enterNotifyEvent");
	hkClassMemberAccessor newExitNotifyEvent(newObj, "exitNotifyEvent");

	newEnterNotifyEvent.asInt32() = -1;
	newExitNotifyEvent.asInt32() = -1;
}

static void hkbHandIkModifier_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& )
{
	// In the old class there was just one back hand normal.  In the new class there is an array of two of them.
	hkClassMemberAccessor oldBackHandNormal(oldObj, "backHandNormalInHandSpace");
	hkClassMemberAccessor newBackHandNormal(newObj, "backHandNormalInHandSpace");

	hkVector4* oldPtr = (hkVector4*)oldBackHandNormal.getAddress();
	hkVector4* newPtr = (hkVector4*)newBackHandNormal.getAddress();

	*newPtr = *oldPtr;
	*(newPtr+1) = *oldPtr;
}
template<typename T>
static void makeBitFieldFromArray(DummyBitField& bitfield, const DummyArray& arr, hkObjectUpdateTracker& tracker)
{
	// find max size of the array and allocate memory once
	int maxBoneBits = 0;
	for( int i = 0; i < arr.size; i++ )
	{
		maxBoneBits = hkMath::max2( int(static_cast<T*>(arr.data)[i]), maxBoneBits);
	}
	// set bit field size
	bitfield.numBitsAndFlags = (maxBoneBits+1);
	bitfield.numWords = (bitfield.numBitsAndFlags + 31) >> 5;
	if( bitfield.numWords )
	{
		bitfield.words = hkAllocateChunk<hkUint32>(bitfield.numWords, HK_MEMORY_CLASS_ARRAY);
		hkString::memSet(bitfield.words, 0, hkSizeOf(hkUint32)*bitfield.numWords);
		tracker.addChunk(bitfield.words, hkSizeOf(hkUint32)*bitfield.numWords, HK_MEMORY_CLASS_ARRAY);
		// set bits
		for( int i = 0; i < arr.size; i++ )
		{
			int boneIndex = static_cast<T*>(arr.data)[i];
			int arrayIndex = boneIndex >> 5;
			bitfield.words[arrayIndex] |= ( 1 << ( boneIndex & 0x1f ) );
		}
	}
	bitfield.numBitsAndFlags |= DummyBitField::DONT_DEALLOCATE_FLAG;
}

static void hkbRigidBodyRagdollModifier_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	// In the old class there was an array of hkInt16 for the lower body bones.
	// In the new class there is a bitfield for the keyframed bones.
	hkClassMemberAccessor oldLowerBodyBones(oldObj, "lowerBodyBones");
	hkClassMemberAccessor newKeyframedBones(newObj, "keyframedBones");

	makeBitFieldFromArray<hkInt16>(*static_cast<DummyBitField*>(newKeyframedBones.asRaw()), *static_cast<DummyArray*>(oldLowerBodyBones.asRaw()), tracker);
}

static void hkbPoweredRagdollModifier_410r1_450b1(
	hkVariant& oldObj,
	hkVariant& newObj,
	hkObjectUpdateTracker& tracker)
{
	// In the old class there was an array of ints for the keyframed bones.
	// In the new class there is a bitfield for the keyframed bones.
	hkClassMemberAccessor oldKeyframedBones(oldObj, "keyframedBones");
	hkClassMemberAccessor newKeyframedBones(newObj, "keyframedBones");

	makeBitFieldFromArray<hkInt32>(*static_cast<DummyBitField*>(newKeyframedBones.asRaw()), *static_cast<DummyArray*>(oldKeyframedBones.asRaw()), tracker);
}

namespace hkCompat_hk410r1_hk450b1
{

#define REMOVED(TYPE) { 0,0, hkVersionRegistry::VERSION_REMOVED, TYPE, HK_NULL }
#define BINARY_IDENTICAL(OLDSIG,NEWSIG,TYPE) { OLDSIG, NEWSIG, hkVersionRegistry::VERSION_MANUAL, TYPE, HK_NULL }



void hkExtendedMeshShape_hk410r1_hk450b1( hkVariant& oldObj,
									   hkVariant& newObj,
									   hkObjectUpdateTracker& )
{
	hkClassMemberAccessor radiusOld(newObj, "radius" );
	hkClassMemberAccessor radiusNew(newObj, "triangleRadius" );
	if ( ( radiusNew.isOk() && radiusOld.isOk() ) )
	{
		radiusNew.asReal() = radiusOld.asReal();
	}
}

enum hkGenericConstraintDataScheme_hk450b1_enum
{	
	hkGenericConstraintDataScheme_e_endScheme = 0, 
	hkGenericConstraintDataScheme_e_setPivotA, hkGenericConstraintDataScheme_e_setPivotB, 
	hkGenericConstraintDataScheme_e_setLinearDofA, hkGenericConstraintDataScheme_e_setLinearDofB, hkGenericConstraintDataScheme_e_setLinearDofW, hkGenericConstraintDataScheme_e_constrainLinearW, hkGenericConstraintDataScheme_e_constrainAllLinearW,
	hkGenericConstraintDataScheme_e_setAngularBasisA, hkGenericConstraintDataScheme_e_setAngularBasisB, hkGenericConstraintDataScheme_e_setAngularBasisAidentity, hkGenericConstraintDataScheme_e_setAngularBasisBidentity,
	hkGenericConstraintDataScheme_e_constrainToAngularW, hkGenericConstraintDataScheme_e_constrainAllAngularW,hkGenericConstraintDataScheme_e_setAngularMotor, hkGenericConstraintDataScheme_e_setLinearMotor,
	hkGenericConstraintDataScheme_e_setLinearLimit, hkGenericConstraintDataScheme_e_setAngularLimit, hkGenericConstraintDataScheme_e_setConeLimit, hkGenericConstraintDataScheme_e_setTwistLimit, hkGenericConstraintDataScheme_e_setAngularFriction, hkGenericConstraintDataScheme_e_setLinearFriction,
	hkGenericConstraintDataScheme_e_setStrength, hkGenericConstraintDataScheme_e_restoreStrengh, hkGenericConstraintDataScheme_e_doConstraintModifier, 
	hkGenericConstraintDataScheme_e_numCommands 
};  

void hkGenericConstraintDataScheme_hk410r1_hk450b1( hkVariant& oldObj,
													hkVariant& newObj,
													hkObjectUpdateTracker& )
{
	HK_ASSERT2(0xad78555a, false, "This class cannot be instantiated on it's own. It can only be a member of hkGenericConstraintData.");
}

void hkGenericConstraintData_hk410r1_hk450b1( hkVariant& oldObj,
											 hkVariant& newObj,
											 hkObjectUpdateTracker& ) 
{
	hkClassMemberAccessor scheme(newObj, "scheme");
	hkClassMemberAccessor commands = scheme.member("commands");

	int* currentCommand = reinterpret_cast<int*>(commands.asSimpleArray().data);
	int* commandEnd = currentCommand + commands.asSimpleArray().size;

	while(currentCommand < commandEnd)
	{

		switch( *currentCommand )
		{
		case hkGenericConstraintDataScheme_e_setLinearDofA :
		case hkGenericConstraintDataScheme_e_setLinearDofB :
		case hkGenericConstraintDataScheme_e_setLinearDofW :
		case hkGenericConstraintDataScheme_e_constrainLinearW :
		case hkGenericConstraintDataScheme_e_constrainToAngularW :
		case hkGenericConstraintDataScheme_e_setLinearLimit :
		case hkGenericConstraintDataScheme_e_setAngularLimit :
		case hkGenericConstraintDataScheme_e_setConeLimit :
		case hkGenericConstraintDataScheme_e_setAngularMotor :
		case hkGenericConstraintDataScheme_e_setLinearMotor :
		case hkGenericConstraintDataScheme_e_setAngularFriction :
		case hkGenericConstraintDataScheme_e_setLinearFriction :
			{
				currentCommand++;
				break;
			}
		case hkGenericConstraintDataScheme_e_setTwistLimit :
			{
				currentCommand += 2;
				break;
			}

		case hkGenericConstraintDataScheme_e_constrainAllLinearW :
		case hkGenericConstraintDataScheme_e_setAngularBasisA :
		case hkGenericConstraintDataScheme_e_setAngularBasisB :
		case hkGenericConstraintDataScheme_e_setAngularBasisAidentity :
		case hkGenericConstraintDataScheme_e_setAngularBasisBidentity :
		case hkGenericConstraintDataScheme_e_constrainAllAngularW :
		case hkGenericConstraintDataScheme_e_setPivotA :
		case hkGenericConstraintDataScheme_e_setPivotB :
		case hkGenericConstraintDataScheme_e_setStrength :
		case hkGenericConstraintDataScheme_e_restoreStrengh:
			{
				break;
			}

		case hkGenericConstraintDataScheme_e_doConstraintModifier : 
			{
				currentCommand++;
				break;
			}

		case hkGenericConstraintDataScheme_e_numCommands : // this is former m_doRhsConstraintModifier
			{
				int* newCommand = currentCommand + 2;
				while(newCommand < commandEnd)
				{
					newCommand[-2] = newCommand[0];
					newCommand++;
				}
				commandEnd -= 2;
				commands.asSimpleArray().size -= 2;

				// process the new command in the current slot
				currentCommand--;
				break;
			}


		case hkGenericConstraintDataScheme_e_endScheme :
			{
				return;
				break;
			}

		default: 
			{
				HK_ASSERT2(0x1b6cd4a1,  0, "generic constraint: unknown opcode" );
				break;
			}

		}

		// next command
		currentCommand++;
	}
}


static const hkVersionRegistry::ClassAction s_updateActions[] =
{
	// common
	{ 0xd486cfd9, 0x4f93f28d, hkVersionRegistry::VERSION_COPY, "hkMonitorStreamFrameInfo", HK_NULL },
	{ 0x97ccc01f, 0x858de884, hkVersionRegistry::VERSION_COPY, "hkMonitorStreamStringMap", HK_NULL }, // changes in hkMonitorStreamStringMapStringMap
	{ 0x56a4f5bf, 0x3d55b593, hkVersionRegistry::VERSION_COPY, "hkMonitorStreamStringMapStringMap", HK_NULL }, // align_8

	{ 0x8bdd3e9a, 0x8bdd3e9a, hkVersionRegistry::VERSION_VARIANT, "hkBoneAttachment", HK_NULL },
	{ 0xf598a34e, 0xf598a34e, hkVersionRegistry::VERSION_VARIANT, "hkRootLevelContainer", HK_NULL },
	{ 0x853a899c, 0x853a899c, hkVersionRegistry::VERSION_VARIANT, "hkRootLevelContainerNamedVariant", HK_NULL }, 
	{ 0x3d43489c, 0xf2ec0c9c, hkVersionRegistry::VERSION_VARIANT | hkVersionRegistry::VERSION_COPY, "hkxMaterial", HK_NULL }, // now inherits hkxAttributeHolder
	{ 0x914da6c1, 0x914da6c1, hkVersionRegistry::VERSION_VARIANT, "hkxAttribute", HK_NULL },
	{ 0x1667c01c, 0x1667c01c, hkVersionRegistry::VERSION_VARIANT, "hkxAttributeGroup", HK_NULL }, 
	{ 0x0a62c79f, 0x06af1b5a, hkVersionRegistry::VERSION_VARIANT | hkVersionRegistry::VERSION_COPY, "hkxNode", HK_NULL }, // now inherits hkxAttributeHolder
	{ 0xe085ba9f, 0xe085ba9f, hkVersionRegistry::VERSION_VARIANT, "hkxMaterialTextureStage", HK_NULL },
	{ 0x6dce06bd, 0x72e8e849, hkVersionRegistry::VERSION_VARIANT | hkVersionRegistry::VERSION_COPY, "hkxMesh", HK_NULL },
	{ 0x03d42467, 0x912c8863, hkVersionRegistry::VERSION_VARIANT | hkVersionRegistry::VERSION_COPY, "hkxMeshSection", HK_NULL },
	{ 0x57061454, 0x57061454, hkVersionRegistry::VERSION_HOMOGENEOUSARRAY, "hkxVertexBuffer", HK_NULL },

	{ 0x6b930f43, 0xf2ed2387, hkVersionRegistry::VERSION_COPY, "hkBitField", hkbBitField_410r1_450b1 }, // Added numBits field
	
	// moppembedded changes
	{ 0x5b9161b9, 0x391f7673, hkVersionRegistry::VERSION_COPY, "hkTriSampledHeightFieldBvTreeShape", HK_NULL }, // m_child moved to derived classes
	{ 0xdd75e583, 0x03add78e, hkVersionRegistry::VERSION_COPY, "hkMoppBvTreeShape", HK_NULL }, // m_child moved to derived classes
	{ 0x2bd5cbc9, 0xe7eca7eb, hkVersionRegistry::VERSION_COPY, "hkBvTreeShape", HK_NULL }, // m_child moved to derived classes


		// Welding changes
	{ 0xb782ddda, 0xae96f6a3, hkVersionRegistry::VERSION_COPY, "hkExtendedMeshShapeTrianglesSubpart", HK_NULL },				// New member triangle offset
	{ 0x4c103864, 0xfd7a7ad1, hkVersionRegistry::VERSION_COPY, "hkExtendedMeshShape", hkExtendedMeshShape_hk410r1_hk450b1 },	// Cleanup
	{ 0x51a73ef8, 0x0df9760a, hkVersionRegistry::VERSION_COPY, "hkMeshShapeSubpart", HK_NULL },									// New member triangle offset
	{ 0x7e2d7dfd, 0x05bef2a7, hkVersionRegistry::VERSION_COPY, "hkMeshShape", HK_NULL },											// Welding info added
	{ 0xe3d19f47, 0xd38738c1, hkVersionRegistry::VERSION_COPY, "hkSimpleMeshShapeTriangle", HK_NULL },							// New member triangle offset
	{ 0x301e8cc7, 0x9040d7ba, hkVersionRegistry::VERSION_COPY, "hkSimpleMeshShape", HK_NULL },									// Welding info added
	{ 0x4f3a350d, 0x95ad1a25, hkVersionRegistry::VERSION_COPY, "hkTriangleShape", HK_NULL },									// Welding info added

	{ 0xf5013e20, 0x99da124b, hkVersionRegistry::VERSION_COPY, "hkConvexTransformShape", HK_NULL }, // New childShapeSize member (set at runtime)
	{ 0x983832e5, 0x5b8bc234, hkVersionRegistry::VERSION_COPY, "hkConvexTranslateShape", HK_NULL }, // New childShapeSize member (set at runtime)
	{ 0x05d5744f, 0xf8f74f85, hkVersionRegistry::VERSION_COPY, "hkConvexShape", HK_NULL }, // New enum defined in scope of class

	{ 0x7bcb8109, 0xa878ccce, hkVersionRegistry::VERSION_COPY, "hkListShapeChildInfo", HK_NULL }, // size for spu added
	{ 0x84a81dc7, 0x4a1f744e, hkVersionRegistry::VERSION_COPY, "hkListShape", HK_NULL }, // Pad + changes to child info, support for extents

	{ 0x5020eb73, 0xcdc68ad6, hkVersionRegistry::VERSION_COPY, "hkCollidable", EmptyVerFunc_410r1_450b1 }, // Changed type for owner offset, New members for forceCdOnPpu and shapeSize set at runtime
	{ 0x99dde7b9, 0x666490a1, hkVersionRegistry::VERSION_COPY, "hkShape", HK_NULL }, // Type field added (no versioning function, type is set in finish constructor)

	// Filter changes
	{  0xf551d39f, 0x7c3d49b3, hkVersionRegistry::VERSION_COPY, "hkGroupFilter", HK_NULL },					// New type field added, type set in finish constructor
	{  0xb6fa76f0, 0x3610a32e, hkVersionRegistry::VERSION_COPY, "hkCollisionFilter", HK_NULL }, // New type field added

	// hkdynamics
	{ 0x008d5bf4, 0xe9b10b82, hkVersionRegistry::VERSION_COPY, "hkEntity", EmptyVerFunc_410r1_450b1 }, // hkArraySmall + members moved around, hkWorldObject::m_collidable has changed
	{ 0x8f6b8829, 0xfcb91d3a, hkVersionRegistry::VERSION_COPY, "hkWorldObject", EmptyVerFunc_410r1_450b1 }, // Members moved around, hkWorldObject::m_collidable has changed

	{ 0xfdcdf165, 0x678213fa, hkVersionRegistry::VERSION_COPY, "hkWorldCinfo", HK_NULL }, // added members
	BINARY_IDENTICAL( 0x27169465, 0x6a44c317, "hkConstraintMotor" ), // type enumeration expanded
	{ 0xa9afa55f, 0xfb1093dc,  hkVersionRegistry::VERSION_COPY, "hkGenericConstraintDataScheme", hkGenericConstraintDataScheme_hk410r1_hk450b1 },
	{ 0xc781e207, 0x4fef2f8b, hkVersionRegistry::VERSION_COPY, "hkGenericConstraintData", hkGenericConstraintData_hk410r1_hk450b1 },
	{ 0xbf49e9bd, 0x8c10d7d8, hkVersionRegistry::VERSION_COPY, "hkBreakableConstraintData", HK_NULL },

	{ 0xc85d520f, 0x83c56f2e, hkVersionRegistry::VERSION_COPY, "hkModifierConstraintAtom", HK_NULL }, // align_16, padding
	BINARY_IDENTICAL( 0x1762d81f, 0x75b4a341, "hkBridgeAtoms" ), // changes in hkConstraintAtom
	BINARY_IDENTICAL( 0x3a8dae7a, 0xeb9edbdc, "hkBallAndSocketConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0x583131f8, 0x5c2bf49b, hkVersionRegistry::VERSION_COPY, "hkBallAndSocketConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xc058c764, 0x6ecfd669, "hkBallSocketChainData" ), // changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xdab8aaf1, 0x5e4166c4, "hkHingeConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0xeff16a0e, 0x90d18b31, hkVersionRegistry::VERSION_COPY, "hkHingeConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0x09570b7b, 0x0381a5af, "hkHingeLimitsDataAtoms" ), // changes in hkConstraintAtom
	{ 0xa61d656d, 0xd4f52034, hkVersionRegistry::VERSION_COPY, "hkHingeLimitsData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0x0b8edb4a, 0xbebe526b, "hkLimitedHingeConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0xd9510bde, 0xcf669674, hkVersionRegistry::VERSION_COPY, "hkLimitedHingeConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xe26600ea, 0x7e9971f9, "hkMalleableConstraintData" ), // changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xca45a993, 0x31f1d344, "hkPointToPathConstraintData" ), // changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xd943081a, 0x25effb78, "hkPointToPlaneConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0x01a5a929, 0x79355be9, hkVersionRegistry::VERSION_COPY, "hkPointToPlaneConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0x5bde2861, 0xfde381f1, "hkPoweredChainData" ), // changes in hkConstraintAtom
	BINARY_IDENTICAL( 0x48d40c23, 0x1666c241, "hkPrismaticConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0xe9717697, 0x171c6a3b, hkVersionRegistry::VERSION_COPY, "hkPrismaticConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xbd4421d0, 0xa457c77b, "hkPulleyConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0x2c1d380b, 0x087f61c4, hkVersionRegistry::VERSION_COPY, "hkPulleyConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0x57087b3f, 0x90870729, "hkRagdollConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0x6cccbc01, 0x999965e5, hkVersionRegistry::VERSION_COPY, "hkRagdollConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xc757005a, 0x83026d13, "hkRagdollLimitsDataAtoms" ), // changes in hkConstraintAtom
	{ 0x95be515b, 0xda4b0ae9, hkVersionRegistry::VERSION_COPY, "hkRagdollLimitsData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0x94030c62, 0xe87f0180, "hkStiffSpringChainData" ), // changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xef7c9f11, 0x10d9496c, "hkStiffSpringConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0x8944ddfa, 0x1891e985, hkVersionRegistry::VERSION_COPY, "hkStiffSpringConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	BINARY_IDENTICAL( 0xc45edd1f, 0xeda6f2c8, "hkWheelConstraintDataAtoms" ), // changes in hkConstraintAtom
	{ 0x78fca979, 0x2e3b2e48, hkVersionRegistry::VERSION_COPY, "hkWheelConstraintData", HK_NULL }, // align_16, changes in hkConstraintAtom
	REMOVED( "hkConstraintInfo" ),

	BINARY_IDENTICAL( 0x6dac429e, 0x357781ee, "hkConstraintAtom" ), // Change to enumerated type


	///////////////
	// hkbehavior
	///////////////

	REMOVED("hkbControlLookAtModifier"),
	REMOVED("hkbPoseMatchingModifier"), 
	{ 0x7569eee9, 0x6b141356, hkVersionRegistry::VERSION_COPY, "hkbAttributeModifier", hkbAttributeModifier_410r1_450b1 }, // merged arrays into one array of structs
	{ 0x6d2b388a, 0x98f7a7ba, hkVersionRegistry::VERSION_COPY, "hkbBehavior", HK_NULL }, // added data
	{ 0x9259c780, 0x924950d0, hkVersionRegistry::VERSION_COPY, "hkbBlenderGeneratorChild", HK_NULL }, // added members
	{ 0x0d52e940, 0xbd1b0c10, hkVersionRegistry::VERSION_COPY, "hkbBlenderGenerator", hkbBlenderGenerator_410r1_450b1 }, // added flags 
	{ 0xed9935f3, 0xe5ca58a5, hkVersionRegistry::VERSION_COPY, "hkbCharacterBoneInfo", hkbCharacterBoneInfo_410r1_450b1 }, // changed fixed arrays to hkArray
	{ 0x93324364, 0x8b4fc105, hkVersionRegistry::VERSION_COPY, "hkbCharacterSetup", hkbCharacterSetup_410r1_450b1 }, // refactored and renamed hkbCharacterData
	{ 0xf61d9174, 0xfad6810b, hkVersionRegistry::VERSION_COPY, "hkbClipGenerator", hkbClipGenerator_410r1_450b1 }, // multiple changes
	{ 0x8a5e8f79, 0x0d1ed2dd, hkVersionRegistry::VERSION_COPY, "hkbFootIkControlData", hkbFootIkControlData_410r1_450b1 }, // removed m_isFootIkEnabled, m_gains changed
	{ 0x14958c26, 0x18d9e930, hkVersionRegistry::VERSION_COPY, "hkbFootIkControlsModifier", hkbFootIkControlsModifier_410r1_450b1 }, // changed due to hkbNode having changed, m_controlData changed
	{ 0x8d9b4740, 0xff1f822c, hkVersionRegistry::VERSION_COPY, "hkbFootIkGains", hkbFootIkGains_410r1_450b1 }, // renamed some members
	{ 0x920e26fa, 0x6ad2388f, hkVersionRegistry::VERSION_COPY, "hkbFootIkModifier", hkbFootIkModifier_410r1_450b1 }, 
	{ 0xaef279c0, 0xfa3ea3d9, hkVersionRegistry::VERSION_COPY, "hkbPoweredRagdollControlData", HK_NULL }, // removed m_weight
	{ 0x2f8cf98d, 0x47ffe114, hkVersionRegistry::VERSION_COPY, "hkbPoweredRagdollControlsModifier", HK_NULL }, // changed due to hkbNode having changed
	{ 0xd16d0946, 0x28035065, hkVersionRegistry::VERSION_COPY, "hkbPoweredRagdollModifier", hkbPoweredRagdollModifier_410r1_450b1 }, 
	{ 0x407cc6a1, 0xb902ee93, hkVersionRegistry::VERSION_COPY, "hkbRagdollDriverModifier", HK_NULL }, // added m_ragdollForceModifier and m_isRagdollForceModifierActive
	{ 0xdcceb01d, 0xad81cd2d, hkVersionRegistry::VERSION_COPY, "hkbReachModifier", hkbReachModifier_410r1_450b1 }, // several changes
	{ 0xf1a273f4, 0xcdf4ebd3, hkVersionRegistry::VERSION_COPY, "hkbRigidBodyRagdollControlData", HK_NULL }, // removed m_weight
	{ 0xb9388b3c, 0x0d19288e, hkVersionRegistry::VERSION_COPY, "hkbRigidBodyRagdollControlsModifier", HK_NULL }, // changed due to hkbNode having changed
	{ 0x73fc19c4, 0xdde1d1c5, hkVersionRegistry::VERSION_COPY, "hkbRigidBodyRagdollModifier", hkbRigidBodyRagdollModifier_410r1_450b1 }, // m_lowerBodyBones replaced by m_keyframedBones
	{ 0x99c6e0ba, 0x70d14379, hkVersionRegistry::VERSION_COPY, "hkbStateMachine", HK_NULL }, // added m_eventQueue
	{ 0x2d9f7a72, 0xb13b1ad2, hkVersionRegistry::VERSION_COPY, "hkbStateMachineStateInfo", hkbStateMachineStateInfo_410r1_450b1 }, // added m_enterNotifyEvent and m_exitNotifyEvent
	{ 0x0d68689c, 0x6c68f22d, hkVersionRegistry::VERSION_COPY, "hkbHandIkModifier", hkbHandIkModifier_410r1_450b1 }, // changed m_backHandNormalInHandSpace into an array
	{ 0x605c0661, 0xc376dfcc, hkVersionRegistry::VERSION_COPY, "hkbNode", HK_NULL }, // added m_variableBindingSet
	BINARY_IDENTICAL( 0x7caf4e9c, 0x72edbbbe, "hkbClipTrigger" ), // changed because hkbEvent changed (but both are binary identical) 
	BINARY_IDENTICAL( 0x891625db, 0xad067113, "hkbEvent" ), // changed the name of an enum
	BINARY_IDENTICAL( 0x6edfcd68, 0x60a881e5, "hkbStateMachineInterval" ), // renamed members
	BINARY_IDENTICAL( 0xb1043911, 0x3907f10b, "hkbStateMachineTransitionInfo" ), // renamed a couple of members

	{ 0, 0, 0, HK_NULL, HK_NULL }
};

static const hkVersionRegistry::ClassRename s_renames[] =
{
	{ "hkbCharacterSetup", "hkbCharacterData" },
	{ "hkbStateMachineInterval", "hkbStateMachineTimeInterval" },
	{ HK_NULL, HK_NULL }
};

#define HK_COMPAT_VERSION_FROM hkHavok410r1Classes
#define HK_COMPAT_VERSION_TO hkHavok450b1Classes
#include<Common/Compat/Deprecated/Compat/hkCompat_Common.cxx>
#undef HK_COMPAT_VERSION_FROM
#undef HK_COMPAT_VERSION_TO
} // namespace hkCompat_hk410r1_hk450b1

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
