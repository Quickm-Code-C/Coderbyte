// Coderbyte_UsernameValidation.cpp : This file contains the 'main' function. 
// Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "UsernameValidation.h"
using namespace std;


int main(void) {


	// Username Validation: keep this function call here
	string				input = "t9_fjrjkgljoirg8945jgg";
	UsernameValidation	validator;
	//cout << CodelandUsernameValidation(coderbyteInternalStdinFunction(stdin));

	cout << validator.CodelandUsernameValidation(input);

	return 0;

}