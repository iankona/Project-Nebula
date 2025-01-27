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

// Generated from 'Common/Base/Container/String/hkStringObject.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Base/Container/String/hkStringObject.h>
#define True true
#define False false


//
// Class hkStringObject
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkStringObjectClass_Members[] =
{
	{ "string", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStringObject,m_string), HK_NULL }
};
extern const hkClass hkStringObjectClass;
const hkClass hkStringObjectClass(
	"hkStringObject",
	&hkReferencedObjectClass, // parent
	sizeof(::hkStringObject),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkStringObjectClass_Members),
	HK_COUNT_OF(hkStringObjectClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkStringObject::staticClass()
{
	return hkStringObjectClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkStringObject*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkStringObject(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkStringObject(f);
}
static void HK_CALL cleanupLoadedObjecthkStringObject(void* p)
{
	static_cast<hkStringObject*>(p)->~hkStringObject();
}
static const void* HK_CALL getVtablehkStringObject()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkStringObject).hash_code()));
	#else
	return ((const void*)(typeid(hkStringObject).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkStringObject)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkStringObject(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkStringObjectTypeInfo;
const hkTypeInfo hkStringObjectTypeInfo(
	"hkStringObject",
	"!hkStringObject",
	finishLoadedObjecthkStringObject,
	cleanupLoadedObjecthkStringObject,
	getVtablehkStringObject(),
	sizeof(hkStringObject)
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
