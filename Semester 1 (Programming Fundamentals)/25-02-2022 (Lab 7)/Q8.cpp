#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "Enter a letter of the alphabet ";
	cin >> ch;
	switch (ch) {
	case'a':
	case'A':
	cout << "It is a vowel";
	break;
	case'e':
	case'E':
		cout << "It is a vowel";
		break;
	case'i':
	case'I':
		cout << "It is a vowel";
		break;
	case'o':
	case'O':
		cout << "It is a vowel";
		break;
	case'u':
	case'U':
		cout << "It is a vowel";
		break;
	default:
		cout << "It is a consonant";
	}
	return 0;
}