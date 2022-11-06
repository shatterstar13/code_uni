#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int arr[3]{};
	for (int i = 0; i < 3; i++) {
		cout << "Enter an integer at index [" << i << "]: ";
		cin >> arr[i];
	}
	int *p;
	p = arr;
	int count = 0;
	while (count<3) {
		cout << setw(4) << *p;
		p++;
		count++;
	}
}