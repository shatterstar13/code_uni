#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int op;
	double x, y;
	cout << "Enter two integers ";
	cin >> x >> y;
	cout << "Enter an operator code as (1 for +, 2 for -, 3 for * and 4 for /)";
	cin >> op;
	if (op == 1) {
		cout << "The sum is " << x + y;
	}
	else if (op == 2) {
		cout << "The difference is " << x - y;
	}
	else if (op == 3) {
		cout << "The product is " << x * y;
	}
	else if (op == 4) {
		cout << "The division is " << x / y;
	}
	else
		cout << "Invalid";
	return 0;
}