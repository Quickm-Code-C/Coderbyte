#pragma once

#include <vector>

class PrimeNumber
{
public:
	int PrimeMover(unsigned int num);

protected:
	std::vector<int>	prefillPrimeVector();
	bool				isPrimeNumber(int n, std::vector<int> & primes);
};

