#include <iostream>
#include <cmath>
using namespace std;
int div() 
{
	int dividend = 0, divisor = 0, quotient = 0, sign = 0;
	cout << "Enter the dividend (the number that is to be divided): ";
	cin >> dividend;
	cout<< "Enter the divisor (the number that is to be divided with): ";
	cin >> divisor;
	sign = ((dividend < 0) || (divisor < 0)) ? -1 : 1;
	if (dividend < 0)
	{
		dividend = abs(dividend);
	}
	if (divisor < 0)
	{
		divisor = abs(divisor);
	}
	while (dividend >= divisor)
	{
		dividend -= divisor;
		++quotient;

	} 
	return quotient * sign;
}
int main() 
{
	cout<< div();
}