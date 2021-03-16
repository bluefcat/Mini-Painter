#include "pch.h"
#include <iostream>

int main()
{
	ConsoleLogger logger;
	logger.info("strat program");
    std::cout << "Hello World!\n"; 
	logger.info("end program");

	logger.waring("test waring");
	logger.error("test error");
	return 0;
}
