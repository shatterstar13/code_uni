#include<iostream>
#include <fstream>
using namespace std;
int jan(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 31; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for January are " << avg << endl;
	return sum;
}
int feb(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 59; sum++) {
		file >> n;
		sum2 += n;
	}
	sum2 -= sum;
	double avg = sum2 / sum;
	cout << "The average steps for February are " << avg << endl;
	return 0;
}
int march(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 90; sum++) {
		file >> n;
		sum2 += n;
	}
	sum2 -= sum;
	double avg = sum2 / sum;
	cout << "The average steps for March are " << avg << endl;
	return sum;
}
int april(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 120; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for April are " << avg << endl;
	return 0;
}
int may(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 151; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for May are " << avg << endl;
	return 0;
}
int june(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 181; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for June are " << avg << endl;
	return 0;
}
int july(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 212; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for July are " << avg << endl;
	return 0;
}
int aug(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 243; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for August are " << avg << endl;
	return 0;
}
int sept(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 273; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for September are " << avg << endl;
	return 0;
}
int octo(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 304; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for October are " << avg << endl;
	return 0;
}
int nov(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 334; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for November are " << avg << endl;
	return 0;
}
int decem(int n, int sum, int sum2) {
	ifstream file;
	file.open("steps.txt");
	for (sum = 1; sum <= 365; sum++) {
		file >> n;
		sum2 += n;
	}
	double avg = sum2 / sum;
	cout << "The average steps for December are " << avg << endl;
	return 0;
}
int main() {
	ifstream file;
	file.open("steps.txt");
	int n=0, sum = 0; int sum2 = 0;
	jan(n, sum, sum2);
	feb(n, sum, sum2);
	march(n, sum, sum2);
	april(n, sum, sum2);
	may(n, sum, sum2);
	june(n, sum, sum2);
	july(n, sum, sum2);
	aug(n, sum, sum2);
	sept(n, sum, sum2);
	octo(n, sum, sum2);
	nov(n, sum, sum2);
	decem(n, sum, sum2);
}