#include <iostream>
#include <string>
#include "Novel.h"
#include "Fiction.h"
#include "NonFiction.h"

using namespace std;

int main()
{
	char prompt;
	string t, a, i, g;
	int p, l;
	/*Novel n1("The Fault in our Stars", "John Green", 300);
	n1.showDetails();*/
	Fiction n2("The Fault in our Stars", "John Green", 300, "Romance", 2);
	n2.showDetails();
	NonFiction n3("University Physics", "RDK", 1100, "Hell");
	n3.showDetails();
	/*cout << "\n\nDo you want to make a Fictional Novel [Press F/f] or Non-Fictional [Press N/n]: ";
	cin >> prompt;
	if (prompt == 'F' || prompt == 'f')
	{
		cin.ignore();
		cout << "\nEnter the Title of the novel: ";
		getline(cin,t);
		cout << "\nEnter the name of the Author: ";
		getline(cin, a);
		cout << "\nEnter the number of pages in the novel: ";
		cin >> p;
		cin.ignore();
		cout << "\nEnter the Type of the novel: ";
		getline(cin, g);
		cout << "\nEnter the Level of the novel: ";
		cin >> l;
		cout << "\n\n";
		Fiction n1(t, a, p, g, l);
		n1.showDetails();
	}
	

	else if (prompt == 'N' || prompt == 'n')
	{
		cin.ignore();
		cout << "\nEnter the Title of the novel: ";
		getline(cin, t);
		cout << "\nEnter the name of the Author: ";
		getline(cin, a);
		cout << "\nEnter the number of pages in the novel: ";
		cin >> p;
		cin.ignore();
		cout << "\nEnter the Inspiration of the novel: ";
		getline(cin, i);
		cout << "\n\n";
		NonFiction n2(t, a, p, i);
		n2.showDetails();
	}
	
	else
	{
		cout << "\nChoose a valid Character!";

	}*/
}
