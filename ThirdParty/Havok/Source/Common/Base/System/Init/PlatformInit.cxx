/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

// Platform specific initialization required before initializing Havok's memory system.
// This file is meant to be used in stand-alone demos as the demo framework's platform 
// initialization functions sometimes depend on the graphics system (e.g Wii, see 
// PlatformInitWii.cpp and hkgSystemGCN.cpp)

#include <Common/Base/System/Io/FileSystem/Union/hkUnionFileSystem.h>

#if   defined(HK_PLATFORM_ANDROID)
	#include <Common/Base/System/Init/PlatformInitAndroid.cxx>
#elif defined(HK_PLATFORM_CTR)
	#include <Common/Base/System/Init/PlatformInitCTR.cxx>
#elif defined(HK_PLATFORM_IOS)
	#include <Common/Base/System/Init/PlatformInitIOS.cxx>
#elif defined(HK_PLATFORM_MAC386)
	#include <Common/Base/System/Init/PlatformInitMac.cxx>
#elif defined(HK_PLATFORM_PS3)
	#include <Common/Base/System/Init/PlatformInitPs3.cxx>
#elif defined(HK_PLATFORM_PS4)
	#include <Common/Base/System/Init/PlatformInitPs4.cxx>
#elif defined(HK_PLATFORM_PSVITA)
	#include <Common/Base/System/Init/PlatformInitPsVita.cxx>
#elif defined(HK_PLATFORM_RVL)
	#include <Common/Base/System/Init/PlatformInitWii.cxx>
#elif defined(HK_PLATFORM_TIZEN)
	#include <Common/Base/System/Init/PlatformInitTizen.cxx>
#elif defined(HK_PLATFORM_WIIU)
	#include <Common/Base/System/Init/PlatformInitWiiU.cxx>
#elif defined(HK_PLATFORM_WINRT)
	#include <Common/Base/System/Init/PlatformInitWinRT.cxx>
#elif defined(HK_PLATFORM_XBOX360)
	#include <Common/Base/System/Init/PlatformInitXbox360.cxx>
#else
	// Perform no setup by default
	inline void PlatformInit() {}
	inline void PlatformAddDefaultMounts(hkFileSystem* basefs, hkUnionFileSystem* ufs)
	{
		ufs->mount(basefs, "", "", true);
	}
#endif

void PlatformFileSystemInit()
{
	hkFileSystem* basefs =  &hkFileSystem::getInstance();
	hkUnionFileSystem* ufs = new hkUnionFileSystem();
	PlatformAddDefaultMounts(basefs, ufs);
	hkFileSystem::replaceInstance(ufs);
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
