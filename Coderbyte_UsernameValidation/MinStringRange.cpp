#include "MinStringRange.h"
#include <iostream>

using namespace std;

// Have the function MinWindowSubstring(strArr) take the array of strings stored
// in strArr, which will contain only two strings, the first parameter being the 
// string N and the second parameter being a string K of some characters, and your 
// goal is to determine the smallest substring of N that contains all the characters 
// in K. 
//
// For example: if strArr is ["aaabaaddae", "aed"] then the smallest substring of N 
// that contains the characters a, e, and d is "dae" located at the end of the string. 
// So for this example your program should return the string dae.

// Another example: if strArr is ["aabdccdbcacd", "aad"] then the smallest substring 
// of N that contains all of the characters in K is "aabd" which is located at the 
// beginning of the string. Both parameters will be strings ranging in length from 
// 1 to 50 characters and all of K's characters will exist somewhere in the string N. 
// Both strings will only contains lowercase alphabetic characters.

// Examples
// Input: {"ahffaksfajeeubsne", "jefaa"}
// Output: aksfaje

// Input: {"aaffhkksemckelloe", "fhea"}
// Output: affhkkse



std::string MinStringRange::minWindowSubstring(std::string strArr[], int arrLength)
{
	string result;
	string text		= strArr[0];
	string pattern	= strArr[1];

	map<char, int>			countMap = createCountMap(pattern);
	vector<string>			windows  = extractWindows(text, pattern.length());

	for (const string window : windows) 
	{
		if (isValidWindow(window, countMap)) 
		{
			if (result.empty()) 
			{
				result = window;
			}
			else if (window.length() < result.length()) 
			{
				result = window;
			}
		}
	}

	return result;
}

map<char, int> MinStringRange::createCountMap(const string str)
{
	map<char, int> countMap;

	for (char c : str) {
		countMap[c]++;
	}

	return countMap;
}

vector<string> MinStringRange::extractWindows(const string str, int length) 
{
	vector<string> windows = vector<string>();
	int strLength = str.length();


	for (int start = 0; start < strLength; start++) 
	{
		for (int end = start + length; end < strLength + 1; end++) 
		{
			windows.push_back(str.substr(start, end - start));
		}
	}

	return windows;
}

bool MinStringRange::isValidWindow(const string window, map<char, int> patternMap) 
{
	bool			isValid		= true;
	const map<char, int>	windowMap	= createCountMap(window);

	for (map<char, int>::iterator it = patternMap.begin(); it != patternMap.end(); ++it)
	{
		const auto key = it->first;
		const auto val = it->second;

		if (windowMap.find(key) == windowMap.end() || windowMap.at(key) < val)
		{
			isValid = false;
		}
	}

	return isValid;
}
