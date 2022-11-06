#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	int num, x = 1;
	cout << "Enter a number: ";
	cin >> num;
	for (; x <= 10; x++) {
		cout <<setw(4) << num << setw(4) << " * " << setw(4) << x << setw(4) << " = " << setw(4) << num * x << endl;
		//printf("%d  *  %2d  =  %d\n", num, x, num * x);
	}
	return 0;
}