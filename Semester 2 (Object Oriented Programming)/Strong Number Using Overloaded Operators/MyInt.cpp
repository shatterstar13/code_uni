#include "MyInt.h"
#include <iostream>

using namespace std;

MyInt::MyInt() : num(0)
{

}

MyInt::MyInt(const MyInt& obj)
{
	num = obj.num;
}

void MyInt::setNum(int val)
{
	num = val;
}

int MyInt::getNum() const
{
	return num;
}

int getFactorial(int val)
{
	int x = 1, f = 1;
	while (x <= val)
	{
		f *= x;
		x++;
	}
	return f;
}

bool isStrongNumber(MyInt obj)
{
	int n = obj.getNum();
	int sum{ 0 };
	while (n > 0)
	{
		sum += getFactorial(n % 10);
		n /= 10;
	}
	if (sum == obj.getNum())
	{
		return true;
	}
	else
		return false;
}

istream& operator>>(istream& objIn, MyInt& obj)
{
	objIn >> obj.num;
	return objIn;
}
