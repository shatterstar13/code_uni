#include <iostream>
#include <cstring>
#define size 30
using namespace std;
void titleCase(char a[]);
int main() {
	char arr[size]{};
	int size_of{};
	cout << "Enter the string: ";
	cin.getline(arr, size);
	titleCase(arr);
}

void titleCase(char a[])
{
	if (a[0] >= 'a' && a[0] <= 'z') {
		a[0] -= 32;
	}
	for (int i = 1; a[i] != '\0'; i++) {
		if (a[i] == ' ') {
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z') {
				a[i + 1] -= 32;
			}
		}
	}
	/*for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			if (a[i + 1] >= 'A' && a[i + 1] < 'Z') {
				a[i + 1] += 32;
			}
		}
	}*/
	cout <<"The string in title case is: " << a;
}
