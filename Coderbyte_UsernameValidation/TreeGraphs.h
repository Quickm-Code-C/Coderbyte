#pragma once

#include <string>
#include <vector>
#include <utility>

class TreeGraphs
{
public:
			std::string TreeConstructor(std::string strArr[], int length);

protected:
	std::vector<std::pair<int, int>>	parseInput(std::vector<std::string> input);
	void								parseInputString(std::string str, int & num1, int & num2);
};

