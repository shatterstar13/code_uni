#include <iostream>
using namespace std;
int check_prime(int a);
int main() {
	int n{}, chk{};
	cout << "Enter an integer: ";
	cin >> n;
	chk = check_prime(n);
	if (chk == 1) {
		cout << n << " is a prime number.";
	}
	else if (chk == 0) {
		cout << n << " is not a prime number.";
	}
}

int check_prime(int a)
{
	int count = 2;
	while (count < a/2) {
		if (a % count == 0)
			return 0;
		else
			count++;
	}
	return 1;
}
