#include <iostream>
#include <cstring>
using namespace std;

char* left(const char* target, const int count);
void destructor(char*);

int main()
{
	/*
	char target[30]{}, extract[30]{};

	cout << "Enter a maximum of 30 characters: ";

	for (int i = 0; i < n; i++) {
		cout << "Enter a single character: ";
		cin >> target[i];
		cout << "\n";
	}

	if (count < 30) {
		cout << left(target, count);
	}
	else {
		cout << "Please enter a valid value (<=30).";
	}
	cout << "\n\n\n\n";*/

	int n;
	cout << "Enter the number of max characters in the array: ";
	cin >> n;
	cout << "\n";

	char* arr = new char[n] {};

	cin.ignore();

	cin.clear();

	cout << "Enter the string: ";
	cin.getline(arr, n);
	cout << "\n";

	int count{};
	cout << "Enter the number of letters to be printed from the Left: ";
	cin >> count;

	while (count < 0 && count >= n)
	{
		cout << "ERROR: Invalid.\nInput Again.\n";
	}
	cout << "\n";

	char* target = left(arr, count);

	cout << "Left Substring : ";
	for (int i = 0; i < count; i++)
	{
		cout << target[i];
	}

	destructor(arr);
	destructor(target);
}

char* left(const char* target, const int count)
{
	char* arr = new char[count] {};

	for (int i = 0; i < count; i++) {
		arr[i] = target[i];
	}
	return arr;
}

void destructor(char* p)
{
	delete p;
	p = nullptr;
}