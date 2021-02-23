#pragma once

#include <string>
class SquareVowels
{
public:
    std::string VowelSquare(std::string arr[], int length);
protected:
    bool IsVowel(const char c);
};

