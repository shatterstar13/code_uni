#include <iostream>
#include <cstring>
using namespace std;
#define size 20
void printFromP(char a[], int b, int c, int d);
int main() {
	char arr[size]{};
	int size_of{}, k{}, p{};
	cout << "Enter the string: ";
	cin.getline(arr, size);
	size_of = strlen(arr);
	cout << "Enter the starting position: ";
	cin >> p;
	cout << "Enter the number of characters you want to print from the starting position (including spaces): ";
	cin >> k;
	printFromP(arr, size_of, p, k);
}

void printFromP(char a[], int b, int c, int d)
{
	if (d < b) {
		for (int i = c - 1; i < (c - 1) + d; i++) {
			cout << a[i];
		}
	}
}
