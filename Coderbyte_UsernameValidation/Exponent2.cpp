#include "Exponent2.h"

using namespace std;


std::string Exponent2::powersofTwo(int num)
{
	string result	= "false";
	bool   same		= false;

	same = ceil(log2(num)) == floor(log2(num));

	result = (same) ? "true" : "false";

	return result;
}



