// sampleclient - basic client app demonstrating how to use WsClientLib library.
//

#include "stdafx.h"
#include <iostream>

#include "WsClientLib.hpp"

void OnErrorCallback(const WsClientLib::WSError& err, void * pUserData)
{
	std::cout << "error code: " << err.code << ", error: " << err.message << std::endl;
}

void OnWebSocketCallback(const std::string& message, void* pUserData)
{
	std::cout << "message: " << message << std::endl;
}

WsClientLib::WebSocket::pointer pWebsock = nullptr;

int main(int argc, char* argv[])
{
	using namespace WsClientLib;

	pWebsock = WebSocket::from_url("<wss://yourwebsockethost.com:port/path/to/endpoint>", "");

	pWebsock->connect();

	while (pWebsock->getReadyState() != WebSocket::readyStateValues::CLOSED) {
		WebSocket::pointer wsp = pWebsock;
		
		pWebsock->poll(0, OnErrorCallback, nullptr);
        pWebsock->dispatch(OnWebSocketCallback, OnErrorCallback, nullptr);
    }

	std::cout << "Done." << std::endl;

	return 0;
}

