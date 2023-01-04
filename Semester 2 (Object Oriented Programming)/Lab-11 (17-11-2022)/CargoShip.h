#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"

using namespace std;

class CargoShip: public Ship
{
	int shipCapacity;
public:
	CargoShip();
	CargoShip(string, string, int);
	int getCapacity() const;
	void setCapacity(int);
	virtual void print();
	~CargoShip();
};

#endif

