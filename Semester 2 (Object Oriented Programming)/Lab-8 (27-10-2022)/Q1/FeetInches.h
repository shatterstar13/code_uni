#include <iostream>

using namespace std;

class FeetInches
{
	int feet;
	int inches;
public:
	FeetInches(int = 0, int = 0);
	void setFeet(int);
	void setInches(int);
	int getFeet() const;
	int getInches() const;
	FeetInches operator*(FeetInches& obj) const;
	friend istream& operator>>(istream& in, FeetInches& obj);
};

