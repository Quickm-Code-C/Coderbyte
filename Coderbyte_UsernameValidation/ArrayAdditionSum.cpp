#include "ArrayAdditionSum.h"
#include <vector>
#include <algorithm>

using namespace std;

std::string ArrayAdditionSum::ArrayAddition(int arr[], const int len)
{
    string       result;
    vector<int>  data(arr, arr + len);
    int          max;
    
    sort(data.begin(), data.end());

    // Get largest (last) value and remove it from vector
    max = data.back();
    data.pop_back();

    int length = data.size();
    bool valid = false;

    //Iterate thru data
    for (int i = 0; i < length; i++)
    {
        int total = data[i];
        for (int j = 0; j < length; j++)
        {
            if (i != j)
            {
                total += data[j];
                if (total == max)
                {
                    valid = true;
                    break;
                }
            }
        }

        
        for (int j = 0; j < length; j++)
        {
            if (i != j)
            {
                total -= data[j];
                if (total == max)
                {
                    valid = true;
                    break;
                }
            }
        }

    }

    result = valid ? "true" : "false";

    return result;
}
