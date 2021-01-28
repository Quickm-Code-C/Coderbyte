#pragma once

#include <string>

class MathSequence
{
public:
	std::string ArithGeo(int arr[], const int length);
protected:
	bool		isArithematicSequence(int arr[], const int length);
	bool		isGeometricSequence(int arr[], const int length);

};

