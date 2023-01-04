#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
#include "BattleShip.h"

using namespace std;

int main()
{
	string temp1, temp2;
	int temp3;
	Ship* shipArray[3];
	char prompt{'\0'};
	while (!(prompt == 'A' || prompt == 'a' || prompt == 'B' || prompt == 'b' || prompt == 'C' || prompt == 'c'))
	{
		cout << "\n\nChoose which type of ship you want to create.\n";
		cout << "Choose [A/a] for Cruise Ship\n";
		cout << "Choose [B/a] for Cargo Ship\n";
		cout << "Choose [C/c] for Battl Ship\n\n";
		cout << "Your Choice: ";
		cin >> prompt;
		while (!(prompt == 'A' || prompt == 'a' || prompt == 'B' || prompt == 'b' || prompt == 'C' || prompt == 'c'))
		{
			cout << "\nInvalid Choice! Please Try Again\n";
			cin >> prompt;
		}
	}

	cin.ignore();
	
	if (prompt == 'A' || prompt == 'a')
	{
		cout << "Enter name of the ship: ";
		getline(cin, temp1);
		cout << "Enter the year the ship was created: ";
		getline(cin, temp2);
		cout << "Enter the maximum number of passengers: ";
		cin >> temp3;
		shipArray[0] = new CruiseShip(temp1, temp2, temp3);

		shipArray[0]->print();
	}

	else if (prompt == 'B' || prompt == 'b')
	{
		cout << "Enter name of the ship: ";
		getline(cin, temp1);
		cout << "Enter the year the ship was created: ";
		getline(cin, temp2);
		cout << "Enter the maximum cargo capacity of the ship: ";
		cin >> temp3;
		shipArray[1] = new CargoShip(temp1, temp2, temp3);

		shipArray[1]->print();
	}

	else if (prompt == 'C' || prompt == 'c')
	{
		cout << "Enter name of the ship: ";
		getline(cin, temp1);
		cout << "Enter the year the ship was created: ";
		getline(cin, temp2);
		cout << "Enter the maximum missile capacity of the ship: ";
		cin >> temp3;
		shipArray[2] = new BattleShip(temp1, temp2, temp3);

		shipArray[2]->print();
	}
	
	for (int i = 0; i < 3; i++)
	{
		delete shipArray[i];
	}

	delete[] shipArray;
	*shipArray = nullptr;

}