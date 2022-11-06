
// Muaz Saleem (BSEF21M036) : Program to check if a number is prime or not.

#include <iostream>
using namespace std;
bool isPrime(int);
int main()
{
	int num;
	cout << "Enter a positive integer: ";
	cin >> num;
	if (isPrime(num) == true) {
		cout << "\n\n";
		cout <<"\t" << num << " is a prime number.";
		cout << "\n\n";
	}
	else if (isPrime(num) == false) {
		cout << "\n\n";
		cout << "\t" << num << " is not a prime number.";
		cout << "\n\n";
	}
	return 0;
}

bool isPrime(int a)
{
	bool flag{ true };
	for (int x = 2; x <= a / 2; x++) {
		if (a % x == 0) {   // if the remainder is 0 (which means the number is a factor) number is not prime
			return false;
		}
	}
	return true;
}
