#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter character ";
	cin >> ch;
	if (ch >= 65 && ch <= 90)
	{
		cout << "It is an upprecase alphabet";
	}
	else if (ch >= 97 && ch <= 122)
	{
		cout << "It is a lowercase character";
	}
	else
		cout << "It is a special character";
	return 0;
}
