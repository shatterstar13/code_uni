#include <iostream>
#include <cstring>
using namespace std;
#define size 20
void printLeft(char a[], int b, int c);
int main() {
	char arr[size]{};
	int size_of{}, k{};
	cout << "Enter the string: ";
	cin.getline(arr, size);
	size_of = strlen(arr);
	cout << "Enter the number of characters you want to print from the left of the string (including spaces): ";
	cin >> k;
	printLeft(arr, k, size_of);
}

void printLeft(char a[], int b, int c)
{
	if (b < c) {
		for (int i = 0; i < b; i++) {
			cout << a[i];
		}
	}
}
