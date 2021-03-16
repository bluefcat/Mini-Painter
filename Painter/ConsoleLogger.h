#pragma once
#include "Logger.h"

class ConsoleLogger : public Logger {
public:
	virtual void info(const std::string&);
	virtual void waring(const std::string&);
	virtual void error(const std::string&);
};