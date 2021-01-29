#include "NumberEncoder.h"
#include <map>
#include <sstream>

using namespace std;

// For this challenge you will encode a given string following a specific rule.
// The function NumberEncoding(str) with str parameter and encode the 
// message according to the following rule: encode every letter into its 
// corresponding numbered position in the alphabet. Symbols and spaces will also 
// be used in the input. 

// For example: if str is "af5c a#!" then your program should return 1653 1#!. 
std::string NumberEncoder::NumberEncoding(std::string str)
{
	string			result;
	map<char, int>	alphabet;
	stringstream	ss;

	alphabet = createAlphabetMap();

	for(char item : str)
	{
		// is a letter
		if (isalpha(item)) {
			ss << alphabet[item];
		}

		// not a letter
		else
		{
			ss << item;
		}
	}

	result = ss.str();

	return result;
}

std::map<char, int> NumberEncoder::createAlphabetMap()
{
	map<char, int>	alpha;
	int				value = 1;

	for (char key = 'a'; key <= 'z'; key++, value++)
	{
		alpha[key] = value;
	}
	return alpha;
}
