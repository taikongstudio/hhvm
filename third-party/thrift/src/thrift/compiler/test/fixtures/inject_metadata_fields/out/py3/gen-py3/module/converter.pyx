
#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/inject_metadata_fields/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cFields] Fields_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.Fields?>inst)._cpp_obj


cdef object Fields_from_cpp(const shared_ptr[_fbthrift_ctypes.cFields]& c_struct):
    return _fbthrift_ctypes.Fields._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cFieldsInjectedToEmptyStruct] FieldsInjectedToEmptyStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.FieldsInjectedToEmptyStruct?>inst)._cpp_obj


cdef object FieldsInjectedToEmptyStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cFieldsInjectedToEmptyStruct]& c_struct):
    return _fbthrift_ctypes.FieldsInjectedToEmptyStruct._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cFieldsInjectedToStruct] FieldsInjectedToStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.FieldsInjectedToStruct?>inst)._cpp_obj


cdef object FieldsInjectedToStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cFieldsInjectedToStruct]& c_struct):
    return _fbthrift_ctypes.FieldsInjectedToStruct._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cFieldsInjectedWithIncludedStruct] FieldsInjectedWithIncludedStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.FieldsInjectedWithIncludedStruct?>inst)._cpp_obj


cdef object FieldsInjectedWithIncludedStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cFieldsInjectedWithIncludedStruct]& c_struct):
    return _fbthrift_ctypes.FieldsInjectedWithIncludedStruct._fbthrift_create(c_struct)
