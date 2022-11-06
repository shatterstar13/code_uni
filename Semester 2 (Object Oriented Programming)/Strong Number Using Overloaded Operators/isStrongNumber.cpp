#include "MyInt.h"
#include <iostream>

using namespace std;

int main()
{
	MyInt obj;
	cout << "\nEnter a number: ";
	cin >> obj;
	if (isStrongNumber(obj))
	{
		cout << "\n" << obj.getNum() << " is a strong number.\n\n";
	}
	else
		cout << "\n" << obj.getNum() << " is not a strong number.\n\n";
}