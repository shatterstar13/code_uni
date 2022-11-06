#include<iostream>
using namespace std;
int sum = 0;
int main()
{
	int total_u;
	float total = 0;
	cout << "Enter total number of units ";
	cin >> total_u;
	if (total_u <= 50) {
		total = total_u * 0.5;
		cout << total;
		sum += total;
	}
	else if (total_u <= 150) {
		total = sum + ((total_u - 50) * 0.75);
		cout << total;
		sum += total;
	}
	else if (total_u <= 250) {
		total = sum + ((total_u - 150) * 1.20);
		cout << total;
		sum += total;
	}
	else if (total_u > 250) {
		total = sum + ((total_u - 250) * 1.50);
		cout << total;
	}
	else
		cout << "Invalid";
	return 0;
}