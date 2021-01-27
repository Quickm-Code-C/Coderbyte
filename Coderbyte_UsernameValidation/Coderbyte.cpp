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
#include "Symbols.h"
#include "Factorial.h"
#include "Kaprekar.h"
#include "Chessboard.h"
#include "StringIntersection.h"
#include "MinStringRange.h"
#include "QuestionMarkSum.h"

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

void test_simpleSymbols()
{
	string			input = "++d+===+c++==a";
	Symbols			symbol;

	cout << "Letter Changes: ";
	cout << "Input string: " << input << " Converted string: " << symbol.SimpleSymbols(input) << endl;
	cout << endl;
}

void test_firstFactorial()
{
	int			value = 3;
	Factorial	calculator;

	cout << "First Factorial: ";
	cout << "Value: " << value << " Factorial: " << calculator.FirstFactorial(value) << endl;
	cout << endl;
}

void test_letterCapitalize()
{
	string			input = "the fox is brown in color and very sly.";
	ChangeLetter	capitalize;

	cout << "Letter Capitalize: ";
	cout << "Input string: " << input << endl;
	cout << " Converted string: " << capitalize.LetterCapitalize(input) << endl;
	cout << endl;
}

void test_kaprekarConstant()
{
	int			value = 3524;
	Kaprekar	calculator;

	cout << "Kaprekar's Constant: ";
	cout << "Value: " << value << " Factorial: " << calculator.KaprekarsConstant(value) << endl;
	cout << endl;
}

void test_chessboardTraveling()
{
	string			input = "(1 1)(2 2)";
	Chessboard		traveler;

	cout << "Chessboard Traveling: ";
	cout << "Input string: " << input << " Converted string: " << traveler.ChessboardTraveling(input) << endl;
	cout << endl;
}

void test_findIntersection()
{
	string strArr[2];
	string one = "3, 4, 7, 11, 21";
	string two = "4, 6, 7, 13, 21";

	strArr[0] = one;
	strArr[1] = two;

	StringIntersection si;

	cout << "FindIntersection: ";
	cout << "Input: " << "first: " << strArr[0] << " , " << "second: " << strArr[1];
	cout << " Intersection: " << si.FindIntersection(strArr) << endl;
	cout << endl;
}

void test_minWIndowSubstring()
{
	string text = "ahffaksfajeeubsne";
	string pattern = "jefaa";

	string strArr[2] = { text, pattern };
	MinStringRange  msr;

	cout << "Minimum Window Substring: ";
	cout << "Input: " << text << "  " << pattern << " " << msr.minWindowSubstring(strArr, 2) << endl;

	text	= "aaffhkksemckelloe";
	pattern = "fhea";
	strArr[0] = text;
	strArr[1] = pattern;
	cout << "Input: " << text << "  " << pattern << " " << msr.minWindowSubstring(strArr, 2) << endl;
	cout << endl;
}

void test_QuestionMarks()
{
	string text = "arrb6???4xxbl5???eee5";

	QuestionMarkSum qmSum;

	cout << "Question Marks Sum: ";
	cout << "Input: " << text << " " << "Result: "<< qmSum.questionsMarks(text) << endl;

	text = "aaaaaaarrrrr??????";
	cout << "Input: " << text << " " << "Result: " << qmSum.questionsMarks(text) << endl;

	text = "9???1???9??1???9";
	cout << "Input: " << text << " " << "Result: " << qmSum.questionsMarks(text) << endl;

	text = "5??aaaaaaaaaaaaaaaaaaa?5?5";
	cout << "Input: " << text << " " << "Result: " << qmSum.questionsMarks(text) << endl;


	text = "mbbv???????????4??????ddsdsdcc9";
	cout << "Input: " << text << " " << "Result: " << qmSum.questionsMarks(text) << endl;
	cout << endl;

	// 9???1???9???1???9				true  
	// 5??aaaaaaaaaaaaaaaaaaa?5?a??5	true
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

	test_simpleSymbols();

	test_firstFactorial();

	test_letterCapitalize();

	test_kaprekarConstant();

	test_chessboardTraveling();

	test_findIntersection();

	test_minWIndowSubstring();

	test_QuestionMarks();

	return 0;

}