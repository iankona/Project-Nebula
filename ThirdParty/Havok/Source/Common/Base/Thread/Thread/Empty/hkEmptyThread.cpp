/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Common/Base/hkBase.h>
#include <Common/Base/Thread/Thread/hkThread.h>

hkThread::hkThread()
{
	HK_ASSERT2(0xf9178fa1, 0, "hkThread being used in a single threaded environment. It will have no effect.");
}

hkThread::~hkThread()
{
}

void hkThread::joinThread()
{
}

hkThread::Status hkThread::getStatus()
{
	return hkThread::THREAD_RUNNING;
}

hkResult hkThread::startThread( hkThread::StartFunction func, void* arg, const char* name, int stackSize )
{
	return HK_SUCCESS;
}

hkUint64 hkThread::getMyThreadId()
{
	return 1;
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
