/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#ifndef HK_BASE_WIN32STREAMWRITER_H
#define HK_BASE_WIN32STREAMWRITER_H

#include <Common/Base/System/Io/Writer/hkStreamWriter.h>

	// This writes files in shared mode so they can be read
	// before the file handle has been closed (useful mainly for debugging)
class hkWin32StreamWriter : public hkStreamWriter
{
	public:
		typedef void* HANDLE;

		static hkWin32StreamWriter* open(const char* fname, int dwCreationDisposition=2 /*CREATE_ALWAYS*/ );

		hkWin32StreamWriter(HANDLE handle);
		virtual ~hkWin32StreamWriter();
		void close();

		virtual int write( const void* buf, int nbytes);
		virtual void flush();
		virtual hkBool isOk() const;

		virtual hkBool seekTellSupported() const { return true; }
		virtual hkResult seek( int offset, SeekWhence whence);
		virtual int tell() const;

	protected:

		HANDLE m_handle;
};

#endif //HK_BASE_WIN32STREAMWRITER_H

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
