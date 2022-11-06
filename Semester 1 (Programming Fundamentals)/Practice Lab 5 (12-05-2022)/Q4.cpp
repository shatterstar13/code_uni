#include <iostream>
#include <cstring>
using namespace std;
#define size 20
void printRight(char a[], int b, int c);
int main() {
	char arr[size]{};
	int size_of{}, k{};
	cout << "Enter the string: ";
	cin.getline(arr, size);
	size_of = strlen(arr);
	cout << "Enter the number of characters you want to print from the right of the string (including spaces): ";
	cin >> k;
	printRight(arr, k, size_of);
}

void printRight(char a[], int b, int c)
{
	if (b < c) {
		for (int i = c - b; i < c; i++) {
			cout << a[i];
		}
	}
}
