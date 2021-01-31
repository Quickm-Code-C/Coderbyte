#pragma once
#include <string>

class StringCompression
{
public:
	std::string		RunLength(std::string str);


protected:
	bool			isRepeatingChar(std::string, int index, int & count);
};

