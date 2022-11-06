#include <iostream>
using namespace std;

struct Point
{
	int x, y;
};

struct Circle
{
	Point centre;
	double radius;
};

void displayPoint(const Point&);
void getPoint(Point&);
void displayPoints(const Point[], int);
void inputPoints(Point[], int);
void getCircle(Circle&);
void displayCircle(const Circle&);
void inputCircles(Circle crcs[], int);

void displayCircles(const Circle crcs[], int);

int main()
{
	// *   derefrencing operator
	// .   dot operator
	// ->  structure pointer operator/ arrow operator
	

	//Circle c1;
	//c1.centre.x = 0;
	//c1.centre.y = 5;
	//c1.radius = 6.4;
	const int N = 4;
	Circle circles[N];

	inputCircles(circles, N);
}

void displayPoint(const Point& p)
{
	cout << "(" << p.x << "," << p.y << ")" << endl;
}

void getPoint(Point& p)
{
	cin >> p.x >> p.y;
}

void displayPoints(const Point pts[], int size)
{
	for (int i = 0; i < size; i++)
		displayPoint(pts[i]);
}

void inputPoints(Point pts[], int size)
{
	for (int i = 0; i < size; i++)
		getPoint(pts[i]);
}

void getCircle(Circle& c)
{
	cout << "Enter Points :";
	getPoint(c.centre);
	cout << "Enter Radius: ";
	cin >> c.radius;
	cout << endl;
}

void displayCircle(const Circle& c)
{
	cout << "\nCentre is: ";
	displayPoint(c.centre);
	cout << "Radius is:" << c.radius << endl;
}

void displayCircles(const Circle crcs[], int size)
{
	for (int i = 0; i < size; i++)
		displayCircle(crcs[i]);
}

void inputCircles(Circle crcs[], int size)
{
	for (int i = 0; i < size; i++)
		getCircle(crcs[i]);
}