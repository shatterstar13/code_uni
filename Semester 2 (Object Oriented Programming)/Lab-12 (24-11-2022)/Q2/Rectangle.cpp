#include <iostream>
#include "Rectangle.h"

using namespace std; 

Rectangle::~Rectangle()
{
	//cout << "Destructor is called" << endl;
}

Rectangle::Rectangle(): length(0), width(0)
{
	//cout << "Default constructor is called . . ." << endl;
}

Rectangle::Rectangle(int l, int w)
{
	//cout << "Parametrized constructor is called . . ." << endl;
	length = l; 
	width = w;
}

void Rectangle::setLength(int l)
{
	length = l;
}

void Rectangle::setWidth(int w) 
{
	width = w;
}

//void Rectangle::draw() const
//{
//	for (int i = 0; i < length; i++)
//	{
//		for (int j = 0; j < width; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//}

int Rectangle::getLength() const
{
	return length; 
}

int Rectangle::getWidth() const
{
	return width;
}

int Rectangle::getArea() const
{
	return length * width; 

}

int Rectangle::getPerimeter() const
{
	return 2 * (length + width);
}

ostream& operator<<(ostream& out, Rectangle& r)
{
	out << "\nLength: " << r.getLength();
	out << "\nWidth: " << r.getWidth();
	return out;
}
