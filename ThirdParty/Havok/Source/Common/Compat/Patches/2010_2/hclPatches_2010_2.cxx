/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

// Cloth specific product patches applied to release 2010_2.
// This file is #included by hclPatches_2010_2.cpp

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceDeformerLocalBlockPNTB", 0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_VEC_4, HK_NULL, 16)
		HK_PATCH_MEMBER_ADDED("localNormal", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localTangent", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localBiTangent", TYPE_TUPLE_INT, HK_NULL, 64)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceDeformerLocalBlockP", 0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_INT, HK_NULL, 64)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceDeformerLocalBlockPNT", 0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localNormal", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localTangent", TYPE_TUPLE_INT, HK_NULL, 64)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceDeformerLocalBlockP", 0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_VEC_4, HK_NULL, 16)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceDeformerLocalBlockPN", 0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_VEC_4, HK_NULL, 16)
		HK_PATCH_MEMBER_ADDED("localNormal", TYPE_TUPLE_INT, HK_NULL, 64)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceDeformerLocalBlockPN", 0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localNormal", TYPE_TUPLE_INT, HK_NULL, 64)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceDeformerLocalBlockPNTB",0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localNormal", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localTangent", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localBiTangent", TYPE_TUPLE_INT, HK_NULL, 64)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceDeformerLocalBlockPNT", 0)
		HK_PATCH_MEMBER_ADDED("localPosition", TYPE_TUPLE_VEC_4, HK_NULL, 16)
		HK_PATCH_MEMBER_ADDED("localNormal", TYPE_TUPLE_INT, HK_NULL, 64)
		HK_PATCH_MEMBER_ADDED("localTangent", TYPE_TUPLE_INT, HK_NULL, 64)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclCompressibleLinkConstraintSet", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclConstraintSet")
	HK_PATCH_MEMBER_ADDED("links", TYPE_ARRAY_STRUCT, "hclCompressibleLinkConstraintSetLink", 0)
	HK_PATCH_DEPENDS("hclCompressibleLinkConstraintSetLink", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclConstraintSet", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclCompressibleLinkConstraintSetLink",0)
	HK_PATCH_MEMBER_ADDED("particleA", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("particleB", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("restLength", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("compressionLength", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("stiffness", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclStandardLinkSetupObject", 0, "hclStandardLinkSetupObject", 1)
	HK_PATCH_MEMBER_ADDED("allowedCompression", TYPE_STRUCT, "hclVertexFloatInput", 0)
	HK_PATCH_MEMBER_ADDED("edgeSelection", TYPE_STRUCT, "hclEdgeSelectionInput", 0)
	HK_PATCH_MEMBER_ADDED("ignoreHiddenEdges", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_DEPENDS("hclVertexFloatInput", 0)
	HK_PATCH_DEPENDS("hclEdgeSelectionInput", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclCompressibleLinkConstraintSetMxSingle", 0)
	HK_PATCH_MEMBER_ADDED("restLength", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("compressionLength", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("stiffnessA", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("stiffnessB", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("particleA", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("particleB", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclCompressibleLinkConstraintSetMx", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclConstraintSet")
	HK_PATCH_MEMBER_ADDED("batches", TYPE_ARRAY_STRUCT, "hclCompressibleLinkConstraintSetMxBatch", 0)
	HK_PATCH_MEMBER_ADDED("singles", TYPE_ARRAY_STRUCT, "hclCompressibleLinkConstraintSetMxSingle", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclConstraintSet", 0)
	HK_PATCH_DEPENDS("hclCompressibleLinkConstraintSetMxBatch", 0)
	HK_PATCH_DEPENDS("hclCompressibleLinkConstraintSetMxSingle", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclCompressibleLinkConstraintSetMxBatch", 0)
	HK_PATCH_MEMBER_ADDED("restLengths", TYPE_TUPLE_REAL, HK_NULL, 16)
	HK_PATCH_MEMBER_ADDED("compressionLengths", TYPE_TUPLE_REAL, HK_NULL, 16)
	HK_PATCH_MEMBER_ADDED("stiffnessesA", TYPE_TUPLE_REAL, HK_NULL, 16)
	HK_PATCH_MEMBER_ADDED("stiffnessesB", TYPE_TUPLE_REAL, HK_NULL, 16)
	HK_PATCH_MEMBER_ADDED("particlesA", TYPE_TUPLE_INT, HK_NULL, 16)
	HK_PATCH_MEMBER_ADDED("particlesB", TYPE_TUPLE_INT, HK_NULL, 16)
HK_PATCH_END()
HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclEdgeSelectionInput", 0)
	HK_PATCH_MEMBER_ADDED("type", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("channelName", TYPE_CSTRING, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclSceneDataSetupMesh", 1, "hclSceneDataSetupMesh", 2)
	HK_PATCH_MEMBER_ADDED("edgeChannels", TYPE_ARRAY_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclCylinderShape", 0, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_PARENT_SET("hclShape", HK_NULL)
	HK_PATCH_MEMBER_REMOVED("start", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("end", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("dir", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("radius", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("cylLenSqrd", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("radiusSqrd", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_DEPENDS("hclShape", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclStandardLinkSetupObject", 1, "hclStandardLinkSetupObject", 2)
	HK_PATCH_MEMBER_ADDED("allowedStretching", TYPE_STRUCT, "hclVertexFloatInput", 0)
	HK_PATCH_DEPENDS("hclVertexFloatInput", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceMeshMeshDeformPNOperator", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclObjectSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPNs", TYPE_ARRAY_STRUCT, "hclObjectSpaceDeformerLocalBlockPN", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceDeformerLocalBlockPN", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceMeshMeshDeformPOperator", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclBoneSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPs", TYPE_ARRAY_STRUCT, "hclBoneSpaceDeformerLocalBlockP", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceDeformerLocalBlockP", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceMeshMeshDeformPOperator",0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclObjectSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPs", TYPE_ARRAY_STRUCT, "hclObjectSpaceDeformerLocalBlockP", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceDeformerLocalBlockP", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceMeshMeshDeformPNOperator",0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclBoneSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPNs", TYPE_ARRAY_STRUCT, "hclBoneSpaceDeformerLocalBlockPN", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceDeformerLocalBlockPN", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclOperator")
	HK_PATCH_MEMBER_ADDED("inputBufferIdx", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("outputBufferIdx", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("scaleNormalBehaviour", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("inputTrianglesSubset", TYPE_ARRAY_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("boneSpaceDeformer", TYPE_STRUCT, "hclBoneSpaceDeformer", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceDeformer", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceMeshMeshDeformPNTBOperator", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclBoneSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPNTBs", TYPE_ARRAY_STRUCT, "hclBoneSpaceDeformerLocalBlockPNTB", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceDeformerLocalBlockPNTB", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceMeshMeshDeformPNTOperator", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclObjectSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPNTs", TYPE_ARRAY_STRUCT, "hclObjectSpaceDeformerLocalBlockPNT", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceDeformerLocalBlockPNT", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceMeshMeshDeformPNTBOperator", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclObjectSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPNTBs", TYPE_ARRAY_STRUCT, "hclObjectSpaceDeformerLocalBlockPNTB", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceDeformerLocalBlockPNTB", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclBoneSpaceMeshMeshDeformPNTOperator",0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclBoneSpaceMeshMeshDeformOperator")
	HK_PATCH_MEMBER_ADDED("localPNTs", TYPE_ARRAY_STRUCT, "hclBoneSpaceDeformerLocalBlockPNT", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceDeformerLocalBlockPNT", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclBoneSpaceMeshMeshDeformOperator", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclObjectSpaceMeshMeshDeformOperator",0)
	HK_PATCH_PARENT_SET(HK_NULL, "hclOperator")
	HK_PATCH_MEMBER_ADDED("inputBufferIdx", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("outputBufferIdx", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("scaleNormalBehaviour", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("inputTrianglesSubset", TYPE_ARRAY_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("triangleFromMeshTransforms", TYPE_ARRAY_VEC_16, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("objectSpaceDeformer", TYPE_STRUCT, "hclObjectSpaceDeformer", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hclOperator", 0)
	HK_PATCH_DEPENDS("hclObjectSpaceDeformer", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclMeshMeshDeformSetupObject", 0, "hclMeshMeshDeformSetupObject", 1)
	HK_PATCH_MEMBER_ADDED("deformTangents", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("deformBiTangents", TYPE_BYTE, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hclSimClothDataLandscapeCollisionData",0)
	HK_PATCH_MEMBER_ADDED("landscapeRadius", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("enableStuckParticleDetection", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("stuckParticlesStretchFactorSq", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("pinchDetectionEnabled", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("pinchDetectionPriority", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("pinchDetectionRadius", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclSimClothSetupObject", 3, "hclSimClothSetupObject", 4)
	HK_PATCH_MEMBER_ADDED("collisionTolerance", TYPE_REAL, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("landscapeCollisionParticleSelection", TYPE_STRUCT, "hclVertexSelectionInput",0)
	HK_PATCH_MEMBER_ADDED("landscapeCollisionParticleRadius", TYPE_REAL, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("enableStuckParticleDetection", TYPE_BYTE, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("stuckParticlesStretchFactor", TYPE_REAL, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("enableLandscapePinchDetection", TYPE_BYTE, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("landscapePinchDetectionPriority", TYPE_INT, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("landscapePinchDetectionRadius", TYPE_REAL, HK_NULL,0)
	HK_PATCH_DEPENDS("hclVertexSelectionInput", 0)
	HK_PATCH_FUNCTION(hclSimClothSetupObject_3_to_4)
HK_PATCH_END()

HK_PATCH_BEGIN("hclSimClothData", 7, "hclSimClothData", 8)
	HK_PATCH_MEMBER_ADDED("landscapeCollisionEnabled", TYPE_BYTE, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("numLandscapeCollidableParticles", TYPE_INT, HK_NULL,0)
	HK_PATCH_MEMBER_ADDED("landscapeCollisionData", TYPE_STRUCT, "hclSimClothDataLandscapeCollisionData",0)
	HK_PATCH_DEPENDS("hclSimClothDataLandscapeCollisionData", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclBlendSetupObject", 0, "hclBlendSetupObject", 1)
	HK_PATCH_MEMBER_ADDED("blendNormals", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("blendTangents", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("blendBitangents", TYPE_BYTE, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hclBlendSomeVerticesOperator", 0, "hclBlendSomeVerticesOperator", 1)
	HK_PATCH_MEMBER_ADDED("blendNormals", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("blendTangents", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("blendBitangents", TYPE_BYTE, HK_NULL, 0)
HK_PATCH_END()

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
