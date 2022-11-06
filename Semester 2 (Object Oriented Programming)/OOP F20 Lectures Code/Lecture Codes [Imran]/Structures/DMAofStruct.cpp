#include <iostream>
using namespace std;
struct Point
{
	int x, y;
};
void displayPoint(const Point*);
void getPoint(Point&);
Point getPoint();
void getPoint(Point*);
void displayPoints(const Point*, int);
void inputPoints(Point*, int);
void main()
{
	int n;
	cout << "Enter size: ";
	cin >> n;
	Point* pts = new Point[n];
	inputPoints(pts, n);
	displayPoints(pts, n);

	delete[] pts;
	pts = nullptr;
}

void displayPoint(const Point* p)
{
	cout << "(" << p->x << "," << p->y << ")" << endl;
}

void getPoint(Point& p)
{
	cout << "Enter X-coordinate:";
	cin >> p.x;
	cout << "Enter Y-coordinate:";
	cin >> p.y;
}

void getPoint(Point* ptr)
{
	cout << "Enter Points:";
	cin >> ptr->x >> ptr->y;
}
Point getPoint()
{
	Point temp;
	cout << "Enter X-coordinate:";
	cin >> temp.x;
	cout << "Enter Y-coordinate:";
	cin >> temp.y;

	return temp;
}

void displayPoints(const Point* pts, int size)
{
	for (int i = 0; i < size; i++)
	{
		displayPoint(&pts[i]);
	}
}

void inputPoints(Point* pts, int size)
{
	for (int i = 0; i < size; i++)
	{
		//points[i]=getPoint();
		//OR
		//getPoint(pts[i]);
		//or
		getPoint(&pts[i]);
	}
}