#include "Alphabet.h"
#include <algorithm>

using namespace std;

// Have the function AlphabetSoup(str) take the str string parameter being 
// passed and return the string with the letters in alphabetical order (ie. 
// hello becomes ehllo). Assume numbers and punctuation symbols will not 
// be included in the string.

std::string Alphabet::AlphabetSoup(std::string str)
{
	std::sort(str.begin(), str.end());

	return str;
}
