#pragma once

#include <string>
#include <map>

class NumberEncoder
{
public:
	std::string NumberEncoding(std::string str);
protected:
	std::map<char, int>	createAlphabetMap();
};

