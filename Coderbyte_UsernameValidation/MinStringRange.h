#pragma once
#include <string>
#include <vector>
#include <map>

class MinStringRange
{
public:
	std::string minWindowSubstring(std::string strArr[], int arrLength);
protected:
	std::map<char, int>		         createCountMap(const std::string s);
	std::vector<std::string>		 extractWindows(const std::string str, int length);
	bool					         isValidWindow(const std::string window, std::map<char, int> patternMap);
};

