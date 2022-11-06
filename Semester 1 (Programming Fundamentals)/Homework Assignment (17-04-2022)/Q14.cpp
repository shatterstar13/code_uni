#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int seed = time(0);
	srand(seed);
	int lottery[5]{ (rand() % (9 - 0 + 1)) + 0, (rand() % (9 - 0 + 1)) + 0, (rand() % (9 - 0 + 1)) + 0, (rand() % (9 - 0 + 1)) + 0, (rand() % (9 - 0 + 1)) + 0 };
	int user[5]{}, count = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Enter the lottery number (Between 0 and 9): ";
		cin >> user[i];
	}
	for (int i = 0; i < 5; i++) {
		if (lottery[i] == user[i]) {
			count++;
		}
	}
	if (count == 0) {
		cout << "There are no matching pairs. The lottery numbers are:\n";
		for (int i = 0; i < 5; i++) {
			cout << lottery[i]<<" ";
		}
	}
	else {
		cout << "There are " << count << " matching pairs: ( ";
		for (int i = 0; i < 5; i++) {
			if (lottery[i] == user[i]) {
				cout << lottery[i]<<", ";
			}
		}
		cout << ")";
	}
}