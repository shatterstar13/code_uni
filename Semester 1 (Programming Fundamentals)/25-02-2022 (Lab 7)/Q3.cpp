#include<iostream>
using namespace std;
int main() {
	int num, lar{ 0 }, temp{}, count{ 1 };
	cout << "Enter the number of numbers you want to enter: ";
	cin >> num;
	while (count <= num) {
		cout << "Enter a number: ";
		cin >> temp;
		if (temp >=lar) {
			lar = temp;
			count++;
		}
	}
	cout << "\n" << lar << "is the largest number.";
}