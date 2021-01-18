#pragma once
#include <string>
#include <vector>
class Determinant
{
public:
	int MatrixDeterminant(std::string   strArr[], int size);

protected:
	bool isSquareMatrix(std::vector<std::vector<int>> & matrix);
	void parseMatrix(std::string * strArr, int size, std::vector<std::vector<int>> & matrix);
	int  computeDeterminant(std::vector < std::vector<int>> & matrix);

};

