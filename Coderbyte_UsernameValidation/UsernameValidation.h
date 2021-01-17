#pragma once
#include <string>

class UsernameValidation
{
public:
	std::string CodelandUsernameValidation(std::string str);

protected:
	bool validateLength(std::string str);
	bool validateStartWithLetter(std::string str);
	bool validateOnlyValidCharacters(std::string str);
	bool validateEndCharacter(std::string str);
};

