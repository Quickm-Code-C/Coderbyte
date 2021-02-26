#include "Chessboard.h"
#include <cstring>

using namespace std;

// Have the function ChessboardTraveling(str) read str which will be a string 
// consisting of the location of a space on a standard 8x8 chess board with 
// no pieces on the board along with another space on the chess board. The 
// structure of str will be the following: "(x y)(a b)" where (x y) represents 
// the position you are currently on with x and y ranging from 1 to 8 and 
// (a b) represents some other space on the chess board with a and b also 
// ranging from 1 to 8 where a > x and b > y. Your program should determine 
// how many ways there are of traveling from (x y) on the board to (a b) 
// moving only up and to the right. For example: if str is (1 1)(2 2) then your 
// program should output 2 because there are only two possible ways to travel 
// from space (1 1) on a chessboard to space (2 2) while making only moves up 
// and to the right.

int Chessboard::ChessboardTraveling(std::string str)
{
	int		x, y, a, b;
	char *	token	= nullptr;
	char *	data	= const_cast<char *>(str.c_str());
	char *  next    = nullptr;

	token = strtok_s(data, "( )", &next);	x = *token - '0';
	token = strtok_s(NULL, "( )", &next);	y = *token - '0';
	token = strtok_s(NULL, "( )", &next);	a = *token - '0';
	token = strtok_s(NULL, "( )", &next);	b = *token - '0';

	int row = a - x;
	int col = b - y;

	return Ckn(row, row + col);
}

int Chessboard::Ckn(const int k, const int n)
{
    int result = 0;

    auto nFact = factorial(n);
    auto kFact = factorial(k);
    auto nkFact = factorial(n - k);

	//int c = 1;
	//for (int i = n, j = 0; j < k; i--, j++)
	//{
	//	c *= i;
	//}

    result = nFact / (kFact * nkFact);

	//result =  c / factorial(k);

    return result;
}

int Chessboard::factorial(int num)
{
	int result = 1;

	result = (num <= 1) ? 1 : num * factorial(num - 1);

	return result;
}
