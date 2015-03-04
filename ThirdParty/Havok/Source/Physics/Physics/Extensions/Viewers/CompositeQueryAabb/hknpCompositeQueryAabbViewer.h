/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKNP_COMPOSITE_QUERY_AABB_VIEWER_H
#define HKNP_COMPOSITE_QUERY_AABB_VIEWER_H

#include <Physics/Physics/hknpTypes.h>
#include <Physics/Physics/Extensions/Viewers/hknpViewer.h>
#include <Physics/Physics/Dynamics/Modifier/hknpModifier.h>

class hkProcessFactory;


/// Displays the AABB of an queryAabb call on a composite shape
class hknpCompositeQueryAabbViewer : public hknpViewer, public hknpModifier
{
	public:

		static inline const char* HK_CALL getName() { return HKNP_COMPOSITE_QUERY_AABB_VIEWER_NAME; }

		/// Register this viewer with a factory.
		static void HK_CALL registerViewer( hkProcessFactory& factory );

		/// Create a hknpCompositeQueryAabbViewer.
		static hkProcess* HK_CALL create( const hkArray<hkProcessContext*>& contexts );

	public:

		HK_DECLARE_CLASS_ALLOCATOR( HK_MEMORY_CLASS_PHYSICS );

		//
		// hknpViewer implementation
		//

		virtual int getProcessTag() { return s_tag; }

		virtual void step( hkReal deltaTime );

		//
		// hknpModifier implementation
		//

		virtual int getEnabledFunctions();

		virtual int postCompositeQueryAabb(
			const hknpSimulationThreadContext& tl, const hknpModifierSharedData& sharedData,
			const hknpAabbQuery& aabbQuery, const hknpShapeQueryInfo& queryShapeInfo, const hknpShapeQueryInfo& targetShapeInfo,
			hknpShapeKey* keys, int numKeys, int maxNumKeys
			);

	protected:

		hknpCompositeQueryAabbViewer( const hkArray<hkProcessContext*>& contexts );

		static int s_tag;
};


#endif // HKNP_COMPOSITE_QUERY_AABB_VIEWER_H

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
