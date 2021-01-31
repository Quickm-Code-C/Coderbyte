#include "StringCompression.h"
#include <sstream>

using namespace std;

// For this challenge you will determine the Run Length Encoding of a string.
// The function RunLength(str) take the str parameter being passed and return 
// a compressed version of the string using the Run-length encoding algorithm. 
// This algorithm works by taking the occurrence of each repeating character 
// and outputting that number along with a single character of the repeating 
// sequence. 

// For example: "wwwggopp" would return 3w2g1o2p. The string will not contain 
// any numbers, punctuation, or symbols. 
std::string StringCompression::RunLength(std::string str)
{
	string			result;
	int				length	= str.length();
	stringstream	ss;

	for (int index = 0; index < length; index++)
	{
		int count = 0;

		if (isRepeatingChar(str, index, count))
		{
			ss << to_string(count) << str[index];
			index += count-1;
		}

		else {
			ss << to_string(1) << str[index];
		}
	}

	result = ss.str();

	return result;
}

bool StringCompression::isRepeatingChar(std::string str, int index, int & count)
{
	bool repeating = false;
	int  length = str.length();
	count = 1;

	if (index != length - 1) 
	{
		while ((index < length - 1) && (str[index] == str[index + 1]))
		{
			count++;
			index++;
		}
	}

	repeating = (count > 1);

	return repeating;
}
