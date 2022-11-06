#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int arr[3][5], n1, n2, l = 0, s = 0, temp1 = 0, temp2 = 0;
	float avg, sum;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5;) {
			cout << "Enter pounds of food for monkey no. " << i + 1 << " on Day " << j + 1<<": ";
			cin >> arr[i][j];
			if (arr[i][j] >= 0) {
				j++;
			}
			else
				cout << "Enter Valid Data.\n";
		}
		cout << "\n";
	}
	
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += arr[j][i];
		}
		avg = sum / 3;
		cout << "The average food eaten per day by the whole family of monkeys for day " << i + 1 << " is: "<<avg<<"\n";
	}
	cout << "\nEnter either [1/2/3] for the monkey you want to know about that ate the least amount of food: ";
	cin >> n1;
	s = arr[n1-1][0];
	for (int i = 0; i < 5; i++) {
		if (arr[n1][i] < s) {
			s = arr[n1][i];
			temp1 = i;
		}
	}
	cout << "\nThe least amount of food eaten by monkey no. " << n1 << " was: " << s << " on Day " << temp1 + 1<<"\n";
	cout << "\nEnter either [1/2/3] for the monkey you want to know about that ate the most amount of food: ";
	cin >> n2;
	l = arr[n2-1][0];
	for (int i = 0; i < 5; i++) {
		if (arr[n2][i] > l) {
			l = arr[n2][i];
			temp2 = i;
		}
	}
	cout << "\nThe least amount of food eaten by monkey no. " << n2 << " was: " << l << " on Day " << temp2 + 1<<"\n\n";
}