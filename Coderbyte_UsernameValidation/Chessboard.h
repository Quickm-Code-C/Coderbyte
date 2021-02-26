#pragma once
#include <string>


class Chessboard
{
public:
	int ChessboardTraveling(std::string str);

protected:
	int ComputeUniqueWays(const int k, const int n);
};

