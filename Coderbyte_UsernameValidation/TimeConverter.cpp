#include <iostream>
#include <sstream>
#include "TimeConverter.h"

using namespace std;

// Have the function TimeConvert(num) take the num parameter being passed and 
// return the number of hours and minutes the parameter converts to (ie. if 
// num = 63 then the output should be 1:3). Separate the number of hours 
// and minutes with a colon.

std::string TimeConverter::TimeConvert(int num)
{
	int hours = num / 60;
	int minutes = num % 60;

	stringstream ss;

	ss << hours;
	ss << ":";
	ss << minutes;

	return ss.str();
}
