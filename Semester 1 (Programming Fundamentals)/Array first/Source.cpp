#include <iostream>
using namespace std;
int main() {
	long int num[5]{};
	cout << "Enter five digits ";
	int n = 0;
	while (n <= 4) {
		cin >> num[n];
		cout << num[n] << endl;
		n++;
	}
}