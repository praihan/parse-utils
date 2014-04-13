/*
 * main.cpp
 *
 *  Created on: Jan 21, 2014
 *      Author: Pranjal Raihan
 */

#include <iostream>
#include "parse.hpp"

int main(int argc, char** argv)
{
	typedef double numeric_t;

	numeric_t value;
	bool predicate;
	const char* str = "-4.01e-1";

	predicate = numerics::parse_fp<numeric_t>(str, &value);

	if (!predicate)
	{
		std::cout << "Parse failed" << std::endl;
	}
	else
	{
		std::cout << "Parsed: " << value << std::endl;
	}

	return 0;
}
