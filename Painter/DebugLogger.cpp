#include "pch.h"

#include <iostream>
#include <Windows.h>
#include "DebugLogger.h"

void DebugLogger::info(const std::string& func_name, int line, const std::string& message) {
	OutputDebugStringA((Logger::get_log("INFO", func_name, line, message) + "\n").c_str());
	return;
}

void DebugLogger::waring(const std::string& func_name, int line, const std::string& message) {
	OutputDebugStringA((Logger::get_log("INFO", func_name, line, message) + "\n").c_str());
	return;
}

void DebugLogger::error(const std::string& func_name, int line, const std::string& message) {
	OutputDebugStringA((Logger::get_log("INFO", func_name, line, message) + "\n").c_str());
	return;
}