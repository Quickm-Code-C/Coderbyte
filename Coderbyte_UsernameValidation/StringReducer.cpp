#include "StringReducer.h"
#include <iostream>
#include <sstream>

using namespace std;

// For this challenge you will manipulate a string of characters using a simple 
// reduction method.

// The function StringReduction(str) take the str parameter being passed and 
// return the smallest number you can get through the following reduction 
// method. The method is: Only the letters a, b, and c will be given in str and 
// you must take two different adjacent characters and replace it with the third. 

// For example "ac" can be replaced with "b" but "aa" cannot be replaced with 
// anything. This method is done repeatedly until the string cannot be further 
// reduced, and the length of the resulting string is to be outputted. 

// For example: if str is "cab", "ca" can be reduced to "b" and you get "bb" (you 
// can also reduce it to "cc"). The reduction is done so the output should be 2. 
// If str is "bcab", "bc" reduces to "a", so you have "aab", then "ab" reduces to 
// "c", and the final string "ac" is reduced to "b" so the output should be 1. 

int StringReducer::StringReduction(std::string str)
{
	int		result		= -1;
	string	localStr	= str;
	int		length		= str.length();
	bool	done		= false;

	if (length == 1)
	{
		result = 1;
	}

	else if (length == 2)
	{
		string	temp = convertChar(str[0], str[1]);
		result = temp.length();
	}

	else 
	{
		while (!done)
		{
			string temp;
            int    length = localStr.length();
			cout << "Reduction: " << localStr;
			for (int index = 0; index < length - 1 && !done; index++)
			{
				temp = convertChar(localStr[index], localStr[index + 1]);

				// remove chars
				localStr.erase(index, 2);

				// replace chars
				localStr.insert(index, temp);
				cout << " --> " << localStr;

				// check if end criteria met
				done = isDone(localStr);
			}

			cout << endl;

			if (done)
			{
				result = localStr.length();
			}

			else
			{
				cout << "Need another iteration" << endl;
			}
		}
	}
	
	return result;
}

std::string StringReducer::convertChar(char first, char second)
{
	string result;

	if (first == second) 
	{
		stringstream ss;

		ss << first;
		ss << second;

		result = ss.str();;
	}

	else
	{
		if ((first == 'a' && second == 'b') ||
			(first == 'b' && second == 'a'))
		{
			result = "c";
		}

		else if ((first == 'a' && second == 'c') ||
			     (first == 'c' && second == 'a'))
		{
			result = "b";
		}

		else if ((first == 'b' && second == 'c') ||
			(first == 'c' && second == 'b'))
		{
			result = "a";
		}
	}

	return result;
}

bool StringReducer::isDone(std::string str)
{
	bool	done	= false;
	int		length	= str.length();

	if (length == 1)
	{
		done = true;
	}

	else
	{
		done				= true;
		char	checkchar = str[0];

		for (int index = 1; index < length && done; index++)
		{
			done = (checkchar == str[index]);
		}
	}

	return done;
}
