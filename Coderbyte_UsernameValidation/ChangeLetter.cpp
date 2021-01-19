#include "ChangeLetter.h"
#include <cctype>
using namespace std;

// Have the function LetterChanges(str) take the str parameter being passed and 
// modify it using the following algorithm. Replace every letter in the string 
// with the letter following it in the alphabet (ie. c becomes d, z becomes a). 
// Then capitalize every vowel in this new string (a, e, i, o, u) and finally 
// return this modified string.

std::string ChangeLetter::LetterChanges(std::string str)
{
	// 1st increment ascii value, wrap z to a
	// 2nd capitalize vowels  // std::locale loc; std::toupper(str[i],loc);
	for (std::string::size_type i = 0; i < str.length(); ++i) {
		
		if (str[i] >= 'a' && str[i] < 'z') {
			str[i]++;
		}
		else if (str[i] == 'z') {
			str[i] = 'a';
		}

		// Convert vowel to upper case
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
			str[i] == 'o' || str[i] == 'u') {
			str[i] = std::toupper(str[i]);
		}
	}

	return str;
}
