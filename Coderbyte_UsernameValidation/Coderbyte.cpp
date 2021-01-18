// This file contains the 'main' function. 
// Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "UsernameValidation.h"
#include "MatrixDeterminant.h"
#include "WordLength.h"

using namespace std;


int main(void) {


	// Username Validation: keep this function call here
	string				input = "t9_fjrjkgljoirg8945jgg";
	UsernameValidation	validator;
	//cout << CodelandUsernameValidation(coderbyteInternalStdinFunction(stdin));
	cout << "Validation: " << validator.CodelandUsernameValidation(input) << endl;
	cout << endl;

	// Determinant
	string	array[] = { "1", "4", "3","<>", "2","3","0", "<>", "5", "-3","4"};
	Determinant  d;
	int          det;

	det = d.MatrixDeterminant(array,11);
	cout << "Determinant value: " << det << endl;
	cout << endl;


	// LongestWord
	input = "The fox wouldn't lazy in the forest.";
	WordLength wl;
	cout << "Longest Word: " << wl.LongestWord(input) << endl;
	cout << endl;


	return 0;

}