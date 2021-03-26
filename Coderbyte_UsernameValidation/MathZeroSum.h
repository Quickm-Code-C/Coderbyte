#pragma once

#include <string>
#include <vector>

class MathZeroSum
{
    public:
        std::string PlusMinus(int num);


    private:
        void        CheckSum(const std::vector<int>& v, int pos, int sum, std::string currentOp, std::string & result);

        static int  ConvertToInt(char c);
};

