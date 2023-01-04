#ifndef SHIP_H
#define SHIP_H

#include <string>

using namespace std;

class Ship
{
	string shipName;
	string shipYear;
public:
	Ship();
	Ship(string, string);
	string getName() const;
	string getYear() const;
	void setName(string);
	void setYear(string);
	virtual void print();
	~Ship();
};

#endif

