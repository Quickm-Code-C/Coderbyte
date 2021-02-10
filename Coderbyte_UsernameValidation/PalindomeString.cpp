#include "PalindomeString.h"
#include <algorithm>

using namespace std;

// The function Palindrome(str) has a string parameter,  return the string true
// if the parameter is a palindrome otherwise return the string false.  A 
// palindrome is the same forward as it is backwards. 

// For example : "racecar" is also "racecar" backwards. Punctuation and numbers 
// will not be part of the string.

std::string PalindomeString::Palindrome(std::string str)
{
	string	result;
	string  local;
	bool	isPalindrome = false;
	
	// set length equl to original string
	local.resize(str.length());

	// copy valid chars and resize string
	auto it = copy_if(str.begin(), str.end(), local.begin(), [](char c) {return !isspace(c); }); 
	local.resize(std::distance(local.begin(), it));

	// Create backwards string
	string  backwards(local);
	reverse(backwards.begin(), backwards.end());

	result = (local.compare(backwards) == 0) ? "true" : "false";


	return result;
}
