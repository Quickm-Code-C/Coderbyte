#pragma once
#include <string>
#include <vector>

class StringIntersection
{
public:
	std::string FindIntersection(std::string strArr[]);

protected:
	void tokenize(std::string const & str, const char delim, std::vector<std::string>& out);
	void tokenizeInt(std::string const & str, const char delim, std::vector<int>& out);

};

