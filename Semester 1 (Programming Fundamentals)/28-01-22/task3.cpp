#include <iostream>
using namespace std;
int main()
{
	float cel1, cel2, fahr;
	cout << "Enter Temprature in Celcius";
	cin >> cel1;
	fahr = cel1 * 9 / 5 + 32;
	cout << "Fahrenheit" << fahr <<"\n";
	cel2 = (fahr - 32) * 5 / 9;
	cout << "Celcius" << cel2;
	return 0;
}