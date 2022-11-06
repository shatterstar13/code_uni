#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter the number of  a month ";
	cin >> x;
	if (x % 2 != 0)
	{
		if (x == 1)
			cout << "January";
		else if (x == 3)
			cout << "March";
		else if (x == 5)
			cout << "May";
		else if (x == 7)
			cout << "July";
		else if (x == 9)
			cout << "September";
		else if (x == 11)
			cout << "November";
		else
			cout<<("Invalid");
	}
	else if (x % 2 == 0)
	{
		if (x == 2)
			cout << "February";
		else if (x == 4)
			cout << "April";
		else if (x == 6)
			cout << "June";
		else if (x == 8)
			cout << "August";
		else if (x == 10)
			cout << "October";
		else if(x == 12)
			cout << "December";
		else
			cout << ("Invalid");
	}
	return 0;
}