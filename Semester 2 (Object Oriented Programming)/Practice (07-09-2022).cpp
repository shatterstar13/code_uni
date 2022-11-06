#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle( double , double );
	~Rectangle();
	double getLength() const
	{ return length; }
	double getWidth() const
	{ return length; }
	//void setLength(double);
	//void setWidth(double);
	double getArea() const
	{ return width * length; }

private:
	double length;
	double width;
};

Rectangle::Rectangle( double l, double w )
{
	length = l;
	width = w;
}

Rectangle::~Rectangle()
{
}

//void Rectangle::setLength(double l)
//{
//	if (l >= 0)
//		length = l;
//	else
//	{
//		cout << "Invalid width\n";
//		exit(EXIT_FAILURE);
//	}
//}

/*void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}*/

int main() {
	double rectWidth, rectLength;
	cout << "\nEnter the length of the rectangle: ";
	cin >> rectLength;
	cout << "\nEnter the width of the rectangle: ";
	cin >> rectWidth;
	Rectangle box(rectLength, rectWidth);
	//box.setWidth(rectWidth);
	//box.setLength(rectLength);
	cout << "\nHere is the rectangle's data:\n";
	cout << "Length: " << box.getLength() << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Area: " << box.getArea() << endl;
	return 0;
}