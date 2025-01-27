/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Common/Base/hkBase.h>

#include <Common/Base/UnitTest/hkUnitTest.h>

namespace hkMath
{
#if defined(HK_COMPILER_MSVC) // msvc miscompiles this function
    template <typename T>
    inline int isAliased(const T& t, const void* p)
    {
        return 0;
    }
#else
    template <typename T>
    inline int isAliased(const T& t, const void* p)
    {
        return ( hkUlong(p) - hkUlong(&t) ) < sizeof(T);
    }
#endif
}

#if defined(HK_COMPILER_MSVC)
namespace {
#endif
// This was removed from hkMath as vc7 miscompiles it with optimizations
template <typename T>
inline bool hkMath_isAliased(const T& t, const void* p)
{
    return ( hkUlong(p) - hkUlong(&t) ) < sizeof(T);
}


struct TestAliasing // force this variable layout
{
    hkVector4 v0;
    hkTransform t;
    hkVector4 v1;
} s;

static void math_misc()
{
    {
        HK_TEST(hkDouble64(HK_REAL_EPSILON) < 2e-7);
        HK_TEST(hkDouble64(HK_REAL_MAX) > 3.4e38);
        HK_TEST(hkDouble64(HK_REAL_MIN) < 1.2e-38);
#if defined(HK_REAL_IS_DOUBLE)
		HK_TEST(hkMath::equal(HK_REAL_PI, 3.1415926535897932384626433832795));
#else
		HK_TEST(hkMath::equal(HK_REAL_PI, 3.14159265359f));
#endif
	}

    {
        HK_TEST(hkMath::equal(hkMath::min2(234e4f, 123e-1f), 123e-1f));
        HK_TEST(hkMath::equal(hkMath::min2(234e-4f, 123e+1f), 234e-4f));
        HK_TEST(hkMath::equal(hkMath::min2(-1.0f, +1.0f), -1.0f));
        HK_TEST(hkMath::equal(hkMath::min2(+1.0f, -1.0f), -1.0f));

        HK_TEST(hkMath::equal(hkMath::max2(567e-30f, 2.0f), 2.0f));
        HK_TEST(hkMath::equal(hkMath::max2(123e20f, 221.0e2f), 123e20f));
        HK_TEST(hkMath::equal(hkMath::max2(-1.0f, +1.0f), 1.0f));
        HK_TEST(hkMath::equal(hkMath::max2(+1.0f, -1.0f), 1.0f));
    }

    {
        HK_TEST( hkMath_isAliased(s.t,&s.v0) == false);
        HK_TEST( hkMath_isAliased(s.t,&s.v1) == false);
        HK_TEST( hkMath_isAliased(s.v0,&s.v1) == false);

        HK_TEST( hkMath_isAliased(s.v0,&s.v0) );
        HK_TEST( hkMath_isAliased(s.v1,&s.v1) );
        HK_TEST( hkMath_isAliased(s.t, &s.t.getColumn(0)) );
        HK_TEST( hkMath_isAliased(s.t, &s.t.getColumn(1)) );
        HK_TEST( hkMath_isAliased(s.t, &s.t.getColumn(2)) );
        HK_TEST( hkMath_isAliased(s.t, &s.t.getColumn(3)) );
    }
}


int misc_main()
{
//  {
//      hkQuadRealUnion q;
//      q.r[0] = 1.4f;
//      _vrinit(q.q, vu0_field_X);
//      foo();
//  }

    math_misc();

    return 0;
}

#if defined(HK_COMPILER_MSVC)
} // anonymous namespace
#endif

#if defined(HK_COMPILER_MWERKS)
#   pragma fullpath_file on
#endif
HK_TEST_REGISTER(misc_main, "Fast", "Common/Test/UnitTest/Base/", "UnitTest/Math/Linear/misc.cpp"     );

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
