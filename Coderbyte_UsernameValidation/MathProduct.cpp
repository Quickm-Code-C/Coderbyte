#include "MathProduct.h"
#include <string>
#include <algorithm>

using namespace std;

// Challenge
// function ProductDigits(num) has a num parameter, which is a aositive integer.  
// Determine the least amount of digits you need to multiply to produce the 
// value .

// For example : if num is 24 then you can multiply 8 by 3 which produces 24, 
// so your program should return 2 because there is a total of only 2 digits 
// that are needed.

// Another example : if num is 90, you can multiply 10 * 9, so in this case 
// your program should output 3 because you cannot reach 90 without using a 
// total of 3 digits in your multiplication.

//Sample Test Cases
//Input : 6
//	Output : 2
//	Input : 23
//	Output : 3

int MathProduct::productDigits(int num)
{
	int		result		= to_string(num).size() + 1;
	int		factor;

	for (int index = 1; index <= sqrt(num); index++) 
	{
		// Is index a factor of num
		if (num % index == 0) 
		{
			factor = num / index;

			result = min(result, int(to_string(index).size() + to_string(factor).size()));
		}
	}

	return result;
}

