/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Common/Base/hkBase.h>
#include <Common/Base/Container/PointerMap/hkMap.h>
#include <Common/Base/Container/PointerMap/hkMap.cxx>

#if (!defined(_MSC_VER) || (_MSC_VER != 1300)) && !defined(HK_COMPILER_GCC) // Proceeding template instantiation is not required and not liked by .Net 7.0
	template < typename KEY, typename VAL, typename OPS > class hkMapBase<KEY,VAL,OPS>::MustEndWithSemiColon {};
	template < typename KEY, typename VAL, typename OPS, typename ALLOC > class hkMap<KEY,VAL,OPS,ALLOC>::MustEndWithSemiColon {};
#endif

template class hkMapBase<hkUlong,hkUlong>;
template class hkMap<hkUlong,hkUlong>;
#if HK_POINTER_SIZE == 4
	template class hkMapBase<hkUint64,hkUint64>;
	template class hkMap<hkUint64,hkUint64>;
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
