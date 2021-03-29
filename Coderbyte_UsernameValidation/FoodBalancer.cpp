#include "FoodBalancer.h"
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int FoodBalancer::FoodDistribution(int arr[], int length)
{
    int             difference  = INT_MAX;
    int             count       = arr[0];
    vector<int>     data(arr + 1, arr + length);

    // Recursive design
    FindMinimumSum(data, count, difference);

    return difference;
}


bool FoodBalancer::FindMinimumSum(vector<int> data, int count,  int& minSum)
{
    bool    success    = false;
    int     dataSize   = data.size();
    int     diff       = CalculateDiffSum(data);

    if (diff < minSum)
    {
        minSum = diff;
        if (minSum == 0)
        {
            success = true;
        }
    }

    if (count > 0 && !success)
    {
        for (int i = 0; i < dataSize; i++)
        {
            if (data[i] > 0)
            {
                data[i]--;
                success = FindMinimumSum(data, count - 1, minSum);
                data[i]++;
            }

            if (success == true)
            {
                break;
            }
        }
    }

    return success;
}


int FoodBalancer::CalculateDiffSum(vector<int> data)
{
    int diffSum = 0;

    for (unsigned int i = 0; i < data.size() - 1; i++)
    {
        diffSum += abs(data[i + 1] - data[i]);
    }

    return diffSum;
}




