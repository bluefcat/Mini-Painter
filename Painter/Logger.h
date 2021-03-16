#pragma once
#include <string>

class Logger {
protected:
	/*
		log_format's infomation 
		%{datetime}: format for current time
		%{message}: format for message
		%{level}: format for log level

		Example:
			%{datetime}[%{level}]: %{message}
			2021-03-16 02:22:30 [INFO]: Hello, World!
	*/
	std::string log_format = "%{datetime} [%{level}]: %{message}\n";

public:
	virtual void set_format(const std::string&);
	virtual void info(const std::string&) = 0;
	virtual void waring(const std::string&) = 0;
	virtual void error(const std::string&) = 0;

protected:
	std::string get_log(const std::string&, const std::string&);
};