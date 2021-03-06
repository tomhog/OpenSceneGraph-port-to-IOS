// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osgText/String>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgText::String::Encoding)
	I_DeclaringFile("osgText/String");
	I_EnumLabel(osgText::String::ENCODING_UNDEFINED);
	I_EnumLabel(osgText::String::ENCODING_ASCII);
	I_EnumLabel(osgText::String::ENCODING_UTF8);
	I_EnumLabel(osgText::String::ENCODING_UTF16);
	I_EnumLabel(osgText::String::ENCODING_UTF16_BE);
	I_EnumLabel(osgText::String::ENCODING_UTF16_LE);
	I_EnumLabel(osgText::String::ENCODING_UTF32);
	I_EnumLabel(osgText::String::ENCODING_UTF32_BE);
	I_EnumLabel(osgText::String::ENCODING_UTF32_LE);
	I_EnumLabel(osgText::String::ENCODING_SIGNATURE);
END_REFLECTOR

TYPE_NAME_ALIAS(osgText::VectorUInt, osgText::String::vector_type)

BEGIN_OBJECT_REFLECTOR(osgText::String)
	I_DeclaringFile("osgText/String");
	I_BaseType(osgText::VectorUInt);
	I_Constructor0(____String,
	               "",
	               "");
	I_Constructor1(IN, const osgText::String &, str,
	               Properties::NON_EXPLICIT,
	               ____String__C5_String_R1,
	               "",
	               "");
	I_Constructor1(IN, const std::string &, str,
	               Properties::NON_EXPLICIT,
	               ____String__C5_std_string_R1,
	               "",
	               "");
	I_Constructor1(IN, const wchar_t *, text,
	               Properties::NON_EXPLICIT,
	               ____String__C5_wchar_t_P1,
	               "",
	               "");
	I_Constructor2(IN, const std::string &, text, IN, osgText::String::Encoding, encoding,
	               ____String__C5_std_string_R1__Encoding,
	               "",
	               "");
	I_Method1(void, set, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, set, IN, const wchar_t *, text,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_wchar_t_P1,
	          "Set the text using a wchar_t string, which is converted to an internal TextString. ",
	          "");
	I_Method2(void, set, IN, const std::string &, text, IN, osgText::String::Encoding, encoding,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_std_string_R1__Encoding,
	          "Set the text using a Unicode encoded std::string, which is converted to an internal TextString. ",
	          "The encoding parameter specifies which Unicode encoding is used in the std::string. ");
	I_Method0(std::string, createUTF8EncodedString,
	          Properties::NON_VIRTUAL,
	          __std_string__createUTF8EncodedString,
	          "returns a UTF8 encoded version of this osgText::String. ",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgText::VectorUInt)
	I_DeclaringFile("osgText/String");
	I_BaseType(std::vector<unsigned int>);
	I_Constructor0(____VectorUInt,
	               "",
	               "");
	I_Constructor1(IN, const osgText::VectorUInt &, copy,
	               Properties::NON_EXPLICIT,
	               ____VectorUInt__C5_VectorUInt_R1,
	               "",
	               "");
	I_Constructor2(IN, unsigned int *, beg, IN, unsigned int *, end,
	               ____VectorUInt__unsigned_int_P1__unsigned_int_P1,
	               "",
	               "");
	I_Constructor1(IN, unsigned int, n,
	               Properties::EXPLICIT,
	               ____VectorUInt__unsigned_int,
	               "",
	               "");
END_REFLECTOR

