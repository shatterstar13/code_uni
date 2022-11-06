#include <iostream>
using namespace std;
int main() {
	cout << "----------------------------------------------\n";
	cout << "Pattern A                         Pattern B\n";
	cout << "----------------------------------------------\n";
	for (int out = 1; out <= 10; out++) {
		int s;
		for (int in = 1; in <= out; in++) {
			cout << "+ " ;
		}
		for (s = 0; s <= 10-out; s++) {
			cout << " ";
		}
		for (s = 0; s <= 10-out; s++) {
			cout << " ";
		}
		for (int in = 10; in >= out; in--) {
			cout << "+ ";
		}
		cout << endl;
	}
}