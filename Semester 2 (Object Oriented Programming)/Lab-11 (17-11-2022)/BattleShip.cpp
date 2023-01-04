#include "BattleShip.h"
#include <iostream>
#include "Ship.h"

using namespace std;

BattleShip::BattleShip(): Ship ("", "")
{
	shipMissiles = 0;
}

BattleShip::BattleShip(string a, string b, int c) : Ship(a, b)
{
	shipMissiles = c;
}

int BattleShip::getMissiles() const
{
	return shipMissiles;
}

void BattleShip::setMissiles(int a)
{
	shipMissiles = a;
}

void BattleShip::print()
{
	cout << "\n\nShip Name: " << Ship::getName();
	cout << "\nShip Missiles: " << shipMissiles;
	cout << "\n\n";
}


BattleShip::~BattleShip()
{
}
