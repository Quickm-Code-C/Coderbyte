#pragma once

#include <string>

class StringReducer
{
public:
	int StringReduction(std::string str);
protected:
	std::string convertChar(char first, char second);
	bool		isDone(std::string str);
};

