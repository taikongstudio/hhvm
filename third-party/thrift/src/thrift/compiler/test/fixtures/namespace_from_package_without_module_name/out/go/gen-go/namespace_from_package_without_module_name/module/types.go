// Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module

import (
    "fmt"
    "reflect"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = strings.Split
var _ = thrift.ZERO


type Foo struct {
    MyInt int64 `thrift:"MyInt,1" json:"MyInt" db:"MyInt"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Foo)(nil)

func NewFoo() *Foo {
    return (&Foo{}).setDefaults()
}

func (x *Foo) GetMyInt() int64 {
    return x.MyInt
}

func (x *Foo) SetMyIntNonCompat(value int64) *Foo {
    x.MyInt = value
    return x
}

func (x *Foo) SetMyInt(value int64) *Foo {
    x.MyInt = value
    return x
}

func (x *Foo) writeField1(p thrift.Encoder) error {  // MyInt
    if err := p.WriteFieldBegin("MyInt", thrift.I64, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyInt
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Foo) readField1(p thrift.Decoder) error {  // MyInt
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.MyInt = result
    return nil
}

func (x *Foo) toString1() string {  // MyInt
    return fmt.Sprintf("%v", x.MyInt)
}



func (x *Foo) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Foo"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Foo) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.I64)):  // MyInt
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Foo) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Foo({")
    sb.WriteString(fmt.Sprintf("MyInt:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
func (x *Foo) setDefaults() *Foo {
    return x.
        SetMyIntNonCompat(0)
}


// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("test.dev/namespace_from_package_without_module_name/Foo", func() any { return NewFoo() })

}
