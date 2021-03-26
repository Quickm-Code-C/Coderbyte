#include "MathZeroSum.h"
#include <vector>
#include <algorithm>

using namespace std;

std::string MathZeroSum::PlusMinus(int num)
{
    string      result;
    
    // Convert int parameter to vector 
    string numstr = to_string(num);
    vector<int> digits;

    transform(numstr.begin(), numstr.end(), back_inserter(digits),
              [] (const char d) 
            { 
                return MathZeroSum::ConvertToInt(d);
            });

    int length = digits.size();
    string opStr;

    CheckSum(digits, 1, digits[0], "", result);
    if (result.empty())
    {
        result = "not possible";
    }


    return result;
}

void MathZeroSum::CheckSum(const vector<int>& data, int pos, int sum, string currentOp, string& result)
{
    if (result.empty())
    {
        if (pos != data.size())
        {
            currentOp += "-";
            CheckSum(data, pos + 1, sum - data[pos], currentOp, result);

            currentOp[pos - 1] = '+';
            CheckSum(data, pos + 1, sum + data[pos], currentOp, result);
        }

        else
        {
            if (sum == 0)
            {
                result = currentOp;
            }
        }
    }
}

int MathZeroSum::ConvertToInt(char c)
{
    int                 value = 0;
    string::size_type   sz;

    value = stoi(string(&c), &sz);

    return value;
}

