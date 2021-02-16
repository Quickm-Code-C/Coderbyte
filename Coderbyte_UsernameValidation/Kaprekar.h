#pragma once
class Kaprekar
{
public:
	int KaprekarsConstant(int num);

protected:
	int ascendInt(int num);
	int descendInt(int num);

private:
	int  adjustInt(int num, bool descend);
};

