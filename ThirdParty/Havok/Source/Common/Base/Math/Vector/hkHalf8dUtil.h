/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HK_HALF8dUTIL_H
#define HK_HALF8dUTIL_H

#include <Common/Base/Math/Vector/hkVector4d.h>


namespace hkHalf8Util
{

	/// Packs 2 vectors into a vector containing 8 halves  (v0.x, v0.y, v0.z, v0.w, v1.x, ...).
	template<hkMathRoundingMode R, hkMathIoMode I>
	static HK_FORCE_INLINE void pack( hkVector4dParameter v0, hkVector4dParameter v1, hkHalf* HK_RESTRICT packedHalf8 );

	/// Unpacks a vector containing 8 halves into two normal vectors.
	template<hkMathIoMode I>
	static HK_FORCE_INLINE void unpack( const hkHalf* HK_RESTRICT packedHalf8, hkVector4d* HK_RESTRICT v0, hkVector4d* HK_RESTRICT v1 );

	/// Unpacks the first 4 halves of a vector containing 8 halves.
	static HK_FORCE_INLINE void unpackFirst( hkVector4dParameter packedHalf8, hkVector4d& v0 );

	/// Unpacks the second 4 halves of a vector containing 8 halves.
	static HK_FORCE_INLINE void unpackSecond( hkVector4dParameter packedHalf8, hkVector4d& v1 );

	/// Packs 2 vectors into a vector containing 8 halves interleaved (v0.x, v1.x, v0.y, v1.y, ...).
	template<hkMathRoundingMode A>
	static HK_FORCE_INLINE void packInterleaved( hkVector4dParameter v0, hkVector4dParameter v1, hkVector4d& packedHalf8 );

	/// Unpacks a vector containing 8 halves into two normal vectors.
	static HK_FORCE_INLINE void unpackInterleaved( hkVector4dParameter packedHalf8, hkVector4d* HK_RESTRICT v0, hkVector4d* HK_RESTRICT v1 );

	/// Unpacks the first 4 halves of a vector containing 8 halves.
	static HK_FORCE_INLINE void unpackFirstInterleaved( hkVector4dParameter packedHalf8, hkVector4d& v0 );

	/// Unpacks the second 4 halves of a vector containing 8 halves.
	static HK_FORCE_INLINE void unpackSecondInterleaved( hkVector4dParameter packedHalf8, hkVector4d& v1 );
}


#include <Common/Base/Math/Vector/hkHalf8dUtil.inl>


#endif // HK_HALF8UTIL_H

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
