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

// Generated from 'Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.h'
#include <Common/GeometryUtilities/hkGeometryUtilities.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkMeshShapeClass;
extern const hkClass hkSkinnedMeshShapeBoneSectionClass;
extern const hkClass hkSkinnedMeshShapeBoneSetClass;
extern const hkClass hkSkinnedMeshShapePartClass;

//
// Class hkSkinnedMeshShape::BoneSet
//
static const hkInternalClassMember hkSkinnedMeshShape_BoneSetClass_Members[] =
{
	{ "boneBufferOffset", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::BoneSet,m_boneBufferOffset), HK_NULL },
	{ "numBones", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::BoneSet,m_numBones), HK_NULL }
};
const hkClass hkSkinnedMeshShapeBoneSetClass(
	"hkSkinnedMeshShapeBoneSet",
	HK_NULL, // parent
	sizeof(hkSkinnedMeshShape::BoneSet),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkSkinnedMeshShape_BoneSetClass_Members),
	HK_COUNT_OF(hkSkinnedMeshShape_BoneSetClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkSkinnedMeshShape::BoneSet::staticClass()
{
	return hkSkinnedMeshShapeBoneSetClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkSkinnedMeshShape::BoneSet*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkSkinnedMeshShapeBoneSet(void* p)
{
	static_cast<hkSkinnedMeshShape::BoneSet*>(p)->~BoneSet();
}
extern const hkTypeInfo hkSkinnedMeshShapeBoneSetTypeInfo;
const hkTypeInfo hkSkinnedMeshShapeBoneSetTypeInfo(
	"hkSkinnedMeshShapeBoneSet",
	"!hkSkinnedMeshShape::BoneSet",
	HK_NULL,
	cleanupLoadedObjecthkSkinnedMeshShapeBoneSet,
	HK_NULL,
	sizeof(hkSkinnedMeshShape::BoneSet)
	);
#endif

//
// Class hkSkinnedMeshShape::BoneSection
//
extern const hkClass hkHandleunsignedshort65535hkSkinnedMeshShapeBoneSetIdDiscriminantClass;

static const hkInternalClassMember hkSkinnedMeshShape_BoneSectionClass_Members[] =
{
	{ "meshBuffer", &hkMeshShapeClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::BoneSection,m_meshBuffer), HK_NULL },
	{ "startBoneSetId", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::BoneSection,m_startBoneSetId), HK_NULL },
	{ "numBoneSets", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::BoneSection,m_numBoneSets), HK_NULL }
};
const hkClass hkSkinnedMeshShapeBoneSectionClass(
	"hkSkinnedMeshShapeBoneSection",
	HK_NULL, // parent
	sizeof(hkSkinnedMeshShape::BoneSection),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkSkinnedMeshShape_BoneSectionClass_Members),
	HK_COUNT_OF(hkSkinnedMeshShape_BoneSectionClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkSkinnedMeshShape::BoneSection::staticClass()
{
	return hkSkinnedMeshShapeBoneSectionClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkSkinnedMeshShape::BoneSection*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkSkinnedMeshShapeBoneSection(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkSkinnedMeshShape::BoneSection(f);
}
static void HK_CALL cleanupLoadedObjecthkSkinnedMeshShapeBoneSection(void* p)
{
	static_cast<hkSkinnedMeshShape::BoneSection*>(p)->~BoneSection();
}
extern const hkTypeInfo hkSkinnedMeshShapeBoneSectionTypeInfo;
const hkTypeInfo hkSkinnedMeshShapeBoneSectionTypeInfo(
	"hkSkinnedMeshShapeBoneSection",
	"!hkSkinnedMeshShape::BoneSection",
	finishLoadedObjecthkSkinnedMeshShapeBoneSection,
	cleanupLoadedObjecthkSkinnedMeshShapeBoneSection,
	HK_NULL,
	sizeof(hkSkinnedMeshShape::BoneSection)
	);
#endif

//
// Class hkSkinnedMeshShape::Part
//

static const hkInternalClassMember hkSkinnedMeshShape_PartClass_Members[] =
{
	{ "startVertex", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::Part,m_startVertex), HK_NULL },
	{ "numVertices", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::Part,m_numVertices), HK_NULL },
	{ "startIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::Part,m_startIndex), HK_NULL },
	{ "numIndices", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::Part,m_numIndices), HK_NULL },
	{ "boneSetId", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::Part,m_boneSetId), HK_NULL },
	{ "meshSectionIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::Part,m_meshSectionIndex), HK_NULL },
	{ "boundingSphere", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedMeshShape::Part,m_boundingSphere), HK_NULL }
};
const hkClass hkSkinnedMeshShapePartClass(
	"hkSkinnedMeshShapePart",
	HK_NULL, // parent
	sizeof(hkSkinnedMeshShape::Part),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkSkinnedMeshShape_PartClass_Members),
	HK_COUNT_OF(hkSkinnedMeshShape_PartClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkSkinnedMeshShape::Part::staticClass()
{
	return hkSkinnedMeshShapePartClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkSkinnedMeshShape::Part*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkSkinnedMeshShapePart(void* p)
{
	static_cast<hkSkinnedMeshShape::Part*>(p)->~Part();
}
extern const hkTypeInfo hkSkinnedMeshShapePartTypeInfo;
const hkTypeInfo hkSkinnedMeshShapePartTypeInfo(
	"hkSkinnedMeshShapePart",
	"!hkSkinnedMeshShape::Part",
	HK_NULL,
	cleanupLoadedObjecthkSkinnedMeshShapePart,
	HK_NULL,
	sizeof(hkSkinnedMeshShape::Part)
	);
#endif

//
// Class hkSkinnedMeshShape
//
extern const hkClass hkReferencedObjectClass;

extern const hkClass hkSkinnedMeshShapeClass;
const hkClass hkSkinnedMeshShapeClass(
	"hkSkinnedMeshShape",
	&hkReferencedObjectClass, // parent
	sizeof(::hkSkinnedMeshShape),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	HK_NULL,
	0,
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkSkinnedMeshShape::staticClass()
{
	return hkSkinnedMeshShapeClass;
}
#endif

//
// Class hkStorageSkinnedMeshShape
//

const hkInternalClassMember hkStorageSkinnedMeshShape::Members[] =
{
	{ "bonesBuffer", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT16, 0, 0, HK_OFFSET_OF(hkStorageSkinnedMeshShape,m_bonesBuffer), HK_NULL },
	{ "boneSets", &hkSkinnedMeshShapeBoneSetClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkStorageSkinnedMeshShape,m_boneSets), HK_NULL },
	{ "boneSections", &hkSkinnedMeshShapeBoneSectionClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkStorageSkinnedMeshShape,m_boneSections), HK_NULL },
	{ "parts", &hkSkinnedMeshShapePartClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkStorageSkinnedMeshShape,m_parts), HK_NULL },
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStorageSkinnedMeshShape,m_name), HK_NULL }
};
extern const hkClass hkStorageSkinnedMeshShapeClass;
const hkClass hkStorageSkinnedMeshShapeClass(
	"hkStorageSkinnedMeshShape",
	&hkSkinnedMeshShapeClass, // parent
	sizeof(::hkStorageSkinnedMeshShape),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkStorageSkinnedMeshShape::Members),
	HK_COUNT_OF(hkStorageSkinnedMeshShape::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkStorageSkinnedMeshShape::staticClass()
{
	return hkStorageSkinnedMeshShapeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkStorageSkinnedMeshShape*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkStorageSkinnedMeshShape(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkStorageSkinnedMeshShape(f);
}
static void HK_CALL cleanupLoadedObjecthkStorageSkinnedMeshShape(void* p)
{
	static_cast<hkStorageSkinnedMeshShape*>(p)->~hkStorageSkinnedMeshShape();
}
static const void* HK_CALL getVtablehkStorageSkinnedMeshShape()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkStorageSkinnedMeshShape).hash_code()));
	#else
	return ((const void*)(typeid(hkStorageSkinnedMeshShape).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkStorageSkinnedMeshShape)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkStorageSkinnedMeshShape(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkStorageSkinnedMeshShapeTypeInfo;
const hkTypeInfo hkStorageSkinnedMeshShapeTypeInfo(
	"hkStorageSkinnedMeshShape",
	"!hkStorageSkinnedMeshShape",
	finishLoadedObjecthkStorageSkinnedMeshShape,
	cleanupLoadedObjecthkStorageSkinnedMeshShape,
	getVtablehkStorageSkinnedMeshShape(),
	sizeof(hkStorageSkinnedMeshShape)
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