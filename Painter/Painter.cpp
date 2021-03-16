#include "pch.h"
#include <iostream>

int main()
{
	DebugLogger logger;
	logger.info(FUNC, LINE, "strat program");
    std::cout << "Hello World!\n"; 

	logger.info(FUNC, LINE, "end program");

	logger.warning(FUNC, LINE, "test waring");
	logger.error(FUNC, LINE, "test error");

	return 0;
}
