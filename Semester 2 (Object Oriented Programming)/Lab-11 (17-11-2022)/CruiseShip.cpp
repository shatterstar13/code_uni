#include "CruiseShip.h"
#include <iostream>
#include "Ship.h"

using namespace std;

CruiseShip::CruiseShip(): Ship("", "")
{
	maxPassengers = 0;
}

CruiseShip::CruiseShip(string a, string b, int c): Ship (a, b)
{
	maxPassengers = c;
}

int CruiseShip::getMax() const
{
	return maxPassengers;
}

void CruiseShip::setMax(int a)
{
	maxPassengers = a;
}

void CruiseShip::print()
{
	cout << "\n\nShip Name: " << Ship::getName();
	cout << "\nMax Passengers: " << maxPassengers;
	cout << "\n\n";
}


CruiseShip::~CruiseShip()
{
}
