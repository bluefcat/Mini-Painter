#include "pch.h"

#include <ctime>
#include <iostream>
#include "util.h"

void current_time(char* buffer, int size) {
	time_t rawtime;
	struct tm ptm;
	time(&rawtime);
	localtime_s(&ptm, &rawtime);
	snprintf(buffer, size, "%04d-%02d-%02d %02d:%02d:%02d",
		ptm.tm_year + 1900, ptm.tm_mon + 1, ptm.tm_mday, ptm.tm_hour, ptm.tm_min, ptm.tm_sec);

	return;
}
