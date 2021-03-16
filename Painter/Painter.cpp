#include "pch.h"
#include <iostream>

int main()
{
	ConsoleLogger logger;
	logger.info(FUNC, LINE, "strat program");
    std::cout << "Hello World!\n"; 
	std::cout << FUNC << "(" << LINE << ")\n";
	logger.info(FUNC, LINE, "end program");

	logger.waring(FUNC, LINE, "test waring");
	logger.error(FUNC, LINE, "test error");
	return 0;
}
