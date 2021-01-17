#include "UsernameValidation.h"

#include <iostream>
#include <cctype>
using namespace std;

bool UsernameValidation::validateLength(string str)
{
	// The username is between 4 and 25 characters.
	bool result = false;
	int  length = str.size();

	result = (length >= 4 && length <= 25);

	return result;
}

bool UsernameValidation::validateStartWithLetter(string str)
{
	// It must start with a letter.
	bool result = true;

	result = isalpha(str.at(0));

	return result;
}

bool UsernameValidation::validateOnlyValidCharacters(string str)
{
	// It can only contain letters, numbers, and the underscore character.
	bool result = true;

	for (char c : str)
	{
		if (!isalpha(c) && !isdigit(c) && !(c == '_')) {
			result = false;
			break;
		}
	}

	return result;
}

bool UsernameValidation::validateEndCharacter(string str)
{
	// It cannot end with an underscore character.
	bool result = true;
	int  length = str.size();
	char c = str.at(length - 1);

	result = (c != '_');

	return result;
}



/*
Have the function CodelandUsernameValidation(str) take the str parameter being
passed and determine if the string is a valid username according to the
following rules :

1. The username is between 4 and 25 characters.
2. It must start with a letter.
3. It can only contain letters, numbers, and the underscore character.
4. It cannot end with an underscore character.

If the username is valid then your program should return the string true,
otherwise return the string false.
*/

string UsernameValidation::CodelandUsernameValidation(string str) {
	// code goes here
	string result;

	bool rule1 = validateLength(str);
	bool rule2 = validateStartWithLetter(str);
	bool rule3 = validateOnlyValidCharacters(str);
	bool rule4 = validateEndCharacter(str);

	result = (rule1 && rule2 && rule3 && rule4) ? "true" : "false";
	return result;

}
