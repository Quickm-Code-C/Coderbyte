#include "Reverse.h"

std::string Reverse::FirstReverse(std::string str)
{
	std::reverse(str.begin(), str.end());

	return str;
}
