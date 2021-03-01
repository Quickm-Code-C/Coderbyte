// This file contains the 'main' function. 
// Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
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
#include "Exponent2.h"
#include "MathProduct.h"
#include "MedianMovement.h"
#include "MathSequence.h"
#include "Brackets.h"
#include "StringPeriod.h"
#include "NumberEncoder.h"
#include "StringReducer.h"
#include "PrimeNumber.h"
#include "ConsecutiveNumbers.h"
#include "StringUniqueSubstring.h"
#include "StringCompression.h"
#include "TreeGraphs.h"
#include "Fibonacci.h"
#include "PalindomeString.h"
#include "SquareVowels.h"

using namespace std;

void test_printArray(int* arr, int length)
{
	vector<int>   container(arr, arr + length);

	cout << "Array: " << "[";
	string str;

	for (auto const& value : container)
	{
		str += to_string(value);
		str += ",";
	}

	str.pop_back();
	std::cout << str << "]";
}

void test_printArray(string *arr, int length)
{
	vector<string>   container(arr, arr + length);

	cout << "Array: " << "[";
	string str;

	for (auto const& value : container)
	{
		str += value;
		str += ",";
	}

	str.pop_back();
    std::cout << str << "] ";
}

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
	Chessboard		traveler;
    cout << "Chessboard Traveling: " << endl;

    string			input = "(1 1)(2 2)";
    cout << "Input string: " << input << " Output: " << traveler.ChessboardTraveling(input) << endl;
    cout << endl;

    input = "(1 1)(5 4)";
    cout << "Input string: " << input << " Output: " << traveler.ChessboardTraveling(input) << endl;
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

void test_minWindowSubstring()
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

void test_powerOfTwo()
{
	int			value = 32;
	Exponent2	power;

	cout << "Power of Two: ";
	cout << "Value: " << value << " Result: " << power.powersofTwo(value) << endl;

	value = 56;
	cout << "Value: " << value << " Result: " << power.powersofTwo(value) << endl;
	cout << endl;

}

void test_productDigits()
{
	int			value = 32;
	MathProduct	mp;

	cout << "Product Digits: " << endl;
	cout << "Value: " << value << " Result: " << mp.productDigits(value) << endl;

	value = 23;
	cout << "Value: " << value << " Result: " << mp.productDigits(value) << endl;
	cout << endl;

	value = 5000;
	cout << "Value: " << value << " Result: " << mp.productDigits(value) << endl;
	cout << endl;

}

void test_otherProducts()
{
	int				arr[5] = { 1,2,3,4,5 };
	MathProduct		mp;
	cout << "Other Products: " << endl;

	test_printArray(arr, 5);

	cout << " Result: " << mp.otherProducts(arr, 5) << endl;
	cout << endl;
}

void test_movingMedian()
{
	int				arr[9] = { 3, 1, 3, 5, 10, 6, 4, 3, 1 };
	int				length = 9;
	MedianMovement	mm;

	cout << "Moving Medians: " << endl;
	test_printArray(arr, length);
	cout << " Result: " << mm.movingMedian(arr, length) << endl;
	cout << endl;

	// expected results : 1,2,3,5,6,6,4,3
}

void test_mathSequence()
{
	int				arr[4] = { 2,4,8,16 };
	int				length = 4;
	MathSequence	sequence;

	cout << "ArithGeo: " << endl;
	test_printArray(arr, length);
	cout << " Result: " << sequence.ArithGeo(arr, length) << endl;
	cout << endl;
}

void test_removeBrackets()
{
	string		str = "())";
	Brackets	b;

	cout << "Remove Brackets: " << endl;
	cout << "Input: " << str << " Result: " << b.RemoveBrackets(str) << endl;

	str = "(())";
	cout << "Input: " << str << " Result: " << b.RemoveBrackets(str) << endl;

	str = ")(()";
	cout << "Input: " << str << " Result: " << b.RemoveBrackets(str) << endl;
	cout << endl;
}

