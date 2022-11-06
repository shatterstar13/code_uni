#include<iostream>
using namespace std;
int main()
{
	int sum=0, x=0, num;
	cout << "Enter a four digit integer ";
	cin >> num;
	/*th = num / 1000;
	sum += th;
	num = num % 1000;
	h = num / 100;
	sum += h;
	num = num % 100;
	t = num / 10;
	sum += t;
	num = num % 10;
	u = num;
	sum += u;*/
	while (num != 0) {
		x = num % 10;
		sum += x;
		num /= 10;
	}
	cout << "The sum of the digits of the 4 digit number are: " << sum;
}