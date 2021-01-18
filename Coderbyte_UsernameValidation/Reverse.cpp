#include "Reverse.h"

// Have the function FirstReverse(str) take the str parameter being passed and 
// return the string in reversed order. For example: if the input string is 
// "Hello World and Coders" then your program should return the string 
// sredoC dna dlroW olleH.

std::string Reverse::FirstReverse(std::string str)
{
	std::reverse(str.begin(), str.end());

	return str;
}
