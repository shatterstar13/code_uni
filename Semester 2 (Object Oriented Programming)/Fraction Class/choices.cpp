#include "Fraction.h"
#include <iostream>
using namespace std;

int main()
{
	char		choice;
	fraction	left;
	fraction	right;
	fraction	result;

	do
	{
		cout << "A\tAdd\n";
		cout << "S\tSubtract\n";
		cout << "M\tMultiply\n";
		cout << "D\tDivide\n";
		cout << "E\tExit\n";

		cout << "\nChoice?: ";

		cin >> choice;
		cin.ignore();

		try
		{
			switch (choice)
			{
				case 'A':
				case 'a':
					cout << "enter the first operand: ";
					left.read();
					cout << "enter the second operand: ";
					right.read();
					result = left.add(right);
					result.print();
					break;
				case 'S':
				case 's':
					cout << "enter the first operand: ";
					left.read();
					cout << "enter the second operand: ";
					right.read();
					result = left.sub(right);
					result.print();
					break;
				case 'M':
				case 'm':
					cout << "enter the first operand: ";
					left.read();
					cout << "enter the second operand: ";
					right.read();
					result = left.mult(right);
					result.print();
					break;
				case 'D':
				case 'd':
					cout << "enter the first operand: ";
					left.read();
					cout << "enter the second operand: ";
					right.read();
					result = left.div(right);
					result.print();
					break;
				case 'E' :
				case 'e' :
					break;
				default:
					cerr << "Unrecognized choice: " << choice << endl;
					break;
			}
		}
		catch (const char* error)
		{
			cerr << error << endl;
		}
	} while (choice != 'e' && choice != 'E');

	return 0;
}

