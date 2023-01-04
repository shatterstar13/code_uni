#include "CargoShip.h"
#include <iostream>

using namespace std;


CargoShip::CargoShip(): Ship("", "")
{
	shipCapacity = 0;
}

CargoShip::CargoShip(string a, string b, int c) : Ship(a, b)
{
	shipCapacity = c;
}

int CargoShip::getCapacity() const
{
	return shipCapacity;
}

void CargoShip::setCapacity(int a)
{
	shipCapacity = a;
}

void CargoShip::print()
{
	cout << "\n\nShip Name: " << Ship::getName();
	cout << "\nCargo Capacity: " << shipCapacity;
	cout << "\n\n";
}

CargoShip::~CargoShip()
{
}
