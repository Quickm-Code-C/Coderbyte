// This file contains the 'main' function. 
// Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "UsernameValidation.h"
#include "MatrixDeterminant.h"
#include "WordLength.h"
#include "NumberCheck.h"
#include "TimeConverter.h"
#include "Alphabet.h"
#include "Reverse.h"
#include "Summation.h"
#include "ChangeLetter.h"

using namespace std;

void test_usernameValidation()
{
	// Username Validation: keep this function call here
	string				input = "t9_fjrjkgljoirg8945jgg";
	UsernameValidation	validator;
	//cout << CodelandUsernameValidation(coderbyteInternalStdinFunction(stdin));
	cout << "Validation: " << validator.CodelandUsernameValidation(input) << endl;
	cout << endl;
}

void test_determinant()
{
	// Determinant
	string	array[] = { "1", "4", "3","<>", "2","3","0", "<>", "5", "-3","4" };
	Determinant  d;
	int          det;

	det = d.MatrixDeterminant(array, 11);
	cout << "Determinant value: " << det << endl;
	cout << endl;
}

void test_longestWord()
{
	// LongestWord
	string input = "The fox wouldn't lazy in the forest.";
	WordLength wl;
	cout << "Longest Word: " << wl.LongestWord(input) << endl;
	cout << endl;
}

void test_checkNums()
{
	// CheckNums
	int number1 = 23;
	int	number2 = 45;

	NumberCheck  check;
	cout << "Check Numbers: " << "number one: " << number1 << " number 2: " << number2 << "  Result: " << check.checkNums(number1, number2) << endl;
	cout << endl;
}

void test_timeConverter()
{
	// TimeConvert
	int				totalMinutes = 73;
	TimeConverter	tc;
	cout << "TimeConvert: " << totalMinutes << " minutes converts to " << tc.TimeConvert(totalMinutes) << endl;
	cout << endl;
}

void test_alphabetSoup()
{
	string		text = "jgklsgtiowegtankvlae";
	Alphabet	alpha;

	cout << "Alphabet Soup: ";
	cout << "Original string: " << text << " Converted string: " << alpha.AlphabetSoup(text) << endl;
	cout << endl;
}

void test_firstReverse()
{
	string		text = "jgklsgtiowegtankvlae";
	Reverse		reverse;

	cout << "First Reverse: ";
	cout << "Original string: " << text << " Converted string: " << reverse.FirstReverse(text) << endl;
	cout << endl;
}

void test_simpleAdding()
{
	int			count = 34;
	Summation	sum;

	cout << "Simple Adding: ";
	cout << "Number count: " << count << " Sum: " << sum.SimpleAdding(count) << endl;
	cout << endl;
}

void test_letterChanges()
{
	string			original = "coderbyte";
	ChangeLetter	change;

	cout << "Letter Changes: ";
	cout << "Original string: " << original << " Converted string: " << change.LetterChanges(original) << endl;
	cout << endl;
}


int main(void) {

	test_usernameValidation();

	test_determinant();

	test_longestWord();

	test_checkNums();

	test_timeConverter();

	test_alphabetSoup();

	test_firstReverse();

	test_simpleAdding();

	test_letterChanges();

	return 0;

}