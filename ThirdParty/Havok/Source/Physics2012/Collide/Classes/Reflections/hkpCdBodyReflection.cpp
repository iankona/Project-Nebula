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

// Generated from 'Physics2012/Collide/Agent/Collidable/hkpCdBody.h'
#include <Physics2012/Collide/hkpCollide.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Collide/Agent/Collidable/hkpCdBody.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpCdBodyClass;
extern const hkClass hkpShapeClass;

//
// Class hkpCdBody
//
const hkInternalClassMember hkpCdBody::Members[] =
{
	{ "shape", &hkpShapeClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpCdBody,m_shape), HK_NULL },
	{ "shapeKey", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCdBody,m_shapeKey), HK_NULL },
	{ "motion", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpCdBody,m_motion), HK_NULL },
	{ "parent", &hkpCdBodyClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpCdBody,m_parent), HK_NULL }
};
const hkClass hkpCdBodyClass(
	"hkpCdBody",
	HK_NULL, // parent
	sizeof(::hkpCdBody),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpCdBody::Members),
	HK_COUNT_OF(hkpCdBody::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCdBody::staticClass()
{
	return hkpCdBodyClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpCdBody*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkpCdBody(void* p)
{
	static_cast<hkpCdBody*>(p)->~hkpCdBody();
}
extern const hkTypeInfo hkpCdBodyTypeInfo;
const hkTypeInfo hkpCdBodyTypeInfo(
	"hkpCdBody",
	"!hkpCdBody",
	HK_NULL,
	cleanupLoadedObjecthkpCdBody,
	HK_NULL,
	sizeof(hkpCdBody)
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
