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

// Generated from 'Common/Serialize/UnitTest/Parser/HeaderParser.h'
#include <Common/Serialize/hkSerialize.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Serialize/UnitTest/Parser/HeaderParser.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClassEnum* HeaderParser2NestedEnumEnum;
extern const hkClassEnum* HeaderParserNestedEnumEnum;

//
// Enum HeaderParser::NestedEnum
//
static const hkInternalClassEnumItem HeaderParserNestedEnumEnumItems[] =
{
	{0, "VALUE_ZERO"},
};
static const hkInternalClassEnum HeaderParserEnums[] = {
	{"NestedEnum", HeaderParserNestedEnumEnumItems, 1, HK_NULL, 0 }
};
const hkClassEnum* HeaderParserNestedEnumEnum = reinterpret_cast<const hkClassEnum*>(&HeaderParserEnums[0]);

//
// Class HeaderParser
//
static const hkInternalClassMember HeaderParserClass_Members[] =
{
	{ "charBuf", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(HeaderParser,m_charBuf), HK_NULL },
	{ "vertices", HK_NULL, HK_NULL, hkClassMember::TYPE_SIMPLEARRAY, hkClassMember::TYPE_INT32, 0, 0, HK_OFFSET_OF(HeaderParser,m_vertices), HK_NULL },
	{ "noSaveVertices", HK_NULL, HK_NULL, hkClassMember::TYPE_SIMPLEARRAY, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(HeaderParser,m_noSaveVertices), HK_NULL },
	{ "enum", HK_NULL, HeaderParserNestedEnumEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(HeaderParser,m_enum), HK_NULL },
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(HeaderParser,m_name), HK_NULL }
};
namespace
{
	struct HeaderParser_DefaultStruct
	{
		int s_defaultOffsets[5];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		const char* /* hkStringPtr */ m_name;
	};
	HK_ALIGN( static const char default_string_HeaderParser_name[], 2 ) = "my name";
	const HeaderParser_DefaultStruct HeaderParser_Default =
	{
		{-1,-1,-1,-1,HK_OFFSET_OF(HeaderParser_DefaultStruct,m_name)},
		default_string_HeaderParser_name
	};
}
extern const hkClass HeaderParserClass;
const hkClass HeaderParserClass(
	"HeaderParser",
	HK_NULL, // parent
	sizeof(::HeaderParser),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(HeaderParserEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(HeaderParserClass_Members),
	HK_COUNT_OF(HeaderParserClass_Members),
	&HeaderParser_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL HeaderParser::staticClass()
{
	return HeaderParserClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<HeaderParser*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjectHeaderParser(void* p)
{
	static_cast<HeaderParser*>(p)->~HeaderParser();
}
extern const hkTypeInfo HeaderParserTypeInfo;
const hkTypeInfo HeaderParserTypeInfo(
	"HeaderParser",
	"!HeaderParser",
	HK_NULL,
	cleanupLoadedObjectHeaderParser,
	HK_NULL,
	sizeof(HeaderParser)
	);
#endif

//
// Enum HeaderParser2::NestedEnum
//
static const hkInternalClassEnumItem HeaderParser2NestedEnumEnumItems[] =
{
	{0, "VALUE_ZERO"},
};
static const hkInternalClassEnum HeaderParser2Enums[] = {
	{"NestedEnum", HeaderParser2NestedEnumEnumItems, 1, HK_NULL, 0 }
};
const hkClassEnum* HeaderParser2NestedEnumEnum = reinterpret_cast<const hkClassEnum*>(&HeaderParser2Enums[0]);

//
// Class HeaderParser2
//
static const hkInternalClassMember HeaderParser2Class_Members[] =
{
	{ "enum2", HK_NULL, HeaderParser2NestedEnumEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(HeaderParser2,m_enum2), HK_NULL }
};
extern const hkClass HeaderParser2Class;
const hkClass HeaderParser2Class(
	"HeaderParser2",
	HK_NULL, // parent
	sizeof(::HeaderParser2),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(HeaderParser2Enums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(HeaderParser2Class_Members),
	HK_COUNT_OF(HeaderParser2Class_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL HeaderParser2::staticClass()
{
	return HeaderParser2Class;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<HeaderParser2*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjectHeaderParser2(void* p)
{
	static_cast<HeaderParser2*>(p)->~HeaderParser2();
}
extern const hkTypeInfo HeaderParser2TypeInfo;
const hkTypeInfo HeaderParser2TypeInfo(
	"HeaderParser2",
	"!HeaderParser2",
	HK_NULL,
	cleanupLoadedObjectHeaderParser2,
	HK_NULL,
	sizeof(HeaderParser2)
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