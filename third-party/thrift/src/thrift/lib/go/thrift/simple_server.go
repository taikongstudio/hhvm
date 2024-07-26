/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package thrift

import (
	"context"
	"fmt"
	"log"
	"net"
	"os"
	"runtime/debug"
)

// simpleServer is a functional but unoptimized server that is easy to
// understand.  In its accept loop, it performs an accept on an
// underlying socket, wraps the socket in the net.Listener, and
// then spins up a gofunc to process requests.
//
// There is one gofunc per active connection that handles all requests
// on the connection.  multiple simultaneous requests over a single
// connection are not supported, as the per-connection gofunc reads
// the request, processes it, and writes the response serially
type simpleServer struct {
	processor ProcessorContext
	listener  net.Listener
	log       *log.Logger
}

// NewSimpleServer creates a new server that only supports Header Transport.
func NewSimpleServer(processor ProcessorContext, listener net.Listener, transportType TransportID, options ...func(*ServerOptions)) Server {
	if transportType != TransportIDHeader {
		panic(fmt.Sprintf("SimpleServer only supports Header Transport and not %d", transportType))
	}
	serverOptions := simpleServerOptions(options...)
	processor = WrapInterceptorContext(serverOptions.interceptor, processor)
	return &simpleServer{
		processor: processor,
		listener:  listener,
		log:       log.New(os.Stderr, "", log.LstdFlags),
	}
}

// ServeContext starts listening on the transport and accepting new connections
// and blocks until cancel is called via context or an error occurs.
func (p *simpleServer) ServeContext(ctx context.Context) error {
	go func() {
		<-ctx.Done()
		p.listener.Close()
	}()
	err := p.acceptLoop(ctx)
	if ctx.Err() != nil {
		return ctx.Err()
	}
	return err
}

// acceptLoop takes a context that will be decorated with ConnInfo and passed down to new clients.
func (p *simpleServer) acceptLoop(ctx context.Context) error {
	for {
		conn, err := p.listener.Accept()
		if err != nil {
			select {
			case <-ctx.Done():
				return nil
			default:
				return err
			}
		}
		if conn == nil {
			continue
		}
		go func(ctx context.Context, conn net.Conn) {
			ctx = WithConnInfo(ctx, conn)
			if err := p.processRequests(ctx, conn); err != nil {
				p.log.Println("thrift: error processing request:", err)
			}
		}(ctx, conn)
	}
}

func (p *simpleServer) processRequests(ctx context.Context, conn net.Conn) error {
	protocol, err := NewHeaderProtocol(conn)
	if err != nil {
		return err
	}

	defer func() {
		if err := recover(); err != nil {
			p.log.Printf("panic in processor: %v: %s", err, debug.Stack())
		}
	}()
	defer protocol.Close()
	for {
		keepOpen, exc := processContext(ctx, p.processor, protocol)
		if exc != nil {
			protocol.Flush()
			return exc
		}
		if !keepOpen {
			break
		}
	}

	// graceful exit.  client closed connection
	return nil
}
