#include <iostream>
#include <iomanip>
using namespace std;
#define n 20
int main() {
	char ans[n]{ 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B', };
	char std[n]{}, prompt = 'C';
	int count = 0;
	if (prompt == 'C' || prompt == 'c') {
		for (int i = 0; i < 20;) {
			cout << "Enter the answer to question no. " << i + 1 << " : ";
			cin >> std[i];
			if (std[i] == 'A' || std[i] == 'B' || std[i] == 'C' || std[i] == 'D') {
				i++;
			}
			else
				cout << "Enter either [A/B/C/D].";
		}
		for (int i = 0; i < 20; i++) {
			if (std[i] == ans[i]) {
				count++;
			}
		}
		if (count >= 15 && count <= 20) {
			cout << "The student has Passed!";
		}
		else
			cout << "The student has failed!";
		cout << "\nThe number of correct answers was : " << count << "\nThe number of incorrect answers was: " << 20 - count;
		cout << "\nThe incorrect answers were given for the following questions:\n";
		for (int i = 0; i < 20; i++) {
			if (std[i] != ans[i]) {
				cout << "Q no. " << i + 1 << "\n";
			}
		}
		cout << "Enter [C/c] to continue and [S/s] to stop: ";
		cin >> prompt;
	}
	else if (prompt == 'S' || prompt == 's') {
		cout << "\n\n***************************************************************";
	}
	else
		cout << "Enter either [C/c] or [S/s].";
}