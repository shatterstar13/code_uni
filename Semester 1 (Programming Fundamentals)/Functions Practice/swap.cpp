#include <iostream>
using namespace std;
void swap(int *a, int *b);
int main() {
	int num1{}, num2{};
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "The numbers before swapping are: num1 = " << num1 << " and num2 = " << num2;
	swap(&num1, &num2);
	cout << "\nThe numbers after swapping are: num1 = " << num1 << " and num2 = " << num2;
}

void swap(int *a, int *b)
{
	int temp{};
	temp = *a;
	*a = *b;
	*b = temp;
}
