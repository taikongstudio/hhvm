#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/single_file_service/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared
from libcpp.utility cimport move as cmove

from apache.thrift.metadata.types cimport (
    cThriftMetadata,
    ThriftMetadata,
)

from module.metadata cimport cGetThriftModuleMetadata

def getThriftModuleMetadata():
    cdef shared_ptr[cThriftMetadata] metadata
    metadata = make_shared[cThriftMetadata](cGetThriftModuleMetadata())
    return ThriftMetadata._fbthrift_create(cmove(metadata))
