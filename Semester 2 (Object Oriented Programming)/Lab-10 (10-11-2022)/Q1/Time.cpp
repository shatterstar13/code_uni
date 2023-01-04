#include "Time.h"
#include <iostream>

using  namespace std;

Time::Time()
{
	hour = 0, min = 0, sec = 0;
}

Time::Time(int h, int m, int s)
{
	hour = h, min = m, sec = s;
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return min;
}

int Time::getSecond() const
{
	return sec;
}

void Time::print() const
{
	cout << "\n";
	cout << "\t" << hour<<":" << min<<":" << sec;
	cout << "\n\n";
}

