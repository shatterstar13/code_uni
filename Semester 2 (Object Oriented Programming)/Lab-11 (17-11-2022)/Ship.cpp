#include "Ship.h"
#include <string>
#include <iostream>

using namespace std;


Ship::Ship()
{
	shipName = "";
	shipYear = "";
}

Ship::Ship(string a, string b)
{
	shipName = a;
	shipYear = b;
}

string Ship::getName() const
{
	return shipName;
}

string Ship::getYear() const
{
	return shipYear;
}

void Ship::setName(string a)
{
	shipName = a;
}

void Ship::setYear(string b)
{
	shipYear = b;
}

void Ship::print()
{
	cout << "\n\nShip Name: " << shipName;
	cout << "\nShip Year: " << shipYear;
	cout << "\n\n";
}


Ship::~Ship()
{
}
