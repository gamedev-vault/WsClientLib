# WsClientLib
Websocket Client Library

## Motivation

The main motivation behind the library is to create a simple Websocket client library working out-of-the-box on Windows environment. There are other Websocket libraries but they are either bloated due to including server code or Windows environment is neglected and frequently doesn't build right-away. 

## Dependencies

The library's aim is to minimize external dependencies. The only external dependency is the TLS library.

## Building

To build the library use VC project file from the specific contrib subdirectory (for now VC11 project file is included, but other should work as well after upgrading from any newer Visual Studio). Please follow contrib/msvc/README.txt for further instructions, as you'll need to define mbedTLS include and binary files for the project to build.
