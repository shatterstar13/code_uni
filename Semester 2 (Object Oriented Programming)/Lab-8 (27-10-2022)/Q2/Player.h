#include "Location.h"
#include <iostream>

using namespace std;

class Player
{
	Location point;
public:
	Player()
	{
		point.setX(0);
		point.setY(0);
	}
	Player(int v)
	{
		point.setX(v);
		point.setY(v);
	}
	Player(int v1, int v2)
	{
		point.setX(v1);
		point.setY(v2);
	}
	Location getLocation() const
	{
		return point;
	}
	void setLocation(int v1, int v2)
	{
		point.setX(v1);
		point.setY(v2);
	}
	void setLocation(int v)
	{
		point.setX(v);
		point.setY(v);
	}
};
