// Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/quoted.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


import (
    "context"
    "fmt"
    "reflect"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = strings.Split
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

type TestService interface {
    Init(ctx context.Context, int1 int64) (int64, error)
}

type TestServiceChannelClientInterface interface {
    thrift.ClientInterface
    TestService
}

type TestServiceClientInterface interface {
    thrift.ClientInterface
    Init(int1 int64) (int64, error)
}

type TestServiceContextClientInterface interface {
    TestServiceClientInterface
    InitContext(ctx context.Context, int1 int64) (int64, error)
}

type TestServiceChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ TestServiceChannelClientInterface = (*TestServiceChannelClient)(nil)

func NewTestServiceChannelClient(channel thrift.RequestChannel) *TestServiceChannelClient {
    return &TestServiceChannelClient{
        ch: channel,
    }
}

func (c *TestServiceChannelClient) Close() error {
    return c.ch.Close()
}

type TestServiceClient struct {
    chClient *TestServiceChannelClient
}
// Compile time interface enforcer
var _ TestServiceClientInterface = (*TestServiceClient)(nil)
var _ TestServiceContextClientInterface = (*TestServiceClient)(nil)

func NewTestServiceClient(prot thrift.Protocol) *TestServiceClient {
    return &TestServiceClient{
        chClient: NewTestServiceChannelClient(
            thrift.NewSerialChannel(prot),
        ),
    }
}

func (c *TestServiceClient) Close() error {
    return c.chClient.Close()
}

func (c *TestServiceChannelClient) Init(ctx context.Context, int1 int64) (int64, error) {
    in := &reqTestServiceInit{
        Int1: int1,
    }
    out := newRespTestServiceInit()
    err := c.ch.Call(ctx, "init", in, out)
    if err != nil {
        return 0, err
    }
    return out.GetSuccess(), nil
}

func (c *TestServiceClient) Init(int1 int64) (int64, error) {
    return c.chClient.Init(context.Background(), int1)
}

func (c *TestServiceClient) InitContext(ctx context.Context, int1 int64) (int64, error) {
    return c.chClient.Init(ctx, int1)
}

type reqTestServiceInit struct {
    Int1 int64 `thrift:"int1,1" json:"int1" db:"int1"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*reqTestServiceInit)(nil)

// Deprecated: TestServiceInitArgsDeprecated is deprecated, since it is supposed to be internal.
type TestServiceInitArgsDeprecated = reqTestServiceInit

func newReqTestServiceInit() *reqTestServiceInit {
    return (&reqTestServiceInit{}).setDefaults()
}

func (x *reqTestServiceInit) GetInt1() int64 {
    return x.Int1
}

func (x *reqTestServiceInit) SetInt1NonCompat(value int64) *reqTestServiceInit {
    x.Int1 = value
    return x
}

func (x *reqTestServiceInit) SetInt1(value int64) *reqTestServiceInit {
    x.Int1 = value
    return x
}

func (x *reqTestServiceInit) writeField1(p thrift.Encoder) error {  // Int1
    if err := p.WriteFieldBegin("int1", thrift.I64, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Int1
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqTestServiceInit) readField1(p thrift.Decoder) error {  // Int1
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.Int1 = result
    return nil
}

func (x *reqTestServiceInit) toString1() string {  // Int1
    return fmt.Sprintf("%v", x.Int1)
}



func (x *reqTestServiceInit) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("reqTestServiceInit"); err != nil {
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

func (x *reqTestServiceInit) Read(p thrift.Decoder) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.I64)):  // int1
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

func (x *reqTestServiceInit) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqTestServiceInit({")
    sb.WriteString(fmt.Sprintf("Int1:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
func (x *reqTestServiceInit) setDefaults() *reqTestServiceInit {
    return x.
        SetInt1NonCompat(0)
}

type respTestServiceInit struct {
    Success *int64 `thrift:"success,0,optional" json:"success,omitempty" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*respTestServiceInit)(nil)
var _ thrift.WritableResult = (*respTestServiceInit)(nil)

// Deprecated: TestServiceInitResultDeprecated is deprecated, since it is supposed to be internal.
type TestServiceInitResultDeprecated = respTestServiceInit

func newRespTestServiceInit() *respTestServiceInit {
    return (&respTestServiceInit{}).setDefaults()
}

func (x *respTestServiceInit) GetSuccess() int64 {
    if !x.IsSetSuccess() {
        return 0
    }
    return *x.Success
}

func (x *respTestServiceInit) SetSuccessNonCompat(value int64) *respTestServiceInit {
    x.Success = &value
    return x
}

func (x *respTestServiceInit) SetSuccess(value *int64) *respTestServiceInit {
    x.Success = value
    return x
}

func (x *respTestServiceInit) IsSetSuccess() bool {
    return x != nil && x.Success != nil
}

func (x *respTestServiceInit) writeField0(p thrift.Encoder) error {  // Success
    if !x.IsSetSuccess() {
        return nil
    }

    if err := p.WriteFieldBegin("success", thrift.I64, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.Success
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respTestServiceInit) readField0(p thrift.Decoder) error {  // Success
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.Success = &result
    return nil
}

func (x *respTestServiceInit) toString0() string {  // Success
    if x.IsSetSuccess() {
        return fmt.Sprintf("%v", *x.Success)
    }
    return fmt.Sprintf("%v", x.Success)
}




func (x *respTestServiceInit) Exception() thrift.WritableException {
    return nil
}

func (x *respTestServiceInit) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("respTestServiceInit"); err != nil {
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

func (x *respTestServiceInit) Read(p thrift.Decoder) error {
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
        case (id == 0 && wireType == thrift.Type(thrift.I64)):  // success
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

func (x *respTestServiceInit) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respTestServiceInit({")
    sb.WriteString(fmt.Sprintf("Success:%s", x.toString0()))
    sb.WriteString("})")

    return sb.String()
}
func (x *respTestServiceInit) setDefaults() *respTestServiceInit {
    return x
}



type TestServiceProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler            TestService
}
// Compile time interface enforcer
var _ thrift.Processor = (*TestServiceProcessor)(nil)

func NewTestServiceProcessor(handler TestService) *TestServiceProcessor {
    p := &TestServiceProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("init", &procFuncTestServiceInit{handler: handler})
    p.AddToFunctionServiceMap("init", "TestService")

    return p
}

func (p *TestServiceProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *TestServiceProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *TestServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *TestServiceProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *TestServiceProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *TestServiceProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("quoted.TestService")
}


type procFuncTestServiceInit struct {
    handler TestService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncTestServiceInit)(nil)

func (p *procFuncTestServiceInit) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqTestServiceInit()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncTestServiceInit) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("init", messageType, seqId); err2 != nil {
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

func (p *procFuncTestServiceInit) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqTestServiceInit)
    result := newRespTestServiceInit()
    retval, err := p.handler.Init(ctx, args.Int1)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Init: " + err.Error(), err)
        return x, x
    }

    result.Success = &retval
    return result, nil
}


