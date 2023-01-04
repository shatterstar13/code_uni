//BSEF21M036 ~~ Task 3 ~~ Assignment 2 ~~ OOP ~~ Madiha Khalid

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//string str = "abc";
	//string str = "abcde";
	//string str = "abab";
	//string str = "aaa";
	//string str = "z";

	string str{};

	cout << "\n\nEnter the string: ";
	getline(cin, str);

	cout << "\n\n\n";

	cout << "  " << str << ":  ";

	for (int j = 0; j < str.length(); j++)
	{
		for (int k = j + 1; k < str.length(); k++)
		{
			cout << str[k];
		}

		for (int i = 0; i <= j; i++)
		{
			cout << str[i];
		}

		cout << "  ";
	}

	cout << "\n\n\n";
}