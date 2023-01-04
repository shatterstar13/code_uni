#ifndef TIME_H
#define TIME_H

class Time
{
private:
	int hour, min, sec;
public:
	Time();
	Time(int, int, int);
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	void print() const;
};

#endif

