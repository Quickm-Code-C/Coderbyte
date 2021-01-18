#include "Alphabet.h"
#include <algorithm>

using namespace std;

std::string Alphabet::AlphabetSoup(std::string str)
{
	std::sort(str.begin(), str.end());

	return str;
}
