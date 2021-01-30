#include "PrimeNumber.h"

using namespace std;

// For this challenge you will be returning a certain prime number.
// The function PrimeMover(num) returns the numth prime number. 
// The range will be from 1 to 10^4. 
// For example: if num is 16 the output should be 53 as 53 is 
// the 16th prime number.
int PrimeNumber::PrimeMover(unsigned int num)
{
	int				primeValue	= 1;
	bool			found		= false;
	vector<int>		primes		= prefillPrimeVector();
	int				index		= primes.size();

	if (primes.size() >= num)
	{
		primeValue = primes[num - 1];
		found = true;
	}

	while (primes.size() < num)
	{
		bool	isPrime = false;
		
		index++;
		isPrime = isPrimeNumber(index, primes);
		if (isPrime)
		{
			primes.push_back(index);
			if (primes.size() == num)
			{
				found = true;
				break;
			}
		}
	}

	if (found)
	{
		primeValue = primes[num - 1];
	}

	return primeValue;
}

// Prefill vector with prime numbers up to 20
vector<int> PrimeNumber::prefillPrimeVector()
{
	vector<int>		primes;

	primes.push_back(2);
	primes.push_back(3);
	primes.push_back(5);
	primes.push_back(7);
	primes.push_back(11);
	primes.push_back(13);
	primes.push_back(17);
	primes.push_back(19);

	return primes;
}

bool PrimeNumber::isPrimeNumber(int num, std::vector<int>& primes)
{
	bool	result = true;

	for (int index : primes)
	{
		if (num % index == 0)
		{
			result = false;
			break;
		}
	}

	return result;
}
