#include "pch.h"

#include <assert.h>
#include "Logger.h"

Logger::Logger() {
	char buffer[1024] = { 0, };
	current_time(buffer, 1024);
	std::string name(buffer);
	
	log_file = new std::ofstream(name.substr(0, name.find(" "))+".log", std::ios::app);
	
}

Logger::~Logger() {
	if(log_file != nullptr) delete log_file;
}

void Logger::set_format(const std::string& format) {
	log_format = format;
}

std::string Logger::get_log(const std::string& level, const std::string& func_name, int line, const std::string& message) {

	std::string result = log_format;
	std::size_t f = std::string::npos;
	char buffer[1024] = { 0, };

	f = result.find("%{datetime}");
	if (f != std::string::npos) {
		current_time(buffer, 1024);
		result.replace(f, strlen("%{datetime}"), buffer);
	}

	f = result.find("%{line}");
	if (f != std::string::npos) {
		_itoa_s(line, buffer, 10);

		result.replace(f, strlen("%{line}"), buffer);
	}

	f = result.find("%{func}");
	if (f != std::string::npos)	result.replace(f, strlen("%{func}"), func_name);

	f = result.find("%{level}");
	if (f != std::string::npos) result.replace(f, strlen("%{level}"), level);

	f = result.find("%{message}");
	if (f != std::string::npos) result.replace(f, strlen("%{message}"), message);

	return result;
}