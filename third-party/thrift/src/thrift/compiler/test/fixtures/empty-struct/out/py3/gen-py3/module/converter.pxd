#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/empty-struct/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr

cimport module.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_ctypes.cEmpty] Empty_convert_to_cpp(object inst) except*
cdef object Empty_from_cpp(const shared_ptr[_fbthrift_ctypes.cEmpty]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cNada] Nada_convert_to_cpp(object inst) except*
cdef object Nada_from_cpp(const shared_ptr[_fbthrift_ctypes.cNada]& c_struct)

