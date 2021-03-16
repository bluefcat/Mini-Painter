#include "pch.h"

#include <iostream>
#include <Windows.h>
#include "Logger/DebugLogger.h"

void DebugLogger::info(const std::string& func_name, int line, const std::string& message) {
	OutputDebugStringA((Logger::get_log("INFO", func_name, line, message) + "\n").c_str());
	return;
}

void DebugLogger::warning(const std::string& func_name, int line, const std::string& message) {
	OutputDebugStringA((Logger::get_log("WRANING", func_name, line, message) + "\n").c_str());
	return;
}

void DebugLogger::error(const std::string& func_name, int line, const std::string& message) {
	OutputDebugStringA((Logger::get_log("ERROR", func_name, line, message) + "\n").c_str());
	return;
}