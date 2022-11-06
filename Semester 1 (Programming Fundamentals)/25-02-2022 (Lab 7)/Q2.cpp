#include<iostream>
using namespace std;
int main() {
	int num, count1{ 0 }, count2{ 0 }, temp{};
	cout << "Enter the number of numbers you want to enter: ";
	cin >> num;
	while (count1 <= num) {
		cout << "Enter a number: ";
		cin >> temp;
		if (temp % 2 != 0) {
			cout << temp << " is an odd number.\n";
			count2++;
		}
		count1++;
	}
	cout << "\n" << count2<<"odd numbers were entered.";
}