#include "Symbols.h"
#include <cctype>

using namespace std;

// Have the function SimpleSymbols(str) take the str parameter being passed and 
// determine if it is an acceptable sequence by either returning the string true 
// or false. The str parameter will be composed of + and = symbols with several 
// characters between them (ie. ++d+===+c++==a) and for the string to be true 
// each letter must be surrounded by a + symbol. So the string to the left would 
// be false. The string will not be empty and will have at least one letter.

std::string Symbols::SimpleSymbols(std::string str)
{
	string result = "false";
    bool   found  = false;
    int    length = str.length();

	for (int index = 0; index < length &&  !found; ++index)
	{
		if (isalpha(str[index])) 
		{
			if ((index == 0) && (index == length - 1))
			{ 
				break;
			}
			else if (index != 0  &&
                     index != length-1 &&
                     str[index - 1] == '+' && 
                     str[index + 1] == '+') 
			{
                found = true;
			}
		}

        result = found ? "true" : "false";

	}
	return result;
}
