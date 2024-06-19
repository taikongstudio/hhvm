# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# pyre-strict

from folly.iobuf import IOBuf
from thrift.python.serializer import Protocol, serialize, serialize_iobuf
from thrift.test.python_capi.module.thrift_types import (
    AdaptedFields,
    AnnoyingEnum,
    ComposeStruct,
    DoubledPair,
    EmptyStruct,
    ListStruct,
    MapStruct,
    MyDataItem,
    MyEnum,
    MyStruct,
    Onion as MyUnion,
    PrimitiveStruct,
    SetStruct,
    StringPair,
)
from thrift.test.python_capi.serialized_dep.thrift_types import SerializedStruct

def roundtrip_MyStruct(x: MyStruct) -> MyStruct: ...
def roundtrip_MyUnion(x: MyUnion) -> MyUnion: ...
def roundtrip_MyDataItem(x: MyDataItem) -> MyDataItem: ...
def roundtrip_MyEnum(x: MyEnum) -> MyEnum: ...
def roundtrip_DoubledPair(x: DoubledPair) -> DoubledPair: ...
def roundtrip_StringPair(x: StringPair) -> StringPair: ...
def roundtrip_EmptyStruct(x: EmptyStruct) -> EmptyStruct: ...
def roundtrip_PrimitiveStruct(x: PrimitiveStruct) -> PrimitiveStruct: ...
def roundtrip_ListStruct(x: ListStruct) -> ListStruct: ...
def roundtrip_SetStruct(x: SetStruct) -> SetStruct: ...
def roundtrip_MapStruct(x: MapStruct) -> MapStruct: ...
def roundtrip_ComposeStruct(x: ComposeStruct) -> ComposeStruct: ...
def roundtrip_AdaptedFields(x: AdaptedFields) -> AdaptedFields: ...
def roundtrip_SerializedStruct(x: SerializedStruct) -> SerializedStruct: ...
def gen_SerializedStruct(len: int) -> SerializedStruct: ...
def check_MyStruct(x: object) -> bool: ...
def check_MyDataItem(x: object) -> bool: ...
def check_MyUnion(x: object) -> bool: ...
def check_MyEnum(x: object) -> bool: ...
def check_DoubledPair(x: object) -> bool: ...
def check_StringPair(x: object) -> bool: ...
def check_PrimitiveStruct(x: object) -> bool: ...
def check_ListStruct(x: object) -> bool: ...
def check_SetStruct(x: object) -> bool: ...
def check_MapStruct(x: object) -> bool: ...
def check_ComposeStruct(x: object) -> bool: ...
def extract_and_serialize_PrimitiveStruct(x: PrimitiveStruct) -> IOBuf: ...
def deserialize_and_serialize_PrimitiveStruct(x: IOBuf) -> IOBuf: ...
def extract_and_serialize_MyStruct(x: MyStruct) -> IOBuf: ...
def deserialize_and_serialize_MyStruct(x: IOBuf) -> IOBuf: ...
def extract_and_serialize_AdaptedFields(x: AdaptedFields) -> IOBuf: ...
def deserialize_and_serialize_AdaptedFields(x: IOBuf) -> IOBuf: ...
def extract_and_serialize_ListStruct(x: ListStruct) -> IOBuf: ...
def deserialize_and_serialize_ListStruct(x: IOBuf) -> IOBuf: ...
def extract_and_serialize_SetStruct(x: SetStruct) -> IOBuf: ...
def deserialize_and_serialize_SetStruct(x: IOBuf) -> IOBuf: ...
def extract_and_serialize_MapStruct(x: MapStruct) -> IOBuf: ...
def deserialize_and_serialize_MapStruct(x: IOBuf) -> IOBuf: ...
def extract_and_serialize_ComposeStruct(x: ComposeStruct) -> IOBuf: ...
def deserialize_and_serialize_ComposeStruct(x: IOBuf) -> IOBuf: ...
