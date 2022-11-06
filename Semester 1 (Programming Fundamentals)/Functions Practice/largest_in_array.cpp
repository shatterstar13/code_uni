#include <iostream>
using namespace std;
#define n 5
int largest(int arr[n]);
int main() {
	int num[n]{};
	for (int i = 0; i < n; i++) {
		cout << "Enter an integer at index [" << i << "]: ";
		cin >> num[i];
	}
	cout << largest(num) << " is the largest number.";
}
int largest(int arr[n])
{
	int l = arr[0];
	for (int i = 1; i < n; i++) {
		if (l < arr[i]) {
			l = arr[i];
		}
	}
	return l;
}
