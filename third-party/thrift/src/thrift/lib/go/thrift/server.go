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
	"net"
)

// Server is a thrift server
type Server interface {
	// Deprecated: Listen is replaced by Addr method
	Listen() (net.Addr, error)
	// Addr returns the address the server is listening on.
	Addr() net.Addr
	// Serve starts the server
	Serve() error
	// ServeContext starts the server, and stops it when the context is cancelled
	ServeContext(ctx context.Context) error
	// Stop stops the server. This is optional on a per-implementation basis. Not
	// all servers are required to be cleanly stoppable.
	Stop() error
}
