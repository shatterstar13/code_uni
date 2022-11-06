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

void displayPoint(const Point*);
void getPoint(Point*);
void getCircle(Circle*);
void displayCircle(const Circle*);
void inputCircles(Circle*, int);
void displayCircles(const Circle*, int);

int main()
{

	//when to use .(dot operator) and ->(pointer operator/ arrow operator)
	// on left side of . operator there must be an object/variable
	// on left side of -> operator there must be a pointer

	int n;
	cout << "Enter size: ";
	cin >> n;
	Circle* crcl = new Circle[n];
	inputCircles(crcl, n);
	displayCircles(crcl, n);

	delete[] crcl;
	crcl = nullptr;


}

void displayPoint(const Point* p)
{
	cout << "(" << p->x << "," << p->y << ")" << endl;
}

void getPoint(Point* p)
{
	cin >> p->x >> p->y;
}


void getCircle(Circle* c)
{
	cout << "Enter Points :";
	getPoint(&(c->centre));
	cout << "Enter Radius: ";
	cin >> c->radius;
	cout << endl;
}

void displayCircle(const Circle* c)
{
	cout << "\nCentre is: ";
	displayPoint(&(c->centre));
	cout << "Radius is:" << c->radius << endl;
}

void displayCircles(const Circle* crcs, int size)
{
	for (int i = 0; i < size; i++)
		displayCircle(&crcs[i]);
}

void inputCircles(Circle* crcls, int size)
{
	for (int i = 0; i < size; i++)
		getCircle(&crcls[i]);
}