#include "DateTime.h"
#include "Date.h"
#include "Time.h"
#include <iostream>

using namespace std;

DateTime::DateTime(): Date(0, 0, 0), Time(0, 0, 0)
{
}

DateTime::DateTime(int h, int mi, int s, int d, int mo, int y):Date (d, mo, y), Time(h, mi, s)
{

}

void DateTime::printDateTime()
{
	cout << "\n";
	cout <<"\t" << Date::getDay() << "\\" << Date::getMonth() << "\\";
	cout << Date::getYear() <<"   "<< Time::getHour() << ":" << Time::getMinute() << ":" << Time::getSecond();
	cout << "\n\n";
}

void DateTime::showFormattedDateTime()
{
	string month[12] = { "January" ,"February", "March",
						"April", "May", "June", "July",
						"August", "September", "October",
						"November", "December" };

	cout << "\n";
	cout << "\t" << month[Date::getMonth() - 1] << " " << Date::getDay() << ", " << Date::getYear();
	cout << " " << Time::getHour() << ":" << Time::getMinute() << ":" << Time::getSecond();
	cout << "\n\n";
}

