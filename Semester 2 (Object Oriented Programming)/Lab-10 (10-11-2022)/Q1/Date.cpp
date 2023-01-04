#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()
{
	day = 0, month = 0, year = 0;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::print() const
{
	cout << "\n";
	cout << "\t" << day <<"\\"<< month<<"\\" << year;
	cout << "\n\n";
}

