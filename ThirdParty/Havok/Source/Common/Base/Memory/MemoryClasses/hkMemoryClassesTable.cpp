/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Common/Base/hkBase.h>
#include <Common/Base/Memory/MemoryClasses/hkMemoryClassesTable.h>
#include <Common/Base/Config/hkConfigMemoryStats.h>

#if HK_CONFIG_MEMORY_STATS == HK_CONFIG_MEMORY_STATS_ENABLED

//only if stats are on
#	define HK_MEMORY_CLASS_DEFINITION_START hkMemoryClassInfo hkMemoryClassesTable[] = {
#	define HK_MEMORY_CLASS_DEFINITION_END hkMemoryClassInfo(HK_NULL,0x0)};
#	define HK_MEMORY_CLASS(A,B) hkMemoryClassInfo("HK_MEMORY_CLASS_" #A, B),

#	include <Common/Base/Memory/MemoryClasses/hkMemoryClasses.h>

#	undef HK_MEMORY_CLASS_DEFINITION_START
#	undef HK_MEMORY_CLASS_DEFINITION_END
#	undef HK_MEMORY_CLASS

#endif //HK_CONFIG_MEMORY_STATS == HK_CONFIG_MEMORY_STATS_ENABLED

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
