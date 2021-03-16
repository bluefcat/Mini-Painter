#pragma once
#include "Logger.h"

class DebugLogger : public Logger {
public:
	virtual void info(const std::string&, int, const std::string&);
	virtual void warning(const std::string&, int, const std::string&);
	virtual void error(const std::string&, int, const std::string&);
};
