#include <iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream a;
	a.open("Random.txt");
	int num, sum = 0, count = 0;
	float avg;
	while (a >> num) {
		sum += num;
		count++;
	}
	avg = sum / count;
	cout << "The number of numbers in the file is " << count << endl;
	cout << "The sum of all the numbers in the file is " << sum << endl;
	cout << "The average of the sum of all the numbers in the file is " << avg;
}