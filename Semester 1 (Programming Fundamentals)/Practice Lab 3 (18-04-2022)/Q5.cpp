#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int score[30], passing[30], count = 0;;
	for (int i = 0; i < 30; i++) {
		passing[i] = 0;
	}
	for (int i = 0; i < 30; i++) {
		cout << "Enter the score of student no. " << i + 1 << ": ";
		cin >> score[i];
		if (score[i] >= 60) {
			passing[i] = 1;
		}
	}
	cout << "The index numbers of the students that passed are:\n";
	for (int i = 0; i < 30; i++) {
		if (passing[i] == 1) {
			cout << i << "\n";
		}
	}
	for (int i = 0; i < 30; i++) {
		if (passing[i] == 1) {
			count++;
		}
	}
	cout << "\nThe number of students that passed is: " << count;
}