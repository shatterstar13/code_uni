#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle(); // default constructor
	Rectangle(int l, int w);	// parametrized construtor
	void setLength(int l);
	int getLength() const;
	void setWidth(int w);
	int getWidth() const;
	int getArea() const;
	int getPerimeter() const;
	friend ostream& operator<<(ostream&, Rectangle&);
	//void draw() const;
	~Rectangle();
private:
	int length;
	int width;
	//const int SIDES;
};

#endif