void test_stringPeriods()
{
	string			str = "abcababcababcab";
	StringPeriod	sp;

	cout << "String Periods: " << endl;
	cout << "Input: " << str << " Result: " << sp.StringPeriods(str) << endl;

	str = "abababababab";
	cout << "Input: " << str << " Result: " << sp.StringPeriods(str) << endl;

	str = "abcxabc";
	cout << "Input: " << str << " Result: " << sp.StringPeriods(str) << endl;

	str = "affedaaffed";
	cout << "Input: " << str << " Result: " << sp.StringPeriods(str) << endl;
	cout << endl;

}

void test_numberCoding()
{
	string			str			= "af5c a#!";
	NumberEncoder	encoder;

	cout << "Number Coding: " << endl; 
	cout << "Input: " << str << " Result: " << encoder.NumberEncoding(str) << endl;

	str = "$*#&^$";
	cout << "Input: " << str << " Result: " << encoder.NumberEncoding(str) << endl;


	cout << endl;
}

void test_stringReducer()
{
	string			str = "cab";
	StringReducer	reducer;

	cout << "Reducing String: " << endl;
	cout << "Input: " << str << " Result: " << reducer.StringReduction(str) << endl;

	str = "cccc";
	cout << "Input: " << str << " Result: " << reducer.StringReduction(str) << endl;
	cout << endl;
}

void test_primeMover()
{
	unsigned int	num = 16;
	PrimeNumber		pn;

	cout << "Prime Movers: " << endl;
	cout << "Input: " << num << " Prime Value: " << pn.PrimeMover(num) << endl;

	num = 9;
	cout << "Input: " << num << " Prime Value: " << pn.PrimeMover(num) << endl;

	num = 100;
	cout << "Input: " << num << " Prime Value: " << pn.PrimeMover(num) << endl;

	num = 1000;
	cout << "Input: " << num << " Prime Value: " << pn.PrimeMover(num) << endl;

	cout << endl;
}

void test_consecutive()
{
	int					arr[3] = { 4, 8, 6 };
	int					length = 3;
	ConsecutiveNumbers	numbers;

	cout << "Consecutive Numbers: " << endl;
	test_printArray(arr, length);
	cout << " Result: " << numbers.Consecutive(arr, length) << endl;

	int					arr2[6] = { 1, 5, 3, 7, 2, 9 };
	length						= 6;
	test_printArray(arr2, length);
	cout << " Result: " << numbers.Consecutive(arr2, length) << endl; 

	int					arr3[3] = { -2, 10, 4 };
	length						= 3;
	test_printArray(arr3, length);
	cout << " Result: " << numbers.Consecutive(arr3, length) << endl;
	cout << endl; 
}

void test_kUniqueChars()
{
	string					str = "2aabbacbaa";
	StringUniqueSubstring	unique;

	cout << "K Unique Chars: " << endl;
	cout << "Input: " << str << " Result: " << unique.KUniqueCharacters(str) << endl;

	str = "4aaffaacccerrfffaacca";
	cout << "Input: " << str << " Result: " << unique.KUniqueCharacters(str) << endl;
	cout << endl;
}

void test_runLength()
{
	string					str = "wwwggopp";
	StringCompression		compress;

	cout << "K Unique Chars: " << endl;
	cout << "Input: " << str << " Result: " << compress.RunLength(str) << endl;

	str = "wwwbbbw";
	cout << "Input: " << str << " Result: " << compress.RunLength(str) << endl;
	cout << endl; // wwwbbbw
}

void test_treeConstructor()
{
	string		strArr[] = { "(1,2)", "(2,4)", "(7,2)" };
	int         length = 3;
	TreeGraphs  tree;

	cout << "Tree Constructor:" << endl;
	test_printArray(strArr, length);
	cout << "Result: " << tree.TreeConstructor(strArr, length) << endl;

	string		strArr2[] = { "(1,2)", "(9,2)", "(2,4)", "(7,2)" };
	length				  = 4;
	test_printArray(strArr2, length);
	cout << "Result: " << tree.TreeConstructor(strArr2, length) << endl;

	string		strArr3[] = { "(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)" };
	length = 5;
	test_printArray(strArr3, length);
	cout << "Result: " << tree.TreeConstructor(strArr3, length) << endl;
	cout << endl;

	
}

