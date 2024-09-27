// Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package service


import (
    "context"
    "fmt"
    "strings"

    module "module"
    includes "includes"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = module.GoUnusedProtection__
var _ = includes.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__



type MyService interface {
    Query(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
    HasArgDocs(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
}

type MyServiceChannelClientInterface interface {
    thrift.ClientInterface
    MyService
}

type MyServiceClientInterface interface {
    thrift.ClientInterface
    Query(s *module.MyStruct, i *includes.Included) (error)
    HasArgDocs(s *module.MyStruct, i *includes.Included) (error)
}

type MyServiceContextClientInterface interface {
    MyServiceClientInterface
    QueryContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
    HasArgDocsContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
}

type MyServiceChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ MyServiceChannelClientInterface = (*MyServiceChannelClient)(nil)

func NewMyServiceChannelClient(channel thrift.RequestChannel) *MyServiceChannelClient {
    return &MyServiceChannelClient{
        ch: channel,
    }
}

func (c *MyServiceChannelClient) Close() error {
    return c.ch.Close()
}

type MyServiceClient struct {
    chClient *MyServiceChannelClient
}
// Compile time interface enforcer
var _ MyServiceClientInterface = (*MyServiceClient)(nil)
var _ MyServiceContextClientInterface = (*MyServiceClient)(nil)

func NewMyServiceClient(prot thrift.Protocol) *MyServiceClient {
    return &MyServiceClient{
        chClient: NewMyServiceChannelClient(
            thrift.NewSerialChannel(prot),
        ),
    }
}

func (c *MyServiceClient) Close() error {
    return c.chClient.Close()
}

func (c *MyServiceChannelClient) Query(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    in := &reqMyServiceQuery{
        S: s,
        I: i,
    }
    out := newRespMyServiceQuery()
    err := c.ch.Call(ctx, "query", in, out)
    if err != nil {
        return err
    }
    return nil
}

func (c *MyServiceClient) Query(s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.Query(context.Background(), s, i)
}

func (c *MyServiceClient) QueryContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.Query(ctx, s, i)
}

func (c *MyServiceChannelClient) HasArgDocs(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    in := &reqMyServiceHasArgDocs{
        S: s,
        I: i,
    }
    out := newRespMyServiceHasArgDocs()
    err := c.ch.Call(ctx, "has_arg_docs", in, out)
    if err != nil {
        return err
    }
    return nil
}

func (c *MyServiceClient) HasArgDocs(s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.HasArgDocs(context.Background(), s, i)
}

func (c *MyServiceClient) HasArgDocsContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.HasArgDocs(ctx, s, i)
}

type reqMyServiceQuery struct {
    S *module.MyStruct `thrift:"s,1" json:"s" db:"s"`
    I *includes.Included `thrift:"i,2" json:"i" db:"i"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*reqMyServiceQuery)(nil)

// Deprecated: MyServiceQueryArgsDeprecated is deprecated, since it is supposed to be internal.
type MyServiceQueryArgsDeprecated = reqMyServiceQuery

func newReqMyServiceQuery() *reqMyServiceQuery {
    return (&reqMyServiceQuery{}).setDefaults()
}

func (x *reqMyServiceQuery) GetS() *module.MyStruct {
    if !x.IsSetS() {
        return nil
    }
    return x.S
}

func (x *reqMyServiceQuery) GetI() *includes.Included {
    if !x.IsSetI() {
        return nil
    }
    return x.I
}

func (x *reqMyServiceQuery) SetSNonCompat(value *module.MyStruct) *reqMyServiceQuery {
    x.S = value
    return x
}

func (x *reqMyServiceQuery) SetS(value *module.MyStruct) *reqMyServiceQuery {
    x.S = value
    return x
}

func (x *reqMyServiceQuery) SetINonCompat(value *includes.Included) *reqMyServiceQuery {
    x.I = value
    return x
}

func (x *reqMyServiceQuery) SetI(value *includes.Included) *reqMyServiceQuery {
    x.I = value
    return x
}

func (x *reqMyServiceQuery) IsSetS() bool {
    return x != nil && x.S != nil
}

func (x *reqMyServiceQuery) IsSetI() bool {
    return x != nil && x.I != nil
}

func (x *reqMyServiceQuery) writeField1(p thrift.Encoder) error {  // S
    if !x.IsSetS() {
        return nil
    }

    if err := p.WriteFieldBegin("s", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.S
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceQuery) writeField2(p thrift.Encoder) error {  // I
    if !x.IsSetI() {
        return nil
    }

    if err := p.WriteFieldBegin("i", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.I
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceQuery) readField1(p thrift.Decoder) error {  // S
    result := module.NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}

    x.S = result
    return nil
}

func (x *reqMyServiceQuery) readField2(p thrift.Decoder) error {  // I
    result := includes.NewIncluded()
err := result.Read(p)
if err != nil {
    return err
}

    x.I = result
    return nil
}

func (x *reqMyServiceQuery) toString1() string {  // S
    return fmt.Sprintf("%v", x.S)
}

func (x *reqMyServiceQuery) toString2() string {  // I
    return fmt.Sprintf("%v", x.I)
}

// Deprecated: Use newReqMyServiceQuery().GetS() instead.
func (x *reqMyServiceQuery) DefaultGetS() *module.MyStruct {
    if !x.IsSetS() {
        return module.NewMyStruct()
    }
    return x.S
}

// Deprecated: Use newReqMyServiceQuery().GetI() instead.
func (x *reqMyServiceQuery) DefaultGetI() *includes.Included {
    if !x.IsSetI() {
        return includes.NewIncluded()
    }
    return x.I
}



func (x *reqMyServiceQuery) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("reqMyServiceQuery"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }
    if err := x.writeField2(p); err != nil {
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

func (x *reqMyServiceQuery) Read(p thrift.Decoder) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRUCT)):  // s
            fieldReadErr = x.readField1(p)
        case (id == 2 && wireType == thrift.Type(thrift.STRUCT)):  // i
            fieldReadErr = x.readField2(p)
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

func (x *reqMyServiceQuery) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqMyServiceQuery({")
    sb.WriteString(fmt.Sprintf("S:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("I:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}
func (x *reqMyServiceQuery) setDefaults() *reqMyServiceQuery {
    return x.
        SetSNonCompat(module.NewMyStruct()).
        SetINonCompat(includes.NewIncluded())
}

type respMyServiceQuery struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*respMyServiceQuery)(nil)
var _ thrift.WritableResult = (*respMyServiceQuery)(nil)

// Deprecated: MyServiceQueryResultDeprecated is deprecated, since it is supposed to be internal.
type MyServiceQueryResultDeprecated = respMyServiceQuery

func newRespMyServiceQuery() *respMyServiceQuery {
    return (&respMyServiceQuery{}).setDefaults()
}



func (x *respMyServiceQuery) Exception() thrift.WritableException {
    return nil
}

func (x *respMyServiceQuery) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("respMyServiceQuery"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respMyServiceQuery) Read(p thrift.Decoder) error {
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

func (x *respMyServiceQuery) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respMyServiceQuery({")
    sb.WriteString("})")

    return sb.String()
}
func (x *respMyServiceQuery) setDefaults() *respMyServiceQuery {
    return x
}

type reqMyServiceHasArgDocs struct {
    S *module.MyStruct `thrift:"s,1" json:"s" db:"s"`
    I *includes.Included `thrift:"i,2" json:"i" db:"i"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*reqMyServiceHasArgDocs)(nil)

// Deprecated: MyServiceHasArgDocsArgsDeprecated is deprecated, since it is supposed to be internal.
type MyServiceHasArgDocsArgsDeprecated = reqMyServiceHasArgDocs

func newReqMyServiceHasArgDocs() *reqMyServiceHasArgDocs {
    return (&reqMyServiceHasArgDocs{}).setDefaults()
}

func (x *reqMyServiceHasArgDocs) GetS() *module.MyStruct {
    if !x.IsSetS() {
        return nil
    }
    return x.S
}

func (x *reqMyServiceHasArgDocs) GetI() *includes.Included {
    if !x.IsSetI() {
        return nil
    }
    return x.I
}

func (x *reqMyServiceHasArgDocs) SetSNonCompat(value *module.MyStruct) *reqMyServiceHasArgDocs {
    x.S = value
    return x
}

func (x *reqMyServiceHasArgDocs) SetS(value *module.MyStruct) *reqMyServiceHasArgDocs {
    x.S = value
    return x
}

func (x *reqMyServiceHasArgDocs) SetINonCompat(value *includes.Included) *reqMyServiceHasArgDocs {
    x.I = value
    return x
}

func (x *reqMyServiceHasArgDocs) SetI(value *includes.Included) *reqMyServiceHasArgDocs {
    x.I = value
    return x
}

func (x *reqMyServiceHasArgDocs) IsSetS() bool {
    return x != nil && x.S != nil
}

func (x *reqMyServiceHasArgDocs) IsSetI() bool {
    return x != nil && x.I != nil
}

func (x *reqMyServiceHasArgDocs) writeField1(p thrift.Encoder) error {  // S
    if !x.IsSetS() {
        return nil
    }

    if err := p.WriteFieldBegin("s", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.S
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceHasArgDocs) writeField2(p thrift.Encoder) error {  // I
    if !x.IsSetI() {
        return nil
    }

    if err := p.WriteFieldBegin("i", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.I
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceHasArgDocs) readField1(p thrift.Decoder) error {  // S
    result := module.NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}

    x.S = result
    return nil
}

func (x *reqMyServiceHasArgDocs) readField2(p thrift.Decoder) error {  // I
    result := includes.NewIncluded()
err := result.Read(p)
if err != nil {
    return err
}

    x.I = result
    return nil
}

func (x *reqMyServiceHasArgDocs) toString1() string {  // S
    return fmt.Sprintf("%v", x.S)
}

func (x *reqMyServiceHasArgDocs) toString2() string {  // I
    return fmt.Sprintf("%v", x.I)
}

// Deprecated: Use newReqMyServiceHasArgDocs().GetS() instead.
func (x *reqMyServiceHasArgDocs) DefaultGetS() *module.MyStruct {
    if !x.IsSetS() {
        return module.NewMyStruct()
    }
    return x.S
}

// Deprecated: Use newReqMyServiceHasArgDocs().GetI() instead.
func (x *reqMyServiceHasArgDocs) DefaultGetI() *includes.Included {
    if !x.IsSetI() {
        return includes.NewIncluded()
    }
    return x.I
}



func (x *reqMyServiceHasArgDocs) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("reqMyServiceHasArgDocs"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }
    if err := x.writeField2(p); err != nil {
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

func (x *reqMyServiceHasArgDocs) Read(p thrift.Decoder) error {
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
        case (id == 1 && wireType == thrift.Type(thrift.STRUCT)):  // s
            fieldReadErr = x.readField1(p)
        case (id == 2 && wireType == thrift.Type(thrift.STRUCT)):  // i
            fieldReadErr = x.readField2(p)
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

func (x *reqMyServiceHasArgDocs) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqMyServiceHasArgDocs({")
    sb.WriteString(fmt.Sprintf("S:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("I:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}
func (x *reqMyServiceHasArgDocs) setDefaults() *reqMyServiceHasArgDocs {
    return x.
        SetSNonCompat(module.NewMyStruct()).
        SetINonCompat(includes.NewIncluded())
}

type respMyServiceHasArgDocs struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*respMyServiceHasArgDocs)(nil)
var _ thrift.WritableResult = (*respMyServiceHasArgDocs)(nil)

// Deprecated: MyServiceHasArgDocsResultDeprecated is deprecated, since it is supposed to be internal.
type MyServiceHasArgDocsResultDeprecated = respMyServiceHasArgDocs

func newRespMyServiceHasArgDocs() *respMyServiceHasArgDocs {
    return (&respMyServiceHasArgDocs{}).setDefaults()
}



func (x *respMyServiceHasArgDocs) Exception() thrift.WritableException {
    return nil
}

func (x *respMyServiceHasArgDocs) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("respMyServiceHasArgDocs"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respMyServiceHasArgDocs) Read(p thrift.Decoder) error {
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

func (x *respMyServiceHasArgDocs) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respMyServiceHasArgDocs({")
    sb.WriteString("})")

    return sb.String()
}
func (x *respMyServiceHasArgDocs) setDefaults() *respMyServiceHasArgDocs {
    return x
}



type MyServiceProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler            MyService
}
// Compile time interface enforcer
var _ thrift.Processor = (*MyServiceProcessor)(nil)

func NewMyServiceProcessor(handler MyService) *MyServiceProcessor {
    p := &MyServiceProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("query", &procFuncMyServiceQuery{handler: handler})
    p.AddToProcessorFunctionMap("has_arg_docs", &procFuncMyServiceHasArgDocs{handler: handler})
    p.AddToFunctionServiceMap("query", "MyService")
    p.AddToFunctionServiceMap("has_arg_docs", "MyService")

    return p
}

func (p *MyServiceProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *MyServiceProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *MyServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *MyServiceProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *MyServiceProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *MyServiceProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("service.MyService")
}


type procFuncMyServiceQuery struct {
    handler MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncMyServiceQuery)(nil)

func (p *procFuncMyServiceQuery) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqMyServiceQuery()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyServiceQuery) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("query", messageType, seqId); err2 != nil {
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

func (p *procFuncMyServiceQuery) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqMyServiceQuery)
    result := newRespMyServiceQuery()
    err := p.handler.Query(ctx, args.S, args.I)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Query: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


type procFuncMyServiceHasArgDocs struct {
    handler MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncMyServiceHasArgDocs)(nil)

func (p *procFuncMyServiceHasArgDocs) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqMyServiceHasArgDocs()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyServiceHasArgDocs) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("has_arg_docs", messageType, seqId); err2 != nil {
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

func (p *procFuncMyServiceHasArgDocs) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqMyServiceHasArgDocs)
    result := newRespMyServiceHasArgDocs()
    err := p.handler.HasArgDocs(ctx, args.S, args.I)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing HasArgDocs: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


