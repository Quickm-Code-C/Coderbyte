#include "MedianMovement.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string MedianMovement::movingMedian(int arr[], const int length)
{
	string			result;
	vector<int>		nums;
	unsigned int	windowSize	= arr[0];
	int				median		= 0;

	for (int i = 1; i < length; i++) 
	{
		nums.push_back(arr[i]);
		if (nums.size() > windowSize)
		{
			nums.erase(nums.begin(), nums.begin() + 1);
		}

		median = calculateMedian(nums);
		result += to_string(median) + ",";
	}

	result.pop_back();

	return result;
}

int MedianMovement::calculateMedian(std::vector<int> values)
{
	int median	= 0;
	int half	= values.size() / 2;

	sort(values.begin(), values.end());

	median = (values.size() % 2 == 0) ? (values[half - 1] + values[half]) / 2
		                             : values[half];

	return median;
}
