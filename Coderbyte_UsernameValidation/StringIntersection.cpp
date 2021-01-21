#include "StringIntersection.h"
#include <vector>
#include <sstream>

using namespace std;

// Have the function FindIntersection(strArr) read the array of strings stored 
// in strArr which will contain 2 elements: the first element will represent a 
// list of comma - separated numbers sorted in ascending order, the second 
// element will represent a second list of comma - separated numbers(also sorted).
// Your goal is to return a comma - separated string containing the numbers that 
// occur in elements of strArr in sorted order.If there is no intersection, 
// return the string false.

// For example : if strArr contains["1, 3, 4, 7, 13", "1, 2, 4, 13, 15"] the 
// output should return "1,4,13" because those numbers appear in both strings.
// The array given will not be empty, and each string inside the array will be 
// of numbers sorted in ascending order and may contain negative numbers.

std::string StringIntersection::FindIntersection(std::string strArr[])
{
	string result;
	vector<int> first;
	vector<int> second;

	// convert to vector of ints
	tokenizeInt(strArr[0], ',', first);
	tokenizeInt(strArr[1], ',', second);

	// check for matches
	vector<int>  match;
	for (unsigned int i = 0; i < first.size(); i++)
	{
		for (unsigned int j = 0; j < second.size(); j++)
			if (first[i] == second[j])
			{
				match.push_back(first[i]);
			}
	}

	// convert matches to string
	stringstream ss;
	if (match.size() != 0)
	{
		for (int item : match)
		{
			ss << to_string(item);
			if (item != match[match.size() - 1])
			{
				ss << ',';
			}
		}

		result = ss.str();
	}

	else
	{
		result = "false";
	}

	return result;
}

void StringIntersection::tokenize(std::string const & str, const char delim, 
								  std::vector<std::string>& out)
{
	// construct a stream from the string
	std::stringstream ss(str);

	std::string s;
	while (std::getline(ss, s, delim)) {
		out.push_back(s);
	}

}

void StringIntersection::tokenizeInt(std::string const & str, const char delim, 
	                                 std::vector<int>& out)
{
	// construct a stream from the string
	std::stringstream ss(str);

	string				s;
	string::size_type	sz;   // alias of size_t
	int					value;

	while (std::getline(ss, s, delim)) {
		value = std::stoi(s, &sz);
		out.push_back(value);
	}
}
