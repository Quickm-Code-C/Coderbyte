#pragma once

#include <string>
#include <vector>

class MedianMovement
{
public:
	std::string movingMedian(int arr[], const int length);
protected:
	int			calculateMedian(std::vector<int> values);
};

