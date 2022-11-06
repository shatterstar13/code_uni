#include <iostream>
#include <cstring>
using namespace std;
#define size 20
void concat(char a[], int b, char c[]);
int main() {
	char arr1[size]{}, arr2[size]{};
	int size_of{};
	cout << "Enter string 1: ";
	cin.getline(arr1, size);
	cout << "Enter string 2: ";
	cin.getline(arr2, size);
	size_of = strlen(arr2);
	concat(arr1, size_of, arr2);
}

void concat(char a[], int b, char c[])
{
	for (int i = 0; a[i] != '\0'; i++) {
		c[b] = a[i];
		b++;
	}
	c[b] = '\0';
	cout << c;
}
