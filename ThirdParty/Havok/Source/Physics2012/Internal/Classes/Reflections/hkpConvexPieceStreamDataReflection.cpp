/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

//HK_REFLECTION_PARSER_EXCLUDE_FILE

// Autogenerated by generateReflections.py (reflectedClasses.py)
// Changes will not be lost unless:
// - The workspace is re-generated using build.py
// - The corresponding reflection database (reflection.db) is deleted
// - The --force-output or --force-rebuild option is added to the pre-build generateReflection.py execution

// Generated from 'Physics2012/Internal/Collide/ConvexPieceMesh/hkpConvexPieceStreamData.h'
#include <Physics2012/Internal/hkpInternal.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Internal/Collide/ConvexPieceMesh/hkpConvexPieceStreamData.h>
#define True true
#define False false


//
// Class hkpConvexPieceStreamData
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkpConvexPieceStreamDataClass_Members[] =
{
	{ "convexPieceStream", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkpConvexPieceStreamData,m_convexPieceStream), HK_NULL },
	{ "convexPieceOffsets", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkpConvexPieceStreamData,m_convexPieceOffsets), HK_NULL },
	{ "convexPieceSingleTriangles", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkpConvexPieceStreamData,m_convexPieceSingleTriangles), HK_NULL }
};
extern const hkClass hkpConvexPieceStreamDataClass;
const hkClass hkpConvexPieceStreamDataClass(
	"hkpConvexPieceStreamData",
	&hkReferencedObjectClass, // parent
	sizeof(::hkpConvexPieceStreamData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpConvexPieceStreamDataClass_Members),
	HK_COUNT_OF(hkpConvexPieceStreamDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpConvexPieceStreamData::staticClass()
{
	return hkpConvexPieceStreamDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpConvexPieceStreamData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpConvexPieceStreamData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpConvexPieceStreamData(f);
}
static void HK_CALL cleanupLoadedObjecthkpConvexPieceStreamData(void* p)
{
	static_cast<hkpConvexPieceStreamData*>(p)->~hkpConvexPieceStreamData();
}
static const void* HK_CALL getVtablehkpConvexPieceStreamData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpConvexPieceStreamData).hash_code()));
	#else
	return ((const void*)(typeid(hkpConvexPieceStreamData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpConvexPieceStreamData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpConvexPieceStreamData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpConvexPieceStreamDataTypeInfo;
const hkTypeInfo hkpConvexPieceStreamDataTypeInfo(
	"hkpConvexPieceStreamData",
	"!hkpConvexPieceStreamData",
	finishLoadedObjecthkpConvexPieceStreamData,
	cleanupLoadedObjecthkpConvexPieceStreamData,
	getVtablehkpConvexPieceStreamData(),
	sizeof(hkpConvexPieceStreamData)
	);
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
