#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
private:
	int hour, minute, second;
public:
	Time() : hour(0), minute(0), second(0)
	{	}
	Time(int , int , int );
	~Time()
	{	}
	void setH(int h)
	{
		while (!(h > 0 && h < 13))
		{
			cout << "\nERROR: Invalid! Try Again.";
			cout << "\nEnter hours: ";
			cin >> h;
		}
		hour = h;
	}
	void setM(int m)
	{
		while (!(m > -1 && m < 61))
		{
			cout << "\nERROR: Invalid! Try Again.";
			cout << "\nEnter minutes: ";
			cin >> m;
		}
		minute = m;
	}
	void setS(int s)
	{
		while (!(s > -1 && s < 61))
		{
			cout << "\nERROR: Invalid! Try Again.";
			cout << "\nEnter seconds: ";
			cin >> s;
		}
		second = s;
	}
	int getH() const
	{
		return hour;
	}
	int getM() const
	{
		return minute;
	}
	int getS() const
	{
		return second;
	}
	void reset(int, int, int);
	void reset(char);
	void advance(int, int, int);
	void print() const;
};

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time::reset(int h, int m, int s)
{
	if (s > 59)
	{
		m += ((s / 60) + 1);
		minute = m;
		s = s % 60;
		second = s;
	}
	else
		second = s;
}

void Time::reset(char ident)
{
	if(ident == 'h')
		hour = 00;
	else if (ident == 'm')
		minute = 00;
	else if (ident == 's')
		second = 00;
}

void Time::advance(int h, int m, int s)
{
	{
		if ((hour += h) > 12)
		{
			reset('h');
			hour += h;
		}
		else
			hour += h;
	}
	{
		if ((minute += m) > 60)
		{
			reset('m');
			minute += m;
			if ((hour += ((m / 60) + 1)) > 12)
			{
				reset('h');
				(hour += ((m / 60) + 1));
			}
			else
				(hour += ((m / 60) + 1));
		}
		else
			minute += m;
	}
	{
		if ((second += s) > 60)
		{
			reset('s');
			second += s;
			if ((minute += ((s / 60) + 1)) > 60)
			{
				reset('m');
				minute += m;
				if ((minute += ((s / 60) + 1)) > 12)
				{
					reset('h');
					(hour += ((m / 60) + 1));
				}
				else
					(hour += ((m / 60) + 1));
			}
			else
				minute += m;
		}
		else
			second += s;
	}	
}

void Time::print() const
{
	cout << setw(2) << setfill('0') << hour << ":"
		<< setw(2) << setfill('0') << minute << ":"
		<< setw(2) << setfill('0') << second << "\n";
}

#endif // !TIME_H
