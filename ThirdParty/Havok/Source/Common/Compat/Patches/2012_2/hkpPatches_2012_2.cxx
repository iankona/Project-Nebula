/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

// Physics specific product patches applied to release 2012_2.
// This file is #included by hkpPatches_2012_2.cpp

HK_PATCH_BEGIN("hkpDeformableLinConstraintAtom", 0, "hkpDeformableLinConstraintAtom", 1)
	HK_PATCH_MEMBER_ADDED("yieldStrengthDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("yieldStrengthOffDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("ultimateStrengthDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("ultimateStrengthOffDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkpDeformableLinConstraintAtom_0_to_1)
	HK_PATCH_MEMBER_REMOVED("yieldStrength", TYPE_STRUCT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("ultimateStrength", TYPE_STRUCT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkpDeformableAngConstraintAtom", 0, "hkpDeformableAngConstraintAtom", 1)
	HK_PATCH_MEMBER_ADDED("yieldStrengthDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("yieldStrengthOffDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("ultimateStrengthDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("ultimateStrengthOffDiag", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkpDeformableAngConstraintAtom_0_to_1)
	HK_PATCH_MEMBER_REMOVED("yieldStrength", TYPE_STRUCT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("ultimateStrength", TYPE_STRUCT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkpConvexVerticesShape", 4, "hkpConvexVerticesShape", 5)
	HK_PATCH_MEMBER_RENAMED("rotatedVertices", "rotatedVertices_old")
	HK_PATCH_MEMBER_ADDED("rotatedVertices", TYPE_ARRAY_REAL, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkpConvexVerticesShape_4_to_5)
	HK_PATCH_MEMBER_REMOVED("rotatedVertices_old", TYPE_ARRAY_STRUCT, "hkFourTransposedPointsf", 0)
	HK_PATCH_DEPENDS("hkFourTransposedPointsf", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkpConvexVerticesShape", 5, "hkpConvexVerticesShape", 6)
	HK_PATCH_MEMBER_RENAMED("rotatedVertices", "rotatedVertices_old")
	HK_PATCH_MEMBER_ADDED("rotatedVertices", TYPE_ARRAY_VEC_12, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkpConvexVerticesShape_5_to_6)
	HK_PATCH_MEMBER_REMOVED("rotatedVertices_old", TYPE_ARRAY_REAL, HK_NULL, 0)
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
