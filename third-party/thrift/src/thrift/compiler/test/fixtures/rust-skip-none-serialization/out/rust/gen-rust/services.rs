// @generated by Thrift for thrift/compiler/test/fixtures/rust-skip-none-serialization/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift service definitions for `module`.


/// Service definitions for `MyService`.
pub mod my_service {
    #[derive(Clone, Debug)]
    pub enum PingExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<PingExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: PingExn) -> Self {
            match err {
                PingExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for PingExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => PingExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => PingExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for PingExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for PingExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for PingExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for PingExn {
        type Success = ();

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::Void, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    #[derive(Clone, Debug)]
    pub enum GetRandomDataExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<GetRandomDataExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: GetRandomDataExn) -> Self {
            match err {
                GetRandomDataExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for GetRandomDataExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => GetRandomDataExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => GetRandomDataExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for GetRandomDataExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for GetRandomDataExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for GetRandomDataExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for GetRandomDataExn {
        type Success = ::std::string::String;

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::String, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    #[derive(Clone, Debug)]
    pub enum HasDataByIdExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<HasDataByIdExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: HasDataByIdExn) -> Self {
            match err {
                HasDataByIdExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for HasDataByIdExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => HasDataByIdExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => HasDataByIdExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for HasDataByIdExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for HasDataByIdExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for HasDataByIdExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for HasDataByIdExn {
        type Success = ::std::primitive::bool;

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::Bool, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    #[derive(Clone, Debug)]
    pub enum GetDataByIdExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<GetDataByIdExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: GetDataByIdExn) -> Self {
            match err {
                GetDataByIdExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for GetDataByIdExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => GetDataByIdExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => GetDataByIdExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for GetDataByIdExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for GetDataByIdExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for GetDataByIdExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for GetDataByIdExn {
        type Success = ::std::string::String;

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::String, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    #[derive(Clone, Debug)]
    pub enum PutDataByIdExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<PutDataByIdExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: PutDataByIdExn) -> Self {
            match err {
                PutDataByIdExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for PutDataByIdExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => PutDataByIdExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => PutDataByIdExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for PutDataByIdExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for PutDataByIdExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for PutDataByIdExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for PutDataByIdExn {
        type Success = ();

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::Void, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    #[derive(Clone, Debug)]
    pub enum LobDataByIdExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<LobDataByIdExn> for ::fbthrift::NonthrowingFunctionError {
        fn from(err: LobDataByIdExn) -> Self {
            match err {
                LobDataByIdExn::ApplicationException(aexn) => ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::NonthrowingFunctionError> for LobDataByIdExn {
        fn from(err: ::fbthrift::NonthrowingFunctionError) -> Self {
            match err {
                ::fbthrift::NonthrowingFunctionError::ApplicationException(aexn) => LobDataByIdExn::ApplicationException(aexn),
                ::fbthrift::NonthrowingFunctionError::ThriftError(err) => LobDataByIdExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for LobDataByIdExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for LobDataByIdExn {
        fn exn_name(&self) -> &'static ::std::primitive::str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for LobDataByIdExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::help::SerializeExn for LobDataByIdExn {
        type Success = ();

        fn write_result<P>(
            res: ::std::result::Result<&Self::Success, &Self>,
            p: &mut P,
            function_name: &'static ::std::primitive::str,
        )
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin(function_name);
            match res {
                ::std::result::Result::Ok(_success) => {
                    p.write_field_begin("Success", ::fbthrift::TType::Void, 0i16);
                    ::fbthrift::Serialize::write(_success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }
}
