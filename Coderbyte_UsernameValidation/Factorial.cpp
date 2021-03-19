#include "Factorial.h"

// Have the function FirstFactorial(num) take the num parameter being passed and 
// return the factorial of it. For example: if num = 4, then your program should 
// return (4 * 3 * 2 * 1) = 24. For the test cases, the range will be between 1 
// and 18 and the input will always be an integer.

int Factorial::FirstFactorial(int num)
{
    int result = 0;

    if (num == 0)
    {
        result = 1;
    }

    else
    {
        result = num * FirstFactorial(num - 1);
    }


	return result;
}
