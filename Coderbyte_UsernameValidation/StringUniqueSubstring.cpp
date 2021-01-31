#include "StringUniqueSubstring.h"
#include <map>

using namespace std;

// For this challenge you will be searching a string for a particular substring.
// have the function KUniqueCharacters(str) take the str parameter being passed 
// and find the longest substring that contains k unique characters, where k will 
// be the first character from the string. The substring will start from the second 
// position in the string because the first character will be the integer k. 

// For example: if str is "2aabbacbaa" there are several substrings that all contain 
// 2 unique characters, namely: ["aabba", "ac", "cb", "ba"], but your program should 
// return "aabba" because it is the longest substring. If there are multiple longest 
// substrings, then return the first substring encountered with the longest length. 
// k will range from 1 to 6.

std::string StringUniqueSubstring::KUniqueCharacters(std::string str)
{
	string				result;
	string				localStr = str.substr(1, str.length() - 1);
	int					uniqueLength = atoi(&str[0]);
	bool				done = false;
	int					substrLength = localStr.length();
	vector<string>		substrings;

	while (!done)
	{
		int		uniqueCount = 0;

		substrings = createSubstrings(localStr, substrLength);
		if (substrings.size() == 0)
		{
			continue;
		}

		for (string s : substrings) {
			uniqueCount = computeUniqueChars(s);
			if (uniqueCount == uniqueLength && s.length() > result.length())
			{
				result = s;
				done = true;
			}
		}

		substrings.clear();
		substrLength--;
	}


	return result;
}

int StringUniqueSubstring::computeUniqueChars(std::string str)
{
	int count = 1;
	map<char, int> charCount;

	for (char c : str)
	{
		charCount[c]++;
	}

	count = charCount.size();

	return count;
}

std::vector<std::string> StringUniqueSubstring::createSubstrings(std::string str, int length)
{
	vector<string>	substrings;
	int				strLength = str.length();

	if (length == strLength)
	{
		substrings.push_back(str);
	}

	else if (length < strLength)
	{
		string substr;

		for (int index = 0; index + length <= strLength; index++)
		{
			substr = str.substr(index, length);
			substrings.push_back(substr);
		}
	}

	return substrings;
}



