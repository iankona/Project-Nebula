/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Common/Base/hkBase.h>
#include <Common/Base/System/Stopwatch/hkStopwatch.h>
#include <Common/Base/System/Stopwatch/hkSystemClock.h>

hkReal HK_CALL hkStopwatch::divide64(hkUint64 a, hkUint64 b)
{
	return hkReal( double(hkInt64(a)) / double(hkInt64(b)) );
}

hkUint64 HK_CALL hkStopwatch::getTickCounter()
{
	return hkSystemClock::getTickCounter();
}

hkUint64 HK_CALL hkStopwatch::getTicksPerSecond()
{
	return hkSystemClock::getTicksPerSecond();
}

hkReal HK_CALL hkStopwatch::secondsFromTicks(hkUint64 ticks)
{
	return divide64( ticks, hkSystemClock::getTicksPerSecond() );
}

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
