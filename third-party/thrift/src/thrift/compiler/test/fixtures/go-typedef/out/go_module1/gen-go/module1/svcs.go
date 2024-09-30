// Autogenerated by Thrift for thrift/compiler/test/fixtures/go-typedef/src/module1.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module1


import (
    "context"
    "fmt"
    "reflect"
    "strings"

    module0 "module0"
    module2 "module2"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = module0.GoUnusedProtection__
var _ = module2.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = strings.Split
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

type Finder interface {
    ByPlate(ctx context.Context, plate Plate) (*Automobile, error)
    AliasByPlate(ctx context.Context, plate Plate) (*Car, error)
    PreviousPlate(ctx context.Context, plate Plate) (Plate, error)
}

type FinderChannelClientInterface interface {
    thrift.ClientInterface
    Finder
}

type FinderClientInterface interface {
    thrift.ClientInterface
    ByPlate(plate Plate) (*Automobile, error)
    AliasByPlate(plate Plate) (*Car, error)
    PreviousPlate(plate Plate) (Plate, error)
}

type FinderContextClientInterface interface {
    FinderClientInterface
    ByPlateContext(ctx context.Context, plate Plate) (*Automobile, error)
    AliasByPlateContext(ctx context.Context, plate Plate) (*Car, error)
    PreviousPlateContext(ctx context.Context, plate Plate) (Plate, error)
}

type FinderChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ FinderChannelClientInterface = (*FinderChannelClient)(nil)

func NewFinderChannelClient(channel thrift.RequestChannel) *FinderChannelClient {
    return &FinderChannelClient{
        ch: channel,
    }
}

func (c *FinderChannelClient) Close() error {
    return c.ch.Close()
}

type FinderClient struct {
    chClient *FinderChannelClient
}
// Compile time interface enforcer
var _ FinderClientInterface = (*FinderClient)(nil)
var _ FinderContextClientInterface = (*FinderClient)(nil)

func NewFinderClient(prot thrift.Protocol) *FinderClient {
    return &FinderClient{
        chClient: NewFinderChannelClient(
            thrift.NewSerialChannel(prot),
        ),
    }
}

func (c *FinderClient) Close() error {
    return c.chClient.Close()
}

func (c *FinderChannelClient) ByPlate(ctx context.Context, plate Plate) (*Automobile, error) {
    in := &reqFinderByPlate{
        Plate: plate,
    }
    out := newRespFinderByPlate()
    err := c.ch.Call(ctx, "byPlate", in, out)
    if err != nil {
        return nil, err
    }
    return out.GetSuccess(), nil
}

func (c *FinderClient) ByPlate(plate Plate) (*Automobile, error) {
    return c.chClient.ByPlate(context.Background(), plate)
}

func (c *FinderClient) ByPlateContext(ctx context.Context, plate Plate) (*Automobile, error) {
    return c.chClient.ByPlate(ctx, plate)
}

func (c *FinderChannelClient) AliasByPlate(ctx context.Context, plate Plate) (*Car, error) {
    in := &reqFinderAliasByPlate{
        Plate: plate,
    }
    out := newRespFinderAliasByPlate()
    err := c.ch.Call(ctx, "aliasByPlate", in, out)
    if err != nil {
        return nil, err
    }
    return out.GetSuccess(), nil
}

func (c *FinderClient) AliasByPlate(plate Plate) (*Car, error) {
    return c.chClient.AliasByPlate(context.Background(), plate)
}

func (c *FinderClient) AliasByPlateContext(ctx context.Context, plate Plate) (*Car, error) {
    return c.chClient.AliasByPlate(ctx, plate)
}

func (c *FinderChannelClient) PreviousPlate(ctx context.Context, plate Plate) (Plate, error) {
    in := &reqFinderPreviousPlate{
        Plate: plate,
    }
    out := newRespFinderPreviousPlate()
    err := c.ch.Call(ctx, "previousPlate", in, out)
    if err != nil {
        return "", err
    }
    return out.GetSuccess(), nil
}

func (c *FinderClient) PreviousPlate(plate Plate) (Plate, error) {
    return c.chClient.PreviousPlate(context.Background(), plate)
}

func (c *FinderClient) PreviousPlateContext(ctx context.Context, plate Plate) (Plate, error) {
    return c.chClient.PreviousPlate(ctx, plate)
}

type reqFinderByPlate struct {
    Plate Plate `thrift:"plate,1" json:"plate" db:"plate"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*reqFinderByPlate)(nil)

// Deprecated: FinderByPlateArgsDeprecated is deprecated, since it is supposed to be internal.
type FinderByPlateArgsDeprecated = reqFinderByPlate

func newReqFinderByPlate() *reqFinderByPlate {
    return (&reqFinderByPlate{}).setDefaults()
}

func (x *reqFinderByPlate) GetPlate() Plate {
    return x.Plate
}

func (x *reqFinderByPlate) SetPlateNonCompat(value Plate) *reqFinderByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderByPlate) SetPlate(value Plate) *reqFinderByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderByPlate) writeField1(p thrift.Encoder) error {  // Plate
    if err := p.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Plate
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqFinderByPlate) readField1(p thrift.Decoder) error {  // Plate
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.Plate = result
    return nil
}

func (x *reqFinderByPlate) toString1() string {  // Plate
    return fmt.Sprintf("%v", x.Plate)
}



func (x *reqFinderByPlate) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("reqFinderByPlate"); err != nil {
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

func (x *reqFinderByPlate) Read(p thrift.Decoder) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // plate
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

func (x *reqFinderByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqFinderByPlate({")
    sb.WriteString(fmt.Sprintf("Plate:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
func (x *reqFinderByPlate) setDefaults() *reqFinderByPlate {
    return x.
        SetPlateNonCompat(NewPlate())
}

type respFinderByPlate struct {
    Success *Automobile `thrift:"success,0,optional" json:"success,omitempty" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*respFinderByPlate)(nil)
var _ thrift.WritableResult = (*respFinderByPlate)(nil)

// Deprecated: FinderByPlateResultDeprecated is deprecated, since it is supposed to be internal.
type FinderByPlateResultDeprecated = respFinderByPlate

func newRespFinderByPlate() *respFinderByPlate {
    return (&respFinderByPlate{}).setDefaults()
}

func (x *respFinderByPlate) GetSuccess() *Automobile {
    if !x.IsSetSuccess() {
        return nil
    }
    return x.Success
}

func (x *respFinderByPlate) SetSuccessNonCompat(value *Automobile) *respFinderByPlate {
    x.Success = value
    return x
}

func (x *respFinderByPlate) SetSuccess(value *Automobile) *respFinderByPlate {
    x.Success = value
    return x
}

func (x *respFinderByPlate) IsSetSuccess() bool {
    return x != nil && x.Success != nil
}

func (x *respFinderByPlate) writeField0(p thrift.Encoder) error {  // Success
    if !x.IsSetSuccess() {
        return nil
    }

    if err := p.WriteFieldBegin("success", thrift.STRUCT, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Success
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respFinderByPlate) readField0(p thrift.Decoder) error {  // Success
    result := NewAutomobile()
err := result.Read(p)
if err != nil {
    return err
}

    x.Success = result
    return nil
}

func (x *respFinderByPlate) toString0() string {  // Success
    return fmt.Sprintf("%v", x.Success)
}

// Deprecated: Use newRespFinderByPlate().GetSuccess() instead.
func (x *respFinderByPlate) DefaultGetSuccess() *Automobile {
    if !x.IsSetSuccess() {
        return NewAutomobile()
    }
    return x.Success
}



func (x *respFinderByPlate) Exception() thrift.WritableException {
    return nil
}

func (x *respFinderByPlate) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("respFinderByPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
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

func (x *respFinderByPlate) Read(p thrift.Decoder) error {
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
        case (id == 0 && wireType == thrift.Type(thrift.STRUCT)):  // success
            fieldReadErr = x.readField0(p)
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

func (x *respFinderByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respFinderByPlate({")
    sb.WriteString(fmt.Sprintf("Success:%s", x.toString0()))
    sb.WriteString("})")

    return sb.String()
}
func (x *respFinderByPlate) setDefaults() *respFinderByPlate {
    return x
}

type reqFinderAliasByPlate struct {
    Plate Plate `thrift:"plate,1" json:"plate" db:"plate"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*reqFinderAliasByPlate)(nil)

// Deprecated: FinderAliasByPlateArgsDeprecated is deprecated, since it is supposed to be internal.
type FinderAliasByPlateArgsDeprecated = reqFinderAliasByPlate

func newReqFinderAliasByPlate() *reqFinderAliasByPlate {
    return (&reqFinderAliasByPlate{}).setDefaults()
}

func (x *reqFinderAliasByPlate) GetPlate() Plate {
    return x.Plate
}

func (x *reqFinderAliasByPlate) SetPlateNonCompat(value Plate) *reqFinderAliasByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderAliasByPlate) SetPlate(value Plate) *reqFinderAliasByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderAliasByPlate) writeField1(p thrift.Encoder) error {  // Plate
    if err := p.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Plate
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqFinderAliasByPlate) readField1(p thrift.Decoder) error {  // Plate
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.Plate = result
    return nil
}

func (x *reqFinderAliasByPlate) toString1() string {  // Plate
    return fmt.Sprintf("%v", x.Plate)
}



func (x *reqFinderAliasByPlate) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("reqFinderAliasByPlate"); err != nil {
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

func (x *reqFinderAliasByPlate) Read(p thrift.Decoder) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // plate
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

func (x *reqFinderAliasByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqFinderAliasByPlate({")
    sb.WriteString(fmt.Sprintf("Plate:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
func (x *reqFinderAliasByPlate) setDefaults() *reqFinderAliasByPlate {
    return x.
        SetPlateNonCompat(NewPlate())
}

type respFinderAliasByPlate struct {
    Success *Car `thrift:"success,0,optional" json:"success,omitempty" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*respFinderAliasByPlate)(nil)
var _ thrift.WritableResult = (*respFinderAliasByPlate)(nil)

// Deprecated: FinderAliasByPlateResultDeprecated is deprecated, since it is supposed to be internal.
type FinderAliasByPlateResultDeprecated = respFinderAliasByPlate

func newRespFinderAliasByPlate() *respFinderAliasByPlate {
    return (&respFinderAliasByPlate{}).setDefaults()
}

func (x *respFinderAliasByPlate) GetSuccess() *Car {
    if !x.IsSetSuccess() {
        return nil
    }
    return x.Success
}

func (x *respFinderAliasByPlate) SetSuccessNonCompat(value *Car) *respFinderAliasByPlate {
    x.Success = value
    return x
}

func (x *respFinderAliasByPlate) SetSuccess(value *Car) *respFinderAliasByPlate {
    x.Success = value
    return x
}

func (x *respFinderAliasByPlate) IsSetSuccess() bool {
    return x != nil && x.Success != nil
}

func (x *respFinderAliasByPlate) writeField0(p thrift.Encoder) error {  // Success
    if !x.IsSetSuccess() {
        return nil
    }

    if err := p.WriteFieldBegin("success", thrift.STRUCT, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Success
    err := WriteCar(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respFinderAliasByPlate) readField0(p thrift.Decoder) error {  // Success
    result, err := ReadCar(p)
if err != nil {
    return err
}

    x.Success = result
    return nil
}

func (x *respFinderAliasByPlate) toString0() string {  // Success
    return fmt.Sprintf("%v", x.Success)
}

// Deprecated: Use newRespFinderAliasByPlate().GetSuccess() instead.
func (x *respFinderAliasByPlate) DefaultGetSuccess() *Car {
    if !x.IsSetSuccess() {
        return NewCar()
    }
    return x.Success
}



func (x *respFinderAliasByPlate) Exception() thrift.WritableException {
    return nil
}

func (x *respFinderAliasByPlate) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("respFinderAliasByPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
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

func (x *respFinderAliasByPlate) Read(p thrift.Decoder) error {
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
        case (id == 0 && wireType == thrift.Type(thrift.STRUCT)):  // success
            fieldReadErr = x.readField0(p)
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

func (x *respFinderAliasByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respFinderAliasByPlate({")
    sb.WriteString(fmt.Sprintf("Success:%s", x.toString0()))
    sb.WriteString("})")

    return sb.String()
}
func (x *respFinderAliasByPlate) setDefaults() *respFinderAliasByPlate {
    return x
}

type reqFinderPreviousPlate struct {
    Plate Plate `thrift:"plate,1" json:"plate" db:"plate"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*reqFinderPreviousPlate)(nil)

// Deprecated: FinderPreviousPlateArgsDeprecated is deprecated, since it is supposed to be internal.
type FinderPreviousPlateArgsDeprecated = reqFinderPreviousPlate

func newReqFinderPreviousPlate() *reqFinderPreviousPlate {
    return (&reqFinderPreviousPlate{}).setDefaults()
}

func (x *reqFinderPreviousPlate) GetPlate() Plate {
    return x.Plate
}

func (x *reqFinderPreviousPlate) SetPlateNonCompat(value Plate) *reqFinderPreviousPlate {
    x.Plate = value
    return x
}

func (x *reqFinderPreviousPlate) SetPlate(value Plate) *reqFinderPreviousPlate {
    x.Plate = value
    return x
}

func (x *reqFinderPreviousPlate) writeField1(p thrift.Encoder) error {  // Plate
    if err := p.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Plate
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqFinderPreviousPlate) readField1(p thrift.Decoder) error {  // Plate
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.Plate = result
    return nil
}

func (x *reqFinderPreviousPlate) toString1() string {  // Plate
    return fmt.Sprintf("%v", x.Plate)
}



func (x *reqFinderPreviousPlate) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("reqFinderPreviousPlate"); err != nil {
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

func (x *reqFinderPreviousPlate) Read(p thrift.Decoder) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // plate
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

func (x *reqFinderPreviousPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqFinderPreviousPlate({")
    sb.WriteString(fmt.Sprintf("Plate:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
func (x *reqFinderPreviousPlate) setDefaults() *reqFinderPreviousPlate {
    return x.
        SetPlateNonCompat(NewPlate())
}

type respFinderPreviousPlate struct {
    Success *Plate `thrift:"success,0,optional" json:"success,omitempty" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*respFinderPreviousPlate)(nil)
var _ thrift.WritableResult = (*respFinderPreviousPlate)(nil)

// Deprecated: FinderPreviousPlateResultDeprecated is deprecated, since it is supposed to be internal.
type FinderPreviousPlateResultDeprecated = respFinderPreviousPlate

func newRespFinderPreviousPlate() *respFinderPreviousPlate {
    return (&respFinderPreviousPlate{}).setDefaults()
}

func (x *respFinderPreviousPlate) GetSuccess() Plate {
    if !x.IsSetSuccess() {
        return NewPlate()
    }
    return *x.Success
}

func (x *respFinderPreviousPlate) SetSuccessNonCompat(value Plate) *respFinderPreviousPlate {
    x.Success = &value
    return x
}

func (x *respFinderPreviousPlate) SetSuccess(value *Plate) *respFinderPreviousPlate {
    x.Success = value
    return x
}

func (x *respFinderPreviousPlate) IsSetSuccess() bool {
    return x != nil && x.Success != nil
}

func (x *respFinderPreviousPlate) writeField0(p thrift.Encoder) error {  // Success
    if !x.IsSetSuccess() {
        return nil
    }

    if err := p.WriteFieldBegin("success", thrift.STRING, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.Success
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respFinderPreviousPlate) readField0(p thrift.Decoder) error {  // Success
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.Success = &result
    return nil
}

func (x *respFinderPreviousPlate) toString0() string {  // Success
    if x.IsSetSuccess() {
        return fmt.Sprintf("%v", *x.Success)
    }
    return fmt.Sprintf("%v", x.Success)
}




func (x *respFinderPreviousPlate) Exception() thrift.WritableException {
    return nil
}

func (x *respFinderPreviousPlate) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("respFinderPreviousPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
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

func (x *respFinderPreviousPlate) Read(p thrift.Decoder) error {
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
        case (id == 0 && wireType == thrift.Type(thrift.STRING)):  // success
            fieldReadErr = x.readField0(p)
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

func (x *respFinderPreviousPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respFinderPreviousPlate({")
    sb.WriteString(fmt.Sprintf("Success:%s", x.toString0()))
    sb.WriteString("})")

    return sb.String()
}
func (x *respFinderPreviousPlate) setDefaults() *respFinderPreviousPlate {
    return x
}



type FinderProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler            Finder
}
// Compile time interface enforcer
var _ thrift.Processor = (*FinderProcessor)(nil)

func NewFinderProcessor(handler Finder) *FinderProcessor {
    p := &FinderProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("byPlate", &procFuncFinderByPlate{handler: handler})
    p.AddToProcessorFunctionMap("aliasByPlate", &procFuncFinderAliasByPlate{handler: handler})
    p.AddToProcessorFunctionMap("previousPlate", &procFuncFinderPreviousPlate{handler: handler})
    p.AddToFunctionServiceMap("byPlate", "Finder")
    p.AddToFunctionServiceMap("aliasByPlate", "Finder")
    p.AddToFunctionServiceMap("previousPlate", "Finder")

    return p
}

func (p *FinderProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *FinderProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *FinderProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *FinderProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *FinderProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *FinderProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("module1.Finder")
}


type procFuncFinderByPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncFinderByPlate)(nil)

func (p *procFuncFinderByPlate) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqFinderByPlate()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderByPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("byPlate", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncFinderByPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderByPlate)
    result := newRespFinderByPlate()
    retval, err := p.handler.ByPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing ByPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


type procFuncFinderAliasByPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncFinderAliasByPlate)(nil)

func (p *procFuncFinderAliasByPlate) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqFinderAliasByPlate()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderAliasByPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("aliasByPlate", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncFinderAliasByPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderAliasByPlate)
    result := newRespFinderAliasByPlate()
    retval, err := p.handler.AliasByPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing AliasByPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


type procFuncFinderPreviousPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncFinderPreviousPlate)(nil)

func (p *procFuncFinderPreviousPlate) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqFinderPreviousPlate()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderPreviousPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("previousPlate", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncFinderPreviousPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderPreviousPlate)
    result := newRespFinderPreviousPlate()
    retval, err := p.handler.PreviousPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing PreviousPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = &retval
    return result, nil
}


