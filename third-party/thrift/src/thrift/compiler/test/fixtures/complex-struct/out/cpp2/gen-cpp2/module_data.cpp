/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/complex-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::name = "MyStructFloatFieldThrowExp";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::fields_names = { {
  "myLongField"sv,
  "MyByteField"sv,
  "myStringField"sv,
  "myFloatField"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::fields_ids = { {
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::fields_types = { {
  TType::T_I64,
  TType::T_BYTE,
  TType::T_STRING,
  TType::T_FLOAT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::storage_names = { {
  "__fbthrift_field_myLongField"sv,
  "__fbthrift_field_MyByteField"sv,
  "__fbthrift_field_myStringField"sv,
  "__fbthrift_field_myFloatField"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::isset_indexes = { {
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::name = "MyStructMapFloatThrowExp";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::fields_names = { {
  "myLongField"sv,
  "mapListOfFloats"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::fields_ids = { {
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::fields_types = { {
  TType::T_I64,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::storage_names = { {
  "__fbthrift_field_myLongField"sv,
  "__fbthrift_field_mapListOfFloats"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::isset_indexes = { {
  0,
  1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyStruct>::name = "MyStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 28> TStructDataStorage<::cpp2::MyStruct>::fields_names = { {
  "MyIntField"sv,
  "MyStringField"sv,
  "MyDataField"sv,
  "myEnum"sv,
  "MyBoolField"sv,
  "MyByteField"sv,
  "MyShortField"sv,
  "MyLongField"sv,
  "MyDoubleField"sv,
  "lDouble"sv,
  "lShort"sv,
  "lInteger"sv,
  "lLong"sv,
  "lString"sv,
  "lBool"sv,
  "lByte"sv,
  "mShortString"sv,
  "mIntegerString"sv,
  "mStringMyStruct"sv,
  "mStringBool"sv,
  "mIntegerInteger"sv,
  "mIntegerBool"sv,
  "sShort"sv,
  "sMyStruct"sv,
  "sLong"sv,
  "sString"sv,
  "sByte"sv,
  "mListList"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 28> TStructDataStorage<::cpp2::MyStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 28> TStructDataStorage<::cpp2::MyStruct>::fields_types = { {
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_I32,
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I64,
  TType::T_DOUBLE,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 28> TStructDataStorage<::cpp2::MyStruct>::storage_names = { {
  "__fbthrift_field_MyIntField"sv,
  "__fbthrift_field_MyStringField"sv,
  "__fbthrift_field_MyDataField"sv,
  "__fbthrift_field_myEnum"sv,
  "__fbthrift_field_MyBoolField"sv,
  "__fbthrift_field_MyByteField"sv,
  "__fbthrift_field_MyShortField"sv,
  "__fbthrift_field_MyLongField"sv,
  "__fbthrift_field_MyDoubleField"sv,
  "__fbthrift_field_lDouble"sv,
  "__fbthrift_field_lShort"sv,
  "__fbthrift_field_lInteger"sv,
  "__fbthrift_field_lLong"sv,
  "__fbthrift_field_lString"sv,
  "__fbthrift_field_lBool"sv,
  "__fbthrift_field_lByte"sv,
  "__fbthrift_field_mShortString"sv,
  "__fbthrift_field_mIntegerString"sv,
  "__fbthrift_field_mStringMyStruct"sv,
  "__fbthrift_field_mStringBool"sv,
  "__fbthrift_field_mIntegerInteger"sv,
  "__fbthrift_field_mIntegerBool"sv,
  "__fbthrift_field_sShort"sv,
  "__fbthrift_field_sMyStruct"sv,
  "__fbthrift_field_sLong"sv,
  "__fbthrift_field_sString"sv,
  "__fbthrift_field_sByte"sv,
  "__fbthrift_field_mListList"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 28> TStructDataStorage<::cpp2::MyStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::SimpleStruct>::name = "SimpleStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::SimpleStruct>::fields_names = { {
  "age"sv,
  "name"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::SimpleStruct>::fields_ids = { {
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::SimpleStruct>::fields_types = { {
  TType::T_I64,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::SimpleStruct>::storage_names = { {
  "__fbthrift_field_age"sv,
  "__fbthrift_field_name"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::SimpleStruct>::isset_indexes = { {
  0,
  1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::defaultStruct>::name = "defaultStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 22> TStructDataStorage<::cpp2::defaultStruct>::fields_names = { {
  "myLongDFset"sv,
  "myLongDF"sv,
  "portDFset"sv,
  "portNum"sv,
  "myBinaryDFset"sv,
  "myBinary"sv,
  "myByteDFSet"sv,
  "myByte"sv,
  "myDoubleDFset"sv,
  "myDoubleDFZero"sv,
  "myDouble"sv,
  "field3"sv,
  "myList"sv,
  "mySet"sv,
  "simpleStruct"sv,
  "listStructDFset"sv,
  "myUnion"sv,
  "listUnionDFset"sv,
  "mapNestlistStructDfSet"sv,
  "mapJavaTypeDFset"sv,
  "emptyMap"sv,
  "enumMapDFset"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 22> TStructDataStorage<::cpp2::defaultStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 22> TStructDataStorage<::cpp2::defaultStruct>::fields_types = { {
  TType::T_I64,
  TType::T_I64,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_DOUBLE,
  TType::T_DOUBLE,
  TType::T_DOUBLE,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_SET,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 22> TStructDataStorage<::cpp2::defaultStruct>::storage_names = { {
  "__fbthrift_field_myLongDFset"sv,
  "__fbthrift_field_myLongDF"sv,
  "__fbthrift_field_portDFset"sv,
  "__fbthrift_field_portNum"sv,
  "__fbthrift_field_myBinaryDFset"sv,
  "__fbthrift_field_myBinary"sv,
  "__fbthrift_field_myByteDFSet"sv,
  "__fbthrift_field_myByte"sv,
  "__fbthrift_field_myDoubleDFset"sv,
  "__fbthrift_field_myDoubleDFZero"sv,
  "__fbthrift_field_myDouble"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_myList"sv,
  "__fbthrift_field_mySet"sv,
  "__fbthrift_field_simpleStruct"sv,
  "__fbthrift_field_listStructDFset"sv,
  "__fbthrift_field_myUnion"sv,
  "__fbthrift_field_listUnionDFset"sv,
  "__fbthrift_field_mapNestlistStructDfSet"sv,
  "__fbthrift_field_mapJavaTypeDFset"sv,
  "__fbthrift_field_emptyMap"sv,
  "__fbthrift_field_enumMapDFset"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 22> TStructDataStorage<::cpp2::defaultStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyStructTypeDef>::name = "MyStructTypeDef";
THRIFT_DATA_MEMBER const std::array<std::string_view, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::fields_names = { {
  "myLongField"sv,
  "myLongTypeDef"sv,
  "myStringField"sv,
  "myStringTypedef"sv,
  "myMapField"sv,
  "myMapTypedef"sv,
  "myListField"sv,
  "myListTypedef"sv,
  "myMapListOfTypeDef"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::fields_types = { {
  TType::T_I64,
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::storage_names = { {
  "__fbthrift_field_myLongField"sv,
  "__fbthrift_field_myLongTypeDef"sv,
  "__fbthrift_field_myStringField"sv,
  "__fbthrift_field_myStringTypedef"sv,
  "__fbthrift_field_myMapField"sv,
  "__fbthrift_field_myMapTypedef"sv,
  "__fbthrift_field_myListField"sv,
  "__fbthrift_field_myListTypedef"sv,
  "__fbthrift_field_myMapListOfTypeDef"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyDataItem>::name = "MyDataItem";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::MyDataItem>::storage_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::MyDataItem>::isset_indexes = { {
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyUnion>::name = "MyUnion";
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::cpp2::MyUnion>::fields_names = { {
  "myEnum"sv,
  "myStruct"sv,
  "myDataItem"sv,
  "complexNestedStruct"sv,
  "longValue"sv,
  "intValue"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 6> TStructDataStorage<::cpp2::MyUnion>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 6> TStructDataStorage<::cpp2::MyUnion>::fields_types = { {
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_I64,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::cpp2::MyUnion>::storage_names = { {
  "myEnum"sv,
  "myStruct"sv,
  "myDataItem"sv,
  "complexNestedStruct"sv,
  "longValue"sv,
  "intValue"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 6> TStructDataStorage<::cpp2::MyUnion>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::name = "MyUnionFloatFieldThrowExp";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::fields_names = { {
  "myEnum"sv,
  "setFloat"sv,
  "myDataItem"sv,
  "complexNestedStruct"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::fields_ids = { {
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::fields_types = { {
  TType::T_I32,
  TType::T_LIST,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::storage_names = { {
  "myEnum"sv,
  "setFloat"sv,
  "myDataItem"sv,
  "complexNestedStruct"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::isset_indexes = { {
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::ComplexNestedStruct>::name = "ComplexNestedStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::fields_names = { {
  "setOfSetOfInt"sv,
  "listofListOfListOfListOfEnum"sv,
  "listOfListOfMyStruct"sv,
  "setOfListOfListOfLong"sv,
  "setOfSetOfsetOfLong"sv,
  "mapStructListOfListOfLong"sv,
  "mKeyStructValInt"sv,
  "listOfMapKeyIntValInt"sv,
  "listOfMapKeyStrValList"sv,
  "mapKeySetValLong"sv,
  "mapKeyListValLong"sv,
  "mapKeyMapValMap"sv,
  "mapKeySetValMap"sv,
  "NestedMaps"sv,
  "mapKeyIntValList"sv,
  "mapKeyIntValSet"sv,
  "mapKeySetValInt"sv,
  "mapKeyListValSet"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::fields_types = { {
  TType::T_SET,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::storage_names = { {
  "__fbthrift_field_setOfSetOfInt"sv,
  "__fbthrift_field_listofListOfListOfListOfEnum"sv,
  "__fbthrift_field_listOfListOfMyStruct"sv,
  "__fbthrift_field_setOfListOfListOfLong"sv,
  "__fbthrift_field_setOfSetOfsetOfLong"sv,
  "__fbthrift_field_mapStructListOfListOfLong"sv,
  "__fbthrift_field_mKeyStructValInt"sv,
  "__fbthrift_field_listOfMapKeyIntValInt"sv,
  "__fbthrift_field_listOfMapKeyStrValList"sv,
  "__fbthrift_field_mapKeySetValLong"sv,
  "__fbthrift_field_mapKeyListValLong"sv,
  "__fbthrift_field_mapKeyMapValMap"sv,
  "__fbthrift_field_mapKeySetValMap"sv,
  "__fbthrift_field_NestedMaps"sv,
  "__fbthrift_field_mapKeyIntValList"sv,
  "__fbthrift_field_mapKeyIntValSet"sv,
  "__fbthrift_field_mapKeySetValInt"sv,
  "__fbthrift_field_mapKeyListValSet"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::TypeRemapped>::name = "TypeRemapped";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::TypeRemapped>::fields_names = { {
  "lsMap"sv,
  "ioMap"sv,
  "BigInteger"sv,
  "binaryTestBuffer"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::cpp2::TypeRemapped>::fields_ids = { {
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::TypeRemapped>::fields_types = { {
  TType::T_MAP,
  TType::T_MAP,
  TType::T_I32,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::TypeRemapped>::storage_names = { {
  "__fbthrift_field_lsMap"sv,
  "__fbthrift_field_ioMap"sv,
  "__fbthrift_field_BigInteger"sv,
  "__fbthrift_field_binaryTestBuffer"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::cpp2::TypeRemapped>::isset_indexes = { {
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::emptyXcep>::name = "emptyXcep";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::emptyXcep>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::emptyXcep>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::emptyXcep>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::emptyXcep>::storage_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::emptyXcep>::isset_indexes = { {
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::reqXcep>::name = "reqXcep";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::reqXcep>::fields_names = { {
  "message"sv,
  "errorCode"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::reqXcep>::fields_ids = { {
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::reqXcep>::fields_types = { {
  TType::T_STRING,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::reqXcep>::storage_names = { {
  "__fbthrift_field_message"sv,
  "__fbthrift_field_errorCode"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::reqXcep>::isset_indexes = { {
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::optXcep>::name = "optXcep";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::optXcep>::fields_names = { {
  "message"sv,
  "errorCode"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::optXcep>::fields_ids = { {
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::optXcep>::fields_types = { {
  TType::T_STRING,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::optXcep>::storage_names = { {
  "__fbthrift_field_message"sv,
  "__fbthrift_field_errorCode"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::optXcep>::isset_indexes = { {
  0,
  1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::complexException>::name = "complexException";
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::cpp2::complexException>::fields_names = { {
  "message"sv,
  "listStrings"sv,
  "errorEnum"sv,
  "unionError"sv,
  "structError"sv,
  "lsMap"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 6> TStructDataStorage<::cpp2::complexException>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 6> TStructDataStorage<::cpp2::complexException>::fields_types = { {
  TType::T_STRING,
  TType::T_LIST,
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::cpp2::complexException>::storage_names = { {
  "__fbthrift_field_message"sv,
  "__fbthrift_field_listStrings"sv,
  "__fbthrift_field_errorEnum"sv,
  "__fbthrift_field_unionError"sv,
  "__fbthrift_field_structError"sv,
  "__fbthrift_field_lsMap"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 6> TStructDataStorage<::cpp2::complexException>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
}};

} // namespace thrift
} // namespace apache
