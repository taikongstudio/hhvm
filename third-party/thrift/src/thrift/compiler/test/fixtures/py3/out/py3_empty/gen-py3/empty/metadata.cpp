/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/empty.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/py3/gen-py3/empty/metadata.h"

namespace cpp2 {
::apache::thrift::metadata::ThriftMetadata empty_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::NullService>>::gen(response);
  return metadata;
}
} // namespace cpp2
