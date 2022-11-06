// ~~ BSEF21M036 [Muaz Saleem] ~~ OOP SE - Assignment 1 ~~ Madiha Khalid ~~ 

#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
	//Use of the Default, parameterized, and copy constructors is demonstrated at the start of the program
	//Use of the overloaded assignment operator is also at the start
	//Since the overloaded stream insertion and extraction operators are used throughout the program
	//a seperate option for them hasn't been created

	//Also re-execution of the program will be needed every time another function is to be tested


	MyString st1, st2;

	st1 = "The Real Slim Shady";
	st2 = st1;

	MyString st3("muaz"), st4("Goodbye");
	MyString st5(st3);
	
	int choice = -1;
	int start{}, end{}, index{};

	char ch{};

	string func[18] = 
	{ 
		{"Display a MyString object."},
		{"Get length of a MyString object."},
		{"Concatenate Two MyString objects."},
		{"Compare equality of two Mystring objects."},
		{"Check if one MyString object is less than another."},
		{"Check if one MyString object is less than or equal to another."},
		{"Append second MyString object to the first."},
		{"Set the data member of a MyString object and display it."},
		{"Convert a MyString object to int."},
		{"Convert a MyString Object to a char*."},
		{"Increment a MyString object."},
		{"Get substring from a MyString object (including spaces)."},
		{"Get index of first occurence of substring in a Mystring object."},
		{"Get index of first occurence of character in a MyString object."},
		{"Get index first occurence of substring in a MyString object after index 'start'"},
		{"Get index of last occurence of substring in the MyString object."},
		{"Get index of last occurence of character in the MyString object."},
	};

	cout << "\n\tChoose one of the numbers: ";
	cout << "\n\n\t1- Display a MyString object.";
	cout << "\n\t2- Get length of a MyString object.";
	cout << "\n\t3- Concatenation Two MyString objects.";
	cout << "\n\t4- Compare equality of two Mystring objects.";
	cout << "\n\t5- Check if one MyString object is less than another.";
	cout << "\n\t6- Check if one MyString object is less than or equal to another.";
	cout << "\n\t7- Append second MyString object to the first.";
	cout << "\n\t8- Set the data member of a MyString object and display it.";
	cout << "\n\t9- Convert a MyString object to int.";
	cout << "\n\t10- Convert a MyString Object to a char*.";
	cout << "\n\t11- Increment every element of a MyString object.";
	cout << "\n\t12- Get substring from a MyString object (including spaces).";
	cout << "\n\t13- Get index of first occurence of substring in a Mystring object.";
	cout << "\n\t14- Get index of first occurence of character in a MyString object.";
	cout << "\n\t15- Get index first occurence of substring in a MyString object after index 'start'.";
	cout << "\n\t16- Get index of last occurence of substring in the MyString object.";
	cout << "\n\t17- Get index of last occurence of character in the MyString object.";
	//cout << "\n\n\t18- If you want to input again.";
	cout << "\n\n\n";

	while (!((choice > 0) && (choice < 18)))
	{
		cout << "\n\tEnter your choice: ";
		cin >> choice;
		if (!((choice > 0) && (choice < 18)))
		{
			cout << "\n\tPlease choose a valid number!\n";
		}
		cin.clear();
		cin.ignore(100,'\n');
	} 

	cout << "\n\t" << func[choice - 1]<<"\n\n";
	
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (choice == 1)
	{
		cout << "\nPlease enter the string you want to display on the screen: ";
		cin >> st1;
		cout << "\nThe string you entered is: ";
		cout << st1;
		cout << "\n\n";
	}

	else if (choice == 2)
	{
		cout << "\nPlease enter the string you want to get the length of: ";
		cin >> st1;
		cout << "\nThe length of the entered string (including spaces) is: " << st1.getLength();
		cout << "\n\n";
	}

	else if (choice == 3)
	{
		cout << "\nEnter String 1: ";
		cin >> st1;
		cout << "\nEnter String 2: ";
		cin >> st2;
		MyString st3 = st1 + st2;
		cout << st3 << "\n\n";
	}

	else if (choice == 4)
	{
		cout << "\nEnter String 1: ";
		cin >> st1;
		cout << "\nEnter String 2: ";
		cin >> st2;
		if (st1 == st2)
		{
			cout << "\n" << st1 << " and " << st2 << " are Equal.\n\n";
		}
		else
		{
			cout << "\n" << st1 << " and " << st2 << " are not Equal.\n\n";
		}
	}
	
	else if (choice == 5)
	{
		cout << "\nEnter String 1: ";
		cin >> st1;
		cout << "\nEnter String 2: ";
		cin >> st2;
		if (st1 < st2)
		{
			cout << "\n" << st1 << " is less than " << st2 << "\n\n";
		}
		else
		{
			cout << "\n" << st1 << " is not less than " << st2 << "\n\n";
		}
	}

	else if (choice == 6)
	{
		cout << "\nEnter String 1: ";
		cin >> st1;
		cout << "\nEnter String 2: ";
		cin >> st2;
		if (st1 <= st2)
		{
			cout << "\n" << st1 << " is less than or equal to " << st2 << "\n\n";
		}
		else
		{
			cout << "\n" << st1 << " is not less than or equal to " << st2 << "\n\n";
		}
	}

	else if (choice == 7)
	{
		cout << "\nEnter String 1: ";
		cin >> st1;
		cout << "\nEnter String 2: ";
		cin >> st2;
		st1 += st2;
		cout << "\n" << st1 << "\n\n";
	}

	else if (choice == 8)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		cout << "\nst1.str = " << st1 << "\n\n";
	}

	else if (choice == 9)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		int temp = st1;
		cout << "\n\"" << st1 << "\" is converted to " << temp << "\n\n";
	}

	else if (choice == 10)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		char* c[] = { st1 };
		cout << "\n\"" << st1 << "\" is converted to " << *c << "\n\n";
	}

	else if (choice == 11)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		st2 = st1;
		cout << "\n\"" << st2 << "\" is incremented to " << ++st1 << "\n\n";
	}

	else if (choice == 12)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		cout << "\nEnter the starting index: ";
		cin >> start;
		cout << "\nEnter the ending index: ";
		cin >> end;
		cout << "\nThe substring is: " << st1.subString(start, end) << "\n\n";
	}

	else if (choice == 13)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		cout << "\nEnter the substring: ";
		cin >> st2;
		if (st1.find(st2) == -1)
		{
			cout << "Substring not found!\n\n";
		}
		else
		{
			cout << "\nThe index of the first occurence of the substring is: " << st1.find(st2) << "\n\n";
		}
	}

	else if (choice == 14)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		cout << "\nEnter the character: ";
		cin >> ch;
		if (st1.find(ch) == -1)
		{
			cout << "\nCharacter not found!\n\n";
		}
		else
		{
			cout << "\nThe index of the first occurence of the character is: " << st1.find(ch) << "\n\n";
		}
	}

	else if (choice == 15)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		cout << "\nEnter the substring: ";
		cin >> st2;
		cout << "\nEnter the starting index: ";
		cin >> index;
		if (st1.find(st2, index) == -1)
		{
			cout << "\nSubstring not found!\n\n";
		}
		else
		{
			cout << "\nThe index of the first occurence of the Substring after the starting index is: " << st1.find(st2, index) << "\n\n";
		}
	}

	else if (choice == 16)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		cout << "\nEnter the substring: ";
		cin >> st2;
		if (st1.rfind(st2) == -1)
		{
			cout << "\nSubstring not found!\n\n";
		}
		else
		{
			cout << "\nThe start index of the last occurence of substring in the MyString object is: " << st1.rfind(st2) << "\n\n";
		}
	}

	else if (choice == 17)
	{
		cout << "\nEnter the String: ";
		cin >> st1;
		cout << "\nEnter the character: ";
		cin >> ch;
		if (st1.rfind(ch) == -1)
		{
			cout << "\nCharacter not found!\n\n";
		}
		else
		{
			cout << "\nThe index of last occurence of character in the MyString object is: " << st1.rfind(ch) << "\n\n";
		}
	}
}