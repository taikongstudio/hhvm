/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/py3/gen-py3/module/metadata.h"

namespace py3 {
namespace simple {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<AnEnum>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<AnEnumRenamed>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<Flags>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<SimpleException>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalRefStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<SimpleStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<HiddenTypeFieldsStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ComplexStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<BinaryUnion>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<BinaryUnionStruct>::gen(metadata);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::py3::simple::SimpleService>>::gen(response);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::py3::simple::DerivedService>>::gen(response);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::py3::simple::RederivedService>>::gen(response);
  return metadata;
}
} // namespace py3
} // namespace simple
