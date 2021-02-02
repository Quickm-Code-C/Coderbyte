#include "TreeGraphs.h"
#include <vector>
#include <map>

using namespace std;

// For this challenge you will determine if an array of integer pairs can 
// form a binary tree properly.

// The function TreeConstructor(strArr) has a string array parameter strArr, 
// which will contain pairs of integers in the following format: (i1,i2), 
// where i1 represents a child node in a tree and the second integer i2 signifies 
// that it is the parent of i1. 

// For example: if strArr is ["(1,2)", "(2,4)", "(7,2)"] which you can see forms 
// a proper binary tree. Your program should, in this case, return the string true 
// because a valid binary tree can be formed. If a proper binary tree cannot be 
// formed with the integer pairs, then return the string false. All of the integers 
// within the tree will be unique, which means there can only be one node in the 
// tree with the given integer value.

std::string TreeGraphs::TreeConstructor(std::string strArr[], int length)
{
	bool					validTree = true;
	string					result;
	vector<string>			input(strArr, strArr + length);
	vector<pair<int, int>>	data;
	multimap<int, int>		parents;
	map<int, int>           childCount;
	int						root;

	data = parseInput(input);

	for (pair<int, int> item : data)
	{
		// parents[item.first] = item.second;
		multimap<int, int>::value_type  value(item.first, item.second);
		parents.insert(value);
		childCount[item.second]++;
	}

	// find root
	for (auto item : data)
	{
		map<int, int>::iterator iter;

		iter = parents.find(item.second);
		if (iter == parents.end())
		{
			root = item.second;
		}
	}

	validTree = (root != 0);

	// check for > 2 children
	for (auto item : childCount)
	{
		if (item.second > 2)
		{
			validTree = false;
		}
	}

	// check for child with multiple parents
	for (auto item : parents)
	{
		pair <multimap<int, int>::iterator, multimap<int, int>::iterator> result;
		result = parents.equal_range(item.first);

		if (std::distance(result.first, result.second) > 1)
		{
			validTree = false;
			break;
		}
	}

	result = (validTree) ? "true" : "false";

	return result;
}

std::vector<pair<int, int>> TreeGraphs::parseInput(std::vector<std::string> input)
{
	vector<pair<int, int>>	data;

	// parse input into data vector
	for (string str : input)
	{
		int num1, num2;
		pair<int, int>  temp;

		parseInputString(str, num1, num2);
		temp = make_pair(num1, num2);
		data.push_back(temp);
	}

	return data;
}

void TreeGraphs::parseInputString(std::string str, int & num1, int & num2)
{
	// assume correct structure
	// find comma -> substr-> trim '('
	// substr rest of str -> trim ')'

	string::size_type pos;
	string delimiter = string(",");
	string temp;

	// extract first number
	pos = str.find(delimiter);
	if (pos != string::npos)
	{// remove ( char
		temp = str.substr(1, pos);
		num1 = stoi(temp);
	}

	// extract 2nd number
	temp = str.substr(pos + 1, str.length() - 2);
	num2 = stoi(temp);
} 

//std::string s = "scott>=tiger>=mushroom";
//std::string delimiter = ">=";
//
//size_t pos = 0;
//std::string token;
//while ((pos = s.find(delimiter)) != std::string::npos) {
//	token = s.substr(0, pos);
//	std::cout << token << std::endl;
//	s.erase(0, pos + delimiter.length());
//}
//std::cout << s << std::endl;