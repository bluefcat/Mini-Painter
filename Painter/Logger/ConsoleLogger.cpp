#include "pch.h"

#include <iostream>
#include "Logger/ConsoleLogger.h"

void ConsoleLogger::info(const std::string& func_name, int line, const std::string& message) {
	std::cout << Logger::get_log("INFO", func_name, line, message) +"\n";
	return;
}

void ConsoleLogger::warning(const std::string& func_name, int line, const std::string& message) {
	std::cout << Logger::get_log("WARING", func_name, line, message) + "\n";
	return;
}

void ConsoleLogger::error(const std::string& func_name, int line, const std::string& message) {
	std::cout <<  Logger::get_log("ERROR", func_name, line, message) + "\n";
	return;
}