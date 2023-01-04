#ifndef BATLLESHIP_H
#define BATLLESHIP_H

#include "Ship.h"

class BattleShip: public Ship
{
	int shipMissiles;
public:
	BattleShip();
	BattleShip(string, string, int);
	int getMissiles() const;
	void setMissiles(int);
	virtual void print();
	~BattleShip();
};

#endif

