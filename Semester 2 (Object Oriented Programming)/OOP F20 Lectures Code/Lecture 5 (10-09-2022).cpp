#include <iostream>

using namespace std;

struct Val
{
	int* ptr;
	int num;
};


struct Point
{
	int x{}, y{};
};

struct Circle
{
	Point center;
	double radius{};
};

void inputPoint(Point&);
void displayPoint(Point&);

void inputPoints(Point*, int);
void displayPoints(Point*, int);

void inputCircle(Circle&);
void displayCircle(Circle&);

void inputCircles(Circle*, int);
void displayCircles(Circle*, int);

int main()
{
	int size{};
	cout << "\nEnter the size of the array: ";
	cin >> size;
	Point* ptr = new Point[size];

	Val v;
	v.ptr = new int;
	*(v.ptr) = 55;

	Val* v = new Val;
	v->num = 55;
	*(v->ptr) = 55;

	Val* v = new Val[2];

	v->ptr = new int;

	for (int i = 0; i < 2; i++)
	{
		cout << "\nEnter num: ";
		cin >> v[i].num;
		v[i].ptr = new int;
		cout << "\nEnter ptr: ";
		cin >> *(v[i].ptr);
	}

	//v->num = 55;
	//(*v).num = 56;

	/*cout << v->num;
	cout << (*v).num;*/

	//(*v).ptr = new int;
	//v->ptr = new int;

	//*(v->ptr) = 55;

	//v->ptr = new int[2];
	//v->ptr = new int;
	
	/*Circle crc;
	inputCircle(crc);
	displayCircle(crc);*/

	//Circle* circ = new Circle[size];

	//inputCircles(circ, size);
	//displayCircles(circ, size);

	//inputPoints(ptr, size);
	//displayPoints(ptr, size);
}

void inputPoint(Point& p)
{
	cout << "\nEnter the points: ";
	cin >> p.x >> p.y;
}

void displayPoint(Point& p)
{
	cout << "( " << p.x << "," << p.y << " )\n";
}

void inputPoints(Point* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		inputPoint(p[i]);
	}
}

void displayPoints(Point* p,int size)
{
	for (int i = 0; i < size; i++)
	{
		displayPoint(p[i]);
	}
}

void inputCircle(Circle& c)
{
	inputPoint(c.center);
	cout << "\nEnter Radius: ";
	cin >> c.radius;
}

void displayCircle(Circle& c)
{
	cout << "\nCenter is: ";
    displayPoint(c.center);
	cout << "\nRadius is: " << c.radius;
	cout << "\n";
}

void inputCircles(Circle* c, int size)
{
	for (int i = 0; i < size; i++)
	{
		inputCircle(c[i]);
	}
}

void displayCircles(Circle* c, int size)
{
	for (int i = 0; i < size; i++)
	{
		displayCircle(c[i]);
	}
}
