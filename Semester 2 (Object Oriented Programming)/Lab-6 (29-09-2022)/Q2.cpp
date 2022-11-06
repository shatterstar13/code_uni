#include "Time.h"
#include <iostream>

using namespace std;

int main()
{
	int h{}, m{}, s{};
	Time obj;
	cout << "\nEnter hours: ";
	cin >> h;
	obj.setH(h);
	cout << "\nEnter minutes: ";
	cin >> m;
	obj.setM(m);
	cout << "\nEnter seconds: ";
	cin >> s;
	obj.setS(s);
	obj.print();

	obj.advance(2, 3, 4);
	obj.print();

	obj.reset(10,20,30);
	obj.print();
}
