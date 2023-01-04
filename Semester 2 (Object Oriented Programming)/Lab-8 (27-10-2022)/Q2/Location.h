#ifndef	LOCATION_H
#define LOCATION_H

#include <iostream>

using namespace std;

class Location
{
	int x, y;
public:
	Location(): x(0), y(0)
	{
	}

	Location(int v1, int v2)
	{
		x = v1;
		y = v2;
	}

	void setX(int v)
	{
		x = v;
	}

	void setY(int v)
	{
		y = v;
	}

	int getX() const
	{
		return x;
	}

	int getY() const
	{
		return y;
	}

	friend istream& operator>>(istream& in, Location& obj)
	{
		cout << "\nEnter the x and y coordinates (space seperated): ";
		in >> obj.x;
		cin.ignore();
		in >> obj.y;
		return in;
	}

	friend ostream& operator<<(ostream& out, Location& obj)
	{
		out << "\nThe x and y coordinates are: ";
		out << "( " << obj.x << ", " << obj.y << " )";
		return out;
	}
};

#endif
