/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Common/Base/hkBase.h>
#include <Common/Base/System/StackTracer/hkStackTracer.h>

hkStackTracer::hkStackTracer()
{
}

hkStackTracer::~hkStackTracer()
{
}

void hkStackTracer::dumpStackTrace( const hkUlong* trace, int numtrace, printFunc pfunc, void* context ) const
{
	for( int i = 0; i < numtrace; ++i )
	{
		char buf[256];
		hkString::snprintf(buf, sizeof(buf), "0x%x\n", trace[i] );
		pfunc(buf, context);
	}
}

int hkStackTracer::getStackTrace( hkUlong* trace, int maxtrace, int framesToSkip )
{
#if defined(HK_PLATFORM_ANDROID) && !defined(HK_DEBUG_SLOW)
	// On Dev with Android x86 this doesn't work due to compiler optimizations.
	return 0;

#else
	struct frame
	{
		frame* next;
		hkUlong retaddr;
	};

	frame* stackPtr;
	frame* framePtr;

#	if defined(HK_COMPILER_GCC) || defined(HK_COMPILER_CLANG)
	__asm__ __volatile__ (	"movl %%esp, %0\n"
							"movl %%ebp, %1"
						  :"=r"(stackPtr), "=r"(framePtr) 
						  :
						  :);
#   else
	__asm
	{
		mov stackPtr, esp
		mov framePtr, ebp
	}
#   endif
	int numFrames = 0;
	if( stackPtr && framePtr )
	{
		frame* current = framePtr;

		while ( framesToSkip-- > 0
			&& (stackPtr < current)
			&& (current != 0)
			&& (current->retaddr != 0) )
		{
			current = current->next;
		}

		while( (numFrames < maxtrace)
			&& (stackPtr < current)
			&& (current != 0)
			&& (current->retaddr != 0) )
		{
			trace[numFrames++] = current->retaddr;
			current = current->next;
		}
	}

	if( framesToSkip )
	{
		numFrames = hkMath::max2( numFrames-framesToSkip, 0 );
		for(int i = 0; i < numFrames; i++)
		{
			trace[i] = trace[i+framesToSkip];
		}
	}

	return numFrames;
#endif
}

void hkStackTracer::refreshSymbols()
{
}

void hkStackTracer::getModuleInfo( printFunc pfunc, void* context ) const
{
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
