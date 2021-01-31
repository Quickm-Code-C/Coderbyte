#pragma once
#include <string>
#include <vector>

class StringUniqueSubstring
{
public:
	std::string					KUniqueCharacters(std::string str);

protected:
	int							computeUniqueChars(std::string str);
	std::vector<std::string>	createSubstrings(std::string str, int length);
};

