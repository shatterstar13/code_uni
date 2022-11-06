#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main() {
	/*int x = 1, n;
	cout << "Enter n ";
	cin >> n;
	while (x <= n) {
		cout << x<<" ";
		x++;
	}*/
	/*int x, n;
	cout << "Enter n ";
	cin >> n;
	x = n;
	while (x >= 1) {
		cout << x << " ";
		x--;
	}*/
	/*char x = 'a';
	while (x <= 'z') {
		cout << x << " ";
		x++;
	}*/
	/*int x = 1;
	while (x <= 100) {
		if (x % 2 == 0) {
			cout << x << " ";
		}
		x++;
	}*/
	/*int x = 1;
	while (x <= 100) {
		if (x % 2 != 0) {
			cout << x << " ";
		}
		x++;
	}*/
	/*int x = 1, n, sum = 0;
	cout << "Enter n ";
	cin >> n;
	while (x <= n) {
		x++;
		sum += x;
	}
	cout << sum;*/
	/*int x = 1, n, sum = 0;
	cout << "Enter n ";
	cin >> n;
	while (x <= n) {
		if (x % 2 == 0) {
			sum += x;
		}
		x++;
	}
	cout << sum;*/
	/*int x = 1, n, sum = 0;
	cout << "Enter n ";
	cin >> n;
	while (x <= n) {
		if (x % 2 != 0) {
			sum += x;
		}
		x++;
	}
	cout << sum;*/
	/*int x = 1, n;
	cout << "Enter a number ";
	cin >> n;
	cout<<"*****************************\n";
	while (x <= 10) {
		cout << setw(4) <<fixed<< x<<" " << " * " <<" " << n <<" " << " = " <<" " << x * n << endl;
		x++;
	}
	cout<<"*****************************\n";*/
	/*int n, sum = 0;
	cout << "Enter any number ";
	cin >> n;
	while (n != 0) {
		n /= 10;
		sum++;
	}
	cout << "There are " << sum << " digits in this number";*/
	/*int x, n, first, last, sum = 0;
	cout << "Enter any number ";
	cin >> n;
	last = n % 10;
	while (n >= 10) {
		n /= 10;
	}
	cout << "The first digit is " << n << endl;
	cout << "The last digit is " << last;*/
	/*int x, n, first, last, sum = 0, n2, r;
	cout << "Enter any number ";
	cin >> n;
	n2 = n;
	last = n % 10;
	while (n != 0) {
		n /= 10;
		sum++;
	}
	sum -= 1;
	r = pow(10, sum);
	first = n2 / r;
	cout << "The first digit is " << first << endl;
	cout << "The last digit is " << last;*/
	/*int x, n, first, last, sum = 0;
	cout << "Enter any number ";
	cin >> n;
	last = n % 10;
	while (n >= 10) {
		n /= 10;
	}
	cout << "The sum of the first and last digit is " << n+last << endl;*/
	/*int x, n, first, last, sum = 0, n2, r, swap;
	cout << "Enter any number ";
	cin >> n;
	n2 = n;
	last = n % 10;
	while (n != 0) {
		n /= 10;
		sum++;
	}
	sum -= 1;
	r = pow(10, sum);
	first = n2 / r;
	swap = last;
	swap *= r;
	swap += (n2 % r);
	swap -= last;
	swap += first;
	cout << "The number with swapped digits is " << swap;*/
}