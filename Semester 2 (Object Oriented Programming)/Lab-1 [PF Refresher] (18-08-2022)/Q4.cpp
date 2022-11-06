#include <iostream>
using namespace std;

int findMin(int inArray[], const int size);
int findMax(int inArray[], const int size);
int computeAverage(int inArray[], const int size);
int computeMedian(int inArray[], const int size);

int main() {
	int n;
	cout << "Enter the number of students: ";
	cin >> n;
	cout << "\n";
	int* marks;
	marks = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Enter marks of a student: ";
		cin >> marks[i];
		cout << "\n";
		if (marks[i] < 0) {
			cout << "Enter a Positive number.\n";
			i--;
		}
		cout << "\n";
	}

	cout << "\n\n";

	cout << "The Highest Marks are: " << findMax(marks, n) << "\n\n";

	cout << "The Lowest Marks are: " << findMin(marks, n) << "\n\n";

	cout << "The Average Marks are: " << computeAverage(marks, n) << "\n\n";

	int temp{};

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (marks[i] >= marks[j]) {
				temp = marks[i];
				marks[i] = marks[j];
				marks[j] = temp;
			}
		}
	}

	cout << "The Median is: " << computeMedian(marks, n);
	cout << "\n\n\n\n";
}

int findMin(int inArray[], const int size)
{
	int min = inArray[0];
	for (int i = 0; i < size; i++) {
		if (inArray[i] <= min) {
			min = inArray[i];
		}
	}

	return min;
}

int findMax(int inArray[], const int size)
{
	int max = inArray[0];
	for (int i = 0; i < size; i++) {
		if (inArray[i] >= max) {
			max = inArray[i];
		}
	}

	return max;
}

int computeAverage(int inArray[], const int size)
{
	int avg{}, sum{};
	for (int i = 0; i < size; i++) {
		sum += inArray[i];
	}
	avg = sum / size;

	return avg;
}

int computeMedian(int inArray[], const int size)
{
	if (size % 2 != 0) {
		return inArray[size / 2];
	}
	else if (size % 2 == 0) {
		return (inArray[size / 2] + inArray[(size / 2) - 1]) / 2;
	}
}
