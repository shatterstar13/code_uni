#include <iostream>
using namespace std;

struct point
{
	int x, y;
};

struct circle
{
	point centre;
	double radius;
};

void displaypoint(const point&);
void getpoint(point&);
void getcircle(circle*);
void displaycircle(const circle*);
void inputcircles(circle* , int);
void displaycircles(const circle*, int);

int main()
{
	// *   derefrencing operator
	// .   dot operator
	// ->  structure pointer operator/ arrow operator


	//circle c1;
	//c1.centre.x = 0;
	//c1.centre.y = 5;
	//c1.radius = 6.4;
	const int n = 2;
	circle circles[n];

	inputcircles(circles, n);
	displaycircles(circles, n);
}

void displaypoint(const point& p)
{
	cout << "(" << p.x << "," << p.y << ")" << endl;
}

void getpoint(point& p)
{
	cin >> p.x >> p.y;
}


void getcircle(circle* c)
{
	cout << "enter points :";
	getpoint(c->centre);
	cout << "enter radius: ";
	cin >> c->radius;
	cout << endl;
}

void displaycircle(const circle* c)
{
	cout << "\ncentre is: ";
	displaypoint(c->centre);
	cout << "radius is:" << c->radius << endl;
}

void displaycircles(const circle* crcs, int size)
{
	for (int i = 0; i < size; i++)
		displaycircle(&crcs[i]);
}

void inputcircles(circle* crcs, int size)
{
	for (int i = 0; i < size; i++)
		getcircle(&crcs[i]);
}
