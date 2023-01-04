#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"

class CruiseShip: public Ship
{
	int maxPassengers;
public:
	CruiseShip();
	CruiseShip(string, string, int);
	int getMax() const;
	void setMax(int);
	virtual void print();
	~CruiseShip();
};

#endif

