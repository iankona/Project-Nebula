/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HK_COMPAT_HAVOK_ALL_CLASSES_H
#define HK_COMPAT_HAVOK_ALL_CLASSES_H

#include <Common/Compat/Deprecated/Version/hkVersionRegistry.h>
#include <Common/Serialize/Util/hkStaticClassNameRegistry.h>
#include <Common/Compat/hkHavokVersions.h>

#define HK_SERIALIZE_MIN_COMPATIBLE_VERSION_INTERNAL_VALUE HK_HAVOK_VERSION_300

#define HK_HAVOK_CLASSES_VERSION(VER) \
	namespace hkHavok##VER##Classes \
	{ \
		extern const char VersionString[]; \
		extern const int ClassVersion; \
		extern const hkStaticClassNameRegistry hkHavokDefaultClassRegistry; \
	}
#include <Common/Compat/Deprecated/Compat/hkHavokVersionClasses.h>
#undef HK_HAVOK_CLASSES_VERSION
#undef HK_SERIALIZE_MIN_COMPATIBLE_VERSION_INTERNAL_VALUE

#endif // HK_COMPAT_HAVOK_ALL_CLASSES_H

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
