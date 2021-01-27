#pragma once
#include <string>


class QuestionMarkSum
{
public:
	std::string questionsMarks(std::string str);

protected:
	bool		findNumbersInString(const std::string str, const int start, int & first, int &second);
	bool		isQuestionMarksExist(const std::string str, const int start, const int end);
};

