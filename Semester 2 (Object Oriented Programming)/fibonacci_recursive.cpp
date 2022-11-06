#include <iostream>
#include <iomanip>

using namespace std;

int fibonacci(int);

int main() {
	int n{};
	cout << "Enter the number of term you want to see: ";
	cin >> n;

	cout<<fibonacci(n);

	return 0;
}

int fibonacci(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}