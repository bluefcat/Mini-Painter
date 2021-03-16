#include "pch.h"

#include <ctime>
#include "Logger.h"

void Logger::set_format(const std::string& format) {
	log_format = format;
}

std::string Logger::get_log(const std::string& level, const std::string& func_name, int line, const std::string& message) {

	std::string result = log_format;
	std::size_t f = std::string::npos;
	char buffer[1024] = { 0, };

	f = result.find("%{datetime}");
	if (f != std::string::npos) {
		time_t rawtime;
		struct tm ptm;
		time(&rawtime);
		localtime_s(&ptm, &rawtime);
		snprintf(buffer, 1024, "%04d-%02d-%02d %02d:%02d:%02d",
			ptm.tm_year + 1900, ptm.tm_mon + 1, ptm.tm_mday, ptm.tm_hour, ptm.tm_min, ptm.tm_sec);

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