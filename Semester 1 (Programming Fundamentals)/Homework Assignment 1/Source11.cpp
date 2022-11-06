#include <iostream>
#include <string>
using namespace std;
int main() {
	string prompt1, prompt2, prompt3;
	cout << "Choose either [YES/Yes/yes] or [NO/No/no]" << endl;
	cout << "Is anyone in your party a Vegetarian? ";
	cin >> prompt1;
	cout << endl;
	cout << "Is anyone in your party a Vegan? ";
	cin >> prompt2;
	cout << endl;
	cout << "Is anyone in your party Gluten Intolerant? ";
	cin >> prompt3;
	cout << endl;
	if (prompt1 == "yes" || prompt1 == "Yes" || prompt1 == "YES") {
		if (prompt2 == "yes" || prompt2 == "Yes" || prompt2 == "YES") {
			if (prompt3 == "yes" || prompt3 == "Yes" || prompt3 == "YES") {
				cout << "Here are your list of choices: " << endl;
				cout << "Corner Cafe" << endl;
				cout << "The Chef's Kitchen" << endl;
			}
			if (prompt3 == "no" || prompt3 == "No" || prompt3 == "NO") {
				cout << "Here are your list of choices: " << endl;
				cout << "Corner Cafe" << endl;
				cout << "The Chef's Kitchen" << endl;
			}
		}
	}
	if (prompt1 == "yes" || prompt1 == "Yes" || prompt1 == "YES") {
			if (prompt2 == "no" || prompt2 == "No" || prompt2 == "NO") {
				if (prompt3 == "yes" || prompt3 == "Yes" || prompt3 == "YES") {
					cout << "Here are your list of choices: " << endl;
					cout << "Main Street Pizza Company" << endl;
					cout << "Corner Cafe" << endl;
					cout << "The Chef's Kitchen" << endl;
				}
				if (prompt3 == "no" || prompt3 == "No" || prompt3 == "NO") {
					cout << "Here are your list of choices: " << endl;
					cout << "Main Street Pizza Company" << endl;
					cout << "Corner Cafe" << endl;
					cout << "Mama's Fine Italian" << endl;
					cout << "The Chef's Kitchen" << endl;
				}
			}
	}
	if(prompt1 == "no" || prompt1 == "No" || prompt1 == "NO") {
		if (prompt2 == "yes" || prompt2 == "Yes" || prompt2 == "YES") {
			if (prompt3 == "yes" || prompt3 == "Yes" || prompt3 == "YES") {
				cout << "Here are your list of choices: " << endl;
				cout << "Corner Cafe" << endl;
				cout << "The Chef's Kitchen" << endl;
			}
			if (prompt3 == "no" || prompt3 == "No" || prompt3 == "NO") {
				cout << "Here are your list of choices: " << endl;
				cout << "Corner Cafe" << endl;
				cout << "The Chef's Kitchen" << endl;
			}
		}
	}
	if (prompt1 == "no" || prompt1 == "No" || prompt1 == "NO") {
			if (prompt2 == "no" || prompt2 == "No" || prompt2 == "NO") {
				if (prompt3 == "no" || prompt3 == "No" || prompt3 == "NO") {
					cout << "Here are your list of choices: " << endl;
					cout << "Joe's Gourmet Burgers" << endl;
					cout << "Main Street Pizza Company" << endl;
					cout << "Corner Cafe" << endl;
					cout << "Mama's Fine Italian" << endl;
					cout << "The Chef's Kitchen" << endl;
				}
				if (prompt3 == "yes" || prompt3 == "Yes" || prompt3 == "YES") {
					cout << "Here are your list of choices: " << endl;
					cout << "Main Street Pizza Company" << endl;
					cout << "Corner Cafe" << endl;
					cout << "The Chef's Kitchen" << endl;
				}
			}
		}
	if (!(prompt1 == "yes" || prompt1 == "Yes" || prompt1 == "YES" || prompt1 == "no" || prompt1 == "No" || prompt1 == "NO")) {
		cout << "Choose either [YES/Yes/yes] or [NO/No/no]" << endl;
	}
	if (!(prompt2 == "yes" || prompt2 == "Yes" || prompt2 == "YES" || prompt2 == "no" || prompt2 == "No" || prompt2 == "NO")) {
		cout << "Choose either [YES/Yes/yes] or [NO/No/no]" << endl;
	}
	if (!(prompt3 == "yes" || prompt3 == "Yes" || prompt3 == "YES" || prompt3 == "no" || prompt3 == "No" || prompt3 == "NO")) {
		cout << "Choose either [YES/Yes/yes] or [NO/No/no]" << endl;
	}
	
}