#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"

class DateTime: public Date, public Time
{
public:
	DateTime();
	DateTime(int, int, int, int, int, int);
	void printDateTime();
	void showFormattedDateTime();
};

#endif

