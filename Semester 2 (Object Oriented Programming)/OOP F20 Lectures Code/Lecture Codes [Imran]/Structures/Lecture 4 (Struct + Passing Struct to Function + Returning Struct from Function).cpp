#include <iostream>
using namespace std;

struct Point
{
	int x, y;
};

void displayPoint(const Point&);
void getPoint(Point&);
Point getPoint();
void displayPoints(const Point[], int);
void inputPoints(Point[], int);

void main()
{
	Point pt1={0};
	Point pt2 = { 33,01 };
	/*cout << "Enter X-coordinate:";
	cin >> pt1.x;
	cout << "Enter Y-coordinate:";
	cin >> pt1.y;*/
	//getPoint(pt1);
	//pt1 = getPoint();
	/*cout << "\nIN MAIN\n"
		<< "Address of pt1 is:" << &pt1 << endl
		<< "Address of pt2 is:" << &pt2;*/
	//cout << "The point is: (" << pt1.x << "," << pt1.y << ")" << endl;
	/*displayPoint(pt1);
	displayPoint(pt2);*/

	const int N = 5;
	Point points[N];

	inputPoints(points, N);
	displayPoints(points, N);
	/*for (int i = 0; i < N; i++)
	{
		displayPoint(points[i]);
	}*/
}

void displayPoint(const Point &p)
{
	//cout << "\nIn displayPoint function address of p is:" << &p << endl;
	cout << "The point is: (" << p.x << "," << p.y << ")" << endl;
}

void getPoint(Point& p)
{
	cout << "Enter X-coordinate:";
	cin >> p.x;
	cout << "Enter Y-coordinate:";
	cin >> p.y;
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

void displayPoints(const Point pts[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//cout << "(" << pts[i].x << "," << pts[i].y << ")" << endl;
		displayPoint(pts[i]);
	}
}

void inputPoints(Point pts[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//points[i]=getPoint();
		//OR
		getPoint(pts[i]);
	}
}