#include "Fibonacci.h"


using namespace std;

std::string Fibonacci::FibonacciChecker(int num)
{
	string result;
	bool   isFibonacci = false;

	isFibonacci = isValidFibonacci(1, 1, num);

	result = (isFibonacci) ? "yes" : "no";

	return result;
}

bool Fibonacci::isValidFibonacci(int x, int y, int num)
{
	bool   isFibonacci = false;

	if (num == 0 || num == 1) 
	{
		isFibonacci = true;
	}

	else if (x + y == num) 
	{
		isFibonacci = true;
	}

	else if (x + y < num) 
	{
		isFibonacci = isValidFibonacci(x + y, x, num);
	}

	else
	{
		isFibonacci = false;
	}

	return isFibonacci;
}
