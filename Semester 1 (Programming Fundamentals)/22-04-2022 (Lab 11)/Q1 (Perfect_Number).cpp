#include <iostream>
using namespace std;
void perfect() 
{
	int n, sum = 0;
	cout << "Enter a positive integer: ";
	cin >> n;
	if (n >= 1 && n <= 100) 
	{
		for (int x = 1; x < n; x++) 
		{
			if (n % x == 0) 
			{
				sum += x;
			}
		}
		if (sum == n) 
		{
			cout << "It is a perfect number.";
		}
		else
			cout << "It is not a perfect number.";
	}
	return 0;
}
int main() 
{
	perfect();
}