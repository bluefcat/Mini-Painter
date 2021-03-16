#include "pch.h"

#include <iostream>
#include <Windows.h>
#include "DebugLogger.h"

void DebugLogger::info(const std::string& func_name, int line, const std::string& message) {
	std::string log_message = Logger::get_log("INFO", func_name, line, message) + "\n";
	OutputDebugStringA(log_message.c_str());
	(*log_file) << log_message;
	return;
}

void DebugLogger::warning(const std::string& func_name, int line, const std::string& message) {
	std::string log_message = Logger::get_log("WARNING", func_name, line, message) + "\n";
	OutputDebugStringA(log_message.c_str());
	(*log_file) << log_message;
	return;
}

void DebugLogger::error(const std::string& func_name, int line, const std::string& message) {
	std::string log_message = Logger::get_log("ERROR", func_name, line, message) + "\n";
	OutputDebugStringA(log_message.c_str());
	(*log_file) << log_message;
	return;
}