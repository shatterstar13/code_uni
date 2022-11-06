#include<iostream>
using namespace std;
int main()
{
	float cel, fr;
	char prompt;
	cout << "Enter 'C' to convert Celcius to Fahrenheit and 'F' to convert Fahrenheit to Celcius ";
	cin >> prompt;
	if (prompt == 'C' || prompt == 'c') {
		cout << "Enter temprature in Fahrenheit ";
		cin >> fr;
		cel = 5 * (fr - 32) / 9;
		cout << "Temprature in Celcius is " << cel;
	}
	else if (prompt == 'F' || prompt == 'f') {
		cout << "Enter temprature in Celcius ";
		cin >> cel;
		fr = ((9 * cel) / 5) + 32;
		cout << "Temprature in Fahrenheit is " << fr;
	}
	else
		cout << "Invalid";
	return 0;
}