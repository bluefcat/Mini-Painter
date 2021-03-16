#include "pch.h"

#include <iostream>
#include "ConsoleLogger.h"

void ConsoleLogger::info(const std::string& message) {
	std::cout << Logger::get_log("INFO", message) +"\n";
	return;
}

void ConsoleLogger::waring(const std::string& message) {
	std::cout << Logger::get_log("WARING", message) + "\n";
	return;
}

void ConsoleLogger::error(const std::string& message) {
	std::cout <<  Logger::get_log("ERROR", message) + "\n";
	return;
}