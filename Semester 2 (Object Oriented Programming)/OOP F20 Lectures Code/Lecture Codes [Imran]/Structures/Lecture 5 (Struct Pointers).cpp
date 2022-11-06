#include <iostream>
using namespace std;

struct point
{
	int x, y;
};

void displaypoint(const point&);
void getpoint(point&);
void getpoint(point*);
point getpoint();
void displaypoints(const point[], int);
void inputpoints(point[], int);

void main()
{
	// *   derefrencing operator
	// .   dot operator
	// ->  structure pointer operator/ arrow operator
	point pt1 ;
	point* ptr1 = &pt1;
	/*(*ptr1).x = 7; 
	(*ptr1).y = 15;  
	displaypoint(pt1);

	ptr1->x = 14;
	ptr1->y = 30;
	displaypoint(pt1);*/

	getpoint(ptr1); //or  getpoint(&pt1);
	displaypoint(pt1);
}

void displaypoint(const point& p)
{
	cout << "the point is: (" << p.x << "," << p.y << ")" << endl;
}

void getpoint(point& p)
{
	cout << "enter x-coordinate:";
	cin >> p.x;
	cout << "enter y-coordinate:";
	cin >> p.y;
}

point getpoint()
{
	point temp;
	cout << "enter x-coordinate:";
	cin >> temp.x;
	cout << "enter y-coordinate:";
	cin >> temp.y;

	return temp;
}

void displaypoints(const point pts[], int size)
{
	for (int i = 0; i < size; i++)
		displaypoint(pts[i]);
}

void inputpoints(point pts[], int size)
{
	for (int i = 0; i < size; i++)
		getpoint(pts[i]);
}

void getpoint(point* ptr)
{
	cout << "enter x-coordinate:";
	cin >> ptr->x;
	cout << "enter y-coordinate:";
	cin >> ptr->y;
}