#pragma once

#include <string>

class Fibonacci
{
public:
	std::string FibonacciChecker(int num);

protected:
	bool		isValidFibonacci(int x, int y, int num);
};

