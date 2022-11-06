#include <iostream>
using namespace std;
#define n 10
int main() {
	int num[n]{}, temp = 0, count = 0, first = 0;
	for (int i = 0; i < n;i++) {
		cout << "Enter a positive integer at index [" << i << "]: ";
		cin >> temp;
		for (int j = i + 1; j < n; j++) {
			if (temp != num[j]) {
			num[i] = temp;
			count++;
			}
		}
	}
}