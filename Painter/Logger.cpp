#include "pch.h"

#include <ctime>
#include "Logger.h"

void Logger::set_format(const std::string& format) {
	log_format = format;
}

std::string Logger::get_log(const std::string& level, const std::string& message) {


	char buffer[1024];
	time_t rawtime;
	struct tm* ptm = new struct tm();
	time(&rawtime);
	localtime_s(ptm, &rawtime);
	snprintf(buffer, 1024, "%04d-%02d-%02d %02d:%02d:%02d", ptm->tm_year + 1900, ptm->tm_mon + 1, ptm->tm_mday, ptm->tm_hour, ptm->tm_min, ptm->tm_sec);


	delete ptm;

	std::string result(buffer);
	result += " [" + level + "]: ";
	result += message;

	return result;
}