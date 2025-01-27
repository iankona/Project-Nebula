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

// Generated from 'Physics2012/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.h'
#include <Physics2012/Collide/hkpCollide.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.h>
#include <Physics2012/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkVector4fClass;
extern const hkClass hkpNamedMeshMaterialClass;
extern const hkClass hkpStorageExtendedMeshShapeMaterialClass;
extern const hkClass hkpStorageExtendedMeshShapeMeshSubpartStorageClass;
extern const hkClass hkpStorageExtendedMeshShapeShapeSubpartStorageClass;

//
// Class hkpStorageExtendedMeshShape::Material
//
extern const hkClass hkpMeshMaterialClass;

static const hkInternalClassMember hkpStorageExtendedMeshShape_MaterialClass_Members[] =
{
	{ "restitution", HK_NULL, HK_NULL, hkClassMember::TYPE_HALF, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::Material,m_restitution), HK_NULL },
	{ "friction", HK_NULL, HK_NULL, hkClassMember::TYPE_HALF, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::Material,m_friction), HK_NULL },
	{ "userData", HK_NULL, HK_NULL, hkClassMember::TYPE_ULONG, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::Material,m_userData), HK_NULL }
};
const hkClass hkpStorageExtendedMeshShapeMaterialClass(
	"hkpStorageExtendedMeshShapeMaterial",
	&hkpMeshMaterialClass, // parent
	sizeof(hkpStorageExtendedMeshShape::Material),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpStorageExtendedMeshShape_MaterialClass_Members),
	HK_COUNT_OF(hkpStorageExtendedMeshShape_MaterialClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpStorageExtendedMeshShape::Material::staticClass()
{
	return hkpStorageExtendedMeshShapeMaterialClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpStorageExtendedMeshShape::Material*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShapeMaterial(void* p)
{
	static_cast<hkpStorageExtendedMeshShape::Material*>(p)->~Material();
}
extern const hkTypeInfo hkpStorageExtendedMeshShapeMaterialTypeInfo;
const hkTypeInfo hkpStorageExtendedMeshShapeMaterialTypeInfo(
	"hkpStorageExtendedMeshShapeMaterial",
	"!hkpStorageExtendedMeshShape::Material",
	HK_NULL,
	cleanupLoadedObjecthkpStorageExtendedMeshShapeMaterial,
	HK_NULL,
	sizeof(hkpStorageExtendedMeshShape::Material)
	);
#endif

//
// Class hkpStorageExtendedMeshShape::MeshSubpartStorage
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkpStorageExtendedMeshShape_MeshSubpartStorageClass_Members[] =
{
	{ "vertices", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_VECTOR4, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_vertices), HK_NULL },
	{ "indices8", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_indices8), HK_NULL },
	{ "indices16", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_indices16), HK_NULL },
	{ "indices32", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_indices32), HK_NULL },
	{ "materialIndices", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_materialIndices), HK_NULL },
	{ "materials", &hkpStorageExtendedMeshShapeMaterialClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_materials), HK_NULL },
	{ "namedMaterials", &hkpNamedMeshMaterialClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_namedMaterials), HK_NULL },
	{ "materialIndices16", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::MeshSubpartStorage,m_materialIndices16), HK_NULL }
};
const hkClass hkpStorageExtendedMeshShapeMeshSubpartStorageClass(
	"hkpStorageExtendedMeshShapeMeshSubpartStorage",
	&hkReferencedObjectClass, // parent
	sizeof(hkpStorageExtendedMeshShape::MeshSubpartStorage),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpStorageExtendedMeshShape_MeshSubpartStorageClass_Members),
	HK_COUNT_OF(hkpStorageExtendedMeshShape_MeshSubpartStorageClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(3) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpStorageExtendedMeshShape::MeshSubpartStorage::staticClass()
{
	return hkpStorageExtendedMeshShapeMeshSubpartStorageClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpStorageExtendedMeshShape::MeshSubpartStorage*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpStorageExtendedMeshShape::MeshSubpartStorage(f);
}
static void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage(void* p)
{
	static_cast<hkpStorageExtendedMeshShape::MeshSubpartStorage*>(p)->~MeshSubpartStorage();
}
static const void* HK_CALL getVtablehkpStorageExtendedMeshShapeMeshSubpartStorage()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpStorageExtendedMeshShape::MeshSubpartStorage).hash_code()));
	#else
	return ((const void*)(typeid(hkpStorageExtendedMeshShape::MeshSubpartStorage).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpStorageExtendedMeshShape::MeshSubpartStorage)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpStorageExtendedMeshShape::MeshSubpartStorage(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpStorageExtendedMeshShapeMeshSubpartStorageTypeInfo;
const hkTypeInfo hkpStorageExtendedMeshShapeMeshSubpartStorageTypeInfo(
	"hkpStorageExtendedMeshShapeMeshSubpartStorage",
	"!hkpStorageExtendedMeshShape::MeshSubpartStorage",
	finishLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage,
	cleanupLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage,
	getVtablehkpStorageExtendedMeshShapeMeshSubpartStorage(),
	sizeof(hkpStorageExtendedMeshShape::MeshSubpartStorage)
	);
#endif

//
// Class hkpStorageExtendedMeshShape::ShapeSubpartStorage
//

static const hkInternalClassMember hkpStorageExtendedMeshShape_ShapeSubpartStorageClass_Members[] =
{
	{ "materialIndices", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::ShapeSubpartStorage,m_materialIndices), HK_NULL },
	{ "materials", &hkpStorageExtendedMeshShapeMaterialClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::ShapeSubpartStorage,m_materials), HK_NULL },
	{ "materialIndices16", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape::ShapeSubpartStorage,m_materialIndices16), HK_NULL }
};
const hkClass hkpStorageExtendedMeshShapeShapeSubpartStorageClass(
	"hkpStorageExtendedMeshShapeShapeSubpartStorage",
	&hkReferencedObjectClass, // parent
	sizeof(hkpStorageExtendedMeshShape::ShapeSubpartStorage),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpStorageExtendedMeshShape_ShapeSubpartStorageClass_Members),
	HK_COUNT_OF(hkpStorageExtendedMeshShape_ShapeSubpartStorageClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(2) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpStorageExtendedMeshShape::ShapeSubpartStorage::staticClass()
{
	return hkpStorageExtendedMeshShapeShapeSubpartStorageClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpStorageExtendedMeshShape::ShapeSubpartStorage*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpStorageExtendedMeshShape::ShapeSubpartStorage(f);
}
static void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage(void* p)
{
	static_cast<hkpStorageExtendedMeshShape::ShapeSubpartStorage*>(p)->~ShapeSubpartStorage();
}
static const void* HK_CALL getVtablehkpStorageExtendedMeshShapeShapeSubpartStorage()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpStorageExtendedMeshShape::ShapeSubpartStorage).hash_code()));
	#else
	return ((const void*)(typeid(hkpStorageExtendedMeshShape::ShapeSubpartStorage).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpStorageExtendedMeshShape::ShapeSubpartStorage)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpStorageExtendedMeshShape::ShapeSubpartStorage(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpStorageExtendedMeshShapeShapeSubpartStorageTypeInfo;
const hkTypeInfo hkpStorageExtendedMeshShapeShapeSubpartStorageTypeInfo(
	"hkpStorageExtendedMeshShapeShapeSubpartStorage",
	"!hkpStorageExtendedMeshShape::ShapeSubpartStorage",
	finishLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage,
	cleanupLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage,
	getVtablehkpStorageExtendedMeshShapeShapeSubpartStorage(),
	sizeof(hkpStorageExtendedMeshShape::ShapeSubpartStorage)
	);
#endif

//
// Class hkpStorageExtendedMeshShape
//
extern const hkClass hkpExtendedMeshShapeClass;

// hkpStorageExtendedMeshShape attributes
const hkInternalClassMember hkpStorageExtendedMeshShape::Members[] =
{
	{ "meshstorage", &hkpStorageExtendedMeshShapeMeshSubpartStorageClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_POINTER, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape,m_meshstorage), HK_NULL },
	{ "shapestorage", &hkpStorageExtendedMeshShapeShapeSubpartStorageClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_POINTER, 0, 0, HK_OFFSET_OF(hkpStorageExtendedMeshShape,m_shapestorage), HK_NULL }
};
extern const hkClass hkpStorageExtendedMeshShapeClass;
const hkClass hkpStorageExtendedMeshShapeClass(
	"hkpStorageExtendedMeshShape",
	&hkpExtendedMeshShapeClass, // parent
	sizeof(::hkpStorageExtendedMeshShape),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpStorageExtendedMeshShape::Members),
	HK_COUNT_OF(hkpStorageExtendedMeshShape::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpStorageExtendedMeshShape::staticClass()
{
	return hkpStorageExtendedMeshShapeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpStorageExtendedMeshShape*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpStorageExtendedMeshShape(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpStorageExtendedMeshShape(f);
}
static void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShape(void* p)
{
	static_cast<hkpStorageExtendedMeshShape*>(p)->~hkpStorageExtendedMeshShape();
}
static const void* HK_CALL getVtablehkpStorageExtendedMeshShape()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpStorageExtendedMeshShape).hash_code()));
	#else
	return ((const void*)(typeid(hkpStorageExtendedMeshShape).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpStorageExtendedMeshShape)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpStorageExtendedMeshShape(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpStorageExtendedMeshShapeTypeInfo;
const hkTypeInfo hkpStorageExtendedMeshShapeTypeInfo(
	"hkpStorageExtendedMeshShape",
	"!hkpStorageExtendedMeshShape",
	finishLoadedObjecthkpStorageExtendedMeshShape,
	cleanupLoadedObjecthkpStorageExtendedMeshShape,
	getVtablehkpStorageExtendedMeshShape(),
	sizeof(hkpStorageExtendedMeshShape)
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
