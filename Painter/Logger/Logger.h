#pragma once
#include <string>
#include <fstream>

class Logger {
protected:
	/*
		log_format's infomation 
		%{datetime}: current time
		%{level}: log level
		%{func} : function name
		%{line} : line on function
		%{message}: message

		Example:
			%{datetime} [%{level}] %{func}(%{line}): %{message}
			2021-03-16 02:22:30 [INFO] main(5): Hello, World!
	*/
	std::string log_format = "[%{datetime}] [%{level}]\t%{func}(%{line}): %{message}";
	std::ofstream* log_file;

public:
	Logger();
	~Logger();
	virtual void set_format(const std::string&);
	virtual void info(const std::string&, int, const std::string&) = 0;
	virtual void warning(const std::string&, int, const std::string&) = 0;
	virtual void error(const std::string&, int, const std::string&) = 0;

protected:
	std::string get_log(const std::string&, const std::string&, int, const std::string&);
};