#
# Autogenerated by Thrift for includes.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr

cimport includes.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_ctypes.cIncluded] Included_convert_to_cpp(object inst) except*
cdef object Included_from_cpp(const shared_ptr[_fbthrift_ctypes.cIncluded]& c_struct)

