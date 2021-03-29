#pragma once
#include <vector>

class FoodBalancer
{
    public:
        int     FoodDistribution(int arr[], int length);

    protected:
        bool    FindMinimumSum(const std::vector<int> data, int count, int & minSum);
        int     CalculateDiffSum(std::vector<int> data);
};

