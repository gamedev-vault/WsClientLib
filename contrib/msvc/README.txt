Building instructions for the WsClientLib using MSVC Toolchain
==============================================================

This directory contains projects that build WsClientLib using
Microsoft Visual C++ toolchain.

You will need to add mbedTLS include directory to Additional Include Directories and mbedTLS library directory to Additional Library Directories. mbedTLS library files are already added in Additional Dependencies.

Build instructions for Visual Studio 2012 (32 bits or 64 bits)
--------------------------------------------------------------
- Open contrib\msbc\vc11\WsClientLib.vcxproj with Microsoft Visual C++ 2012
- or run msbuild WsClientLib.vcxproj /p:Configuration=Release /p:Platform=Win32
