#include<iostream>
using namespace std;
int check_prime(int num);

int main() 
{
	int num, x, flag = 0;
	cout << "Enter a number ";
	cin >> num;
	for (x=2; x <= num/2; x++) 
	{
		if (check_prime(x) == 1)
		{
			if (check_prime(num - x) == 1) 
			{
				cout << num << " = " << x << " + " << num - x<<endl;
				flag = 1;
			}
		}
	}
	if (flag == 0) {
		cout << "Invalid";
	}
	return 0;
}
int check_prime(int num) 
{
	int x, flag = 1;
	for (x=2; x <= num/2; x++) 
	{
		if (num % x == 0) 
		{
			flag = 0;
		}
	}
	return flag;
}
