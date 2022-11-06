#include <iostream>

using namespace std;

class Date{
public:
	Date();
	~Date();
	void showInt( int, int, int );
	void showMonthFirst(int, int, int);
	void showDateFirst(int, int, int);
private:
	int month, day, year;
};

Date::Date()
{
	day = 1;
	month = 1;
	year = 2001;
}

void Date::showInt(int d, int m, int y)
{
	cout << m << "/" << d << "/" << y << "\n\n\n";
}

void Date::showDateFirst(int d, int m, int y)
{
	string months[12]{ "January","February","March","April",
						"May","June", "July","August",
						"September","October","November","December" };

	cout << d << " " << months[m - 1] << " " << y << "\n\n\n";
	
}
void Date::showMonthFirst(int d, int m, int y)
{
	string months[12]{ "January","February","March","April",
						"May","June", "July","August",
						"September","October","November","December" };

	cout << months[m - 1] << " " << d << "," << y;
	cout << "\n\n\n";
}

Date::~Date()
{
}

int main()
{
	int day{}, month{}, year{};
	Date showDate;

	while (!(day >= 1 && day <= 31)) 
	{
		cout << "\nEnter the day: ";
		cin >> day;
		if (!(day >= 1 && day <= 31))
		{
			cout << "\nERROR: Invalid Date! Enter Again.\n";
		}
	}

	while (!(month >= 1 && month <= 12))
	{
		cout << "\nEnter the month: ";
		cin >> month;
		if (!(month >= 1 && month <= 12))
		{
			cout << "\nERROR: Invalid month! Enter Again.\n";
		}
	}

	cout << "\nEnter the year: ";
	cin >> year;

	cout << "\n\n";

	showDate.showInt(day, month, year);

	showDate.showMonthFirst(day, month, year);

	showDate.showDateFirst(day, month, year);
}