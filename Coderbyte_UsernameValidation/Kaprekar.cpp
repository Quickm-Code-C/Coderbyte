#include "Kaprekar.h"
#include <vector>
#include <algorithm>

using namespace std;

// Have the function KaprekarsConstant(num) take the num parameter being passed 
// which will be a 4-digit number with at least two distinct digits. Your program 
// should perform the following routine on the number: Arrange the digits in 
// descending order and in ascending order (adding zeroes to fit it to a 4-digit 
// number), and subtract the smaller number from the bigger number. Then repeat 
// the previous step. Performing this routine will always cause you to reach a 
// fixed number: 6174. Then performing the routine on 6174 will always give you 
// 6174 (7641 - 1467 = 6174). Your program should return the number of times 
// this routine must be performed until 6174 is reached. For example: if num is 
// 3524 your program should return 3 because of the following steps: (1) 5432 - 
// 2345 = 3087, (2) 8730 - 0378 = 8352, (3) 8532 - 2358 = 6174.

int Kaprekar::KaprekarsConstant(int num)
{
	int r = num;
	int count = 0;

	while (r != 6174) {
		r = descendInt(r) - ascendInt(r);
		count++;
	}

	return count;
}

int Kaprekar::ascendInt(int num)
{
	int arr[4];
	int temp = num;

	arr[0] = temp / 1000;  temp -= arr[0] * 1000;
	arr[1] = temp / 100;   temp -= arr[1] * 100;
	arr[2] = temp / 10;    temp -= arr[2] * 10;
	arr[3] = temp;

	std::vector<int> ints(arr, arr + 4);
	sort(ints.begin(), ints.end());

	return ints[0] * 1000 + ints[1] * 100 + ints[2] * 10 + ints[3];
}

int Kaprekar::descendInt(int num)
{
	int arr[4];
	int temp = num;

	arr[0] = temp / 1000;  temp -= arr[0] * 1000;
	arr[1] = temp / 100;   temp -= arr[1] * 100;
	arr[2] = temp / 10;    temp -= arr[2] * 10;
	arr[3] = temp;

	std::vector<int> ints(arr, arr + 4);
	sort(ints.begin(), ints.end(), std::greater<int>());

	return ints[0] * 1000 + ints[1] * 100 + ints[2] * 10 + ints[3];
}