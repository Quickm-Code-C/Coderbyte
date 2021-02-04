#pragma once

#include <string>

class MathProduct
{
public:
	int			productDigits(int num);
	std::string otherProducts(int arr[], int length);
protected:
	int computeProduct(int arr[], int length, int index);
};

