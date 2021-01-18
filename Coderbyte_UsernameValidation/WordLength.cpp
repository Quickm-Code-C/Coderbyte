#include "WordLength.h"

using namespace std;

// Have the function LongestWord(sen) take the sen parameter being passed and 
// return the largest word in the string.If there are two or more words that 
// are the same length, return the first word from the string with that length.
// Ignore punctuation and assume sen will not be empty.

std::string WordLength::LongestWord(std::string sen)
{
	string			longest = "";
	char			separator = ' ';
	string			substring = "";
	string::size_type prev_pos = 0, pos = 0;

	if (sen.find(separator, pos) == std::string::npos)
	{
		longest = sen;
	}

	else
	{
		while ((pos = sen.find(separator, pos)) != string::npos)
		{
			// get substring
			substring = sen.substr(prev_pos, pos - prev_pos);
			for (size_t i = 0; i < substring.length(); ++i)
			{
				// remove punctuation
				if (ispunct(substring[i]))
				{
					substring.erase(i--, 1);
				}
			}
			
			// check for longest word
			if (substring.length() > longest.length())
			{
				longest = substring;
			}

			prev_pos = ++pos;
		}

		substring = sen.substr(prev_pos, pos - prev_pos);
		for (size_t i = 0; i < substring.length(); ++i)
		{
			if (ispunct(substring[i])) substring.erase(i--, 1);
		}
		if (substring.length() > longest.length())
		{
			longest = substring;
		}
	}

	return longest;
}