void	test_symmetricTree()
{
	TreeGraphs		tree;
	string			strArr[] = { "1", "2", "2", "3", "#", "#", "3"};
	int				length  = 7;

	cout << "Symmetric Tree:" << endl;
	test_printArray(strArr, length);
	cout << "Result: " << tree.SymmetricTree(strArr, length) << endl;

	string			strArr2[] = { "1", "2", "2", "3", "#", "#" };
	length					  = 6;
	test_printArray(strArr, length);
	cout << "Result: " << tree.SymmetricTree(strArr, length) << endl;

	cout << endl;


}

void	test_preorderTraversal()
{
	TreeGraphs		tree;
	string			strArr[] = { "1", "2", "2", "3", "#", "#", "3" };
	int				length = 7;

	cout << "Preorder Tree Traversal:" << endl;
	test_printArray(strArr, length);
	cout << "Result: " << tree.PreorderTraversal(strArr, length) << endl;

	string			strArr2[] = { "5", "2", "6", "1", "9", "#", "8", "#", "#", "#", "#", "4", "#" };
	length					  = 13;
	test_printArray(strArr2, length);
	cout << "Result: " << tree.PreorderTraversal(strArr2, length) << endl; // 5 2 1 9 6 8 4

	cout << endl;
}

void test_fibonacciChecker()
{
	Fibonacci		fib;
	int				num;

	cout << "Fibonacci Checker: " << endl;

	num = 5;
	cout << "Input: " << num << "  Result: " << fib.FibonacciChecker(num) << endl;

	num = 34;
	cout << "Input: " << num << "  Result: " << fib.FibonacciChecker(num) << endl;

	num = 54;
	cout << "Input: " << num << "  Result: " << fib.FibonacciChecker(num) << endl;


	cout << endl;

}

void test_palindrome()
{
	string				str = "eye";
	PalindomeString		palin;

	cout << "Palindrome: " << endl;
	cout << "Input: " << str << "  Result: " << palin.Palindrome(str) << endl;

	str = " eye";
	cout << "Input: " << str << "  Result: " << palin.Palindrome(str) << endl;

	str = "faafl";
	cout << "Input: " << str << "  Result: " << palin.Palindrome(str) << endl;

	str = "a b c c b a";
	cout << "Input: " << str << "  Result: " << palin.Palindrome(str) << endl;

	cout << endl;
}

void test_vowelSquares()
{
    string		    strArr[] = { "abcd", "eikr", "oufj" };
    int             length = 3;
    SquareVowels    square;

    cout << "Vowel Squares:" << endl;
    test_printArray(strArr, length);
    cout << "Result: " << square.VowelSquare(strArr, length) << endl;
    cout << endl;

    string		    strArr2[] = { "lbzk", "ncdf", "mxio", "pqau" };
    length                    = 4;
    test_printArray(strArr2, length);
    cout << "Result: " << square.VowelSquare(strArr2, length) << endl;
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

	test_simpleSymbols();

	test_firstFactorial();

	test_letterCapitalize();

	test_kaprekarConstant();

	test_chessboardTraveling();

	test_findIntersection();

	test_minWindowSubstring();

	test_QuestionMarks();

	test_powerOfTwo();

	test_productDigits();

	test_otherProducts();

	test_movingMedian();

	test_mathSequence();

	test_removeBrackets();

	test_stringPeriods();

	test_numberCoding();

	test_stringReducer();

	test_primeMover();

	test_consecutive();

	test_kUniqueChars();

	test_runLength();

	test_treeConstructor();
	
	test_symmetricTree();

	test_preorderTraversal();

	test_fibonacciChecker();

	test_palindrome();

    test_vowelSquares();

	return 0;
}