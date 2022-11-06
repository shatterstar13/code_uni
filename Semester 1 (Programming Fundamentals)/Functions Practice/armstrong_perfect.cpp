#include <iostream>
using namespace std;
int perfect(int);
int armstrong(int);
int main() {
	int n{};
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "\n";
	if (perfect(n))
		cout << n << " is a perfect number.\n";
	else 
		cout << n << " is not a perfect number.\n";
	
	if (armstrong(n)) 
		cout << n << " is an armstrong number.";
	else
		cout << n << " is not an armstrong number.";
}
int perfect(int a)
{
	int sum{};
	for (int x = 1; x < a; x++) {
		if (a % x == 0) {
			sum += x;
		}
	}
	return (sum == a);
}

int armstrong(int b)
{
	int count = 0, temp1, temp2, sum{}, rem{};
	temp1 = b;
	temp2 = b;
	while (b != 0) {
		b /= 10;
		count++;
	}
	while (temp1 != 0) {
		rem = temp1 % 10;
		sum += pow(rem, count);
		temp1 /= 10;
	}
	return (temp2 == sum);
}
