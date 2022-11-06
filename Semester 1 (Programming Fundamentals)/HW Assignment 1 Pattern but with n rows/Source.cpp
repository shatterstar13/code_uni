#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter number of rows ";
	cin >> n;
	cout << "----------------------------------------\n";
	cout << "Pattern A                     Pattern B\n";
	cout << "----------------------------------------\n";
	for (int out = 1; out <= n; out++) {
		int s;
		for (int in = 1; in <= out; in++) {
			cout << "+ " ;
		}
		for (s = 0; s <= n-out; s++) {
			cout << " ";
		}
		for (s = 0; s <= n-out; s++) {
			cout << " ";
		}
		for (int in = n; in >= out; in--) {
			cout << "+ ";
		}
		cout << endl;
	}
}