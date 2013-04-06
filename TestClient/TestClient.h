#pragma once

#include "SIOClient.h"
#include "SIOEventTarget.h"
#include "Poco/BasicEvent.h"
#include "Poco/EventArgs.h"

using Poco::BasicEvent;
using Poco::EventArgs;

class TestClient :
	public SIOClient, SIOEventTarget
{
public:
	TestClient(int port, std::string host);
	~TestClient() {};

	void onUpdate(const void* pSender, Object::Ptr& arg);

};

