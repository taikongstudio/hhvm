
#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/emptyns.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cFoo] Foo_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.Foo?>inst)._cpp_obj


cdef object Foo_from_cpp(const shared_ptr[_fbthrift_ctypes.cFoo]& c_struct):
    return _fbthrift_ctypes.Foo._fbthrift_create(c_struct)
