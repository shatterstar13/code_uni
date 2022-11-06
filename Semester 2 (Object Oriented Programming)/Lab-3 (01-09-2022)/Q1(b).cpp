#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

struct InventoryItem
{
	string itemName{};
	string itemCode{};
	double itemCost{}, itemSellingPrice{};
};

void insertItem(InventoryItem*);
void displayStock(const InventoryItem*);

int main()
{
	srand(time(NULL));
	InventoryItem item[2]{};
	insertItem(item);
	displayStock(item);
}

void insertItem(InventoryItem* arr)
{
	long random = rand() % 100 + 30000;
	for (int i = 0; i < 2; i++)
	{
		int j{};

		cout << "\nEnter the name of item #" << i + 1 << ": ";
		getline(cin, arr[i].itemName);
		while (arr[i].itemName[j])
		{
			char c = arr[i].itemName[j];
			arr[i].itemName[j] = toupper(c);
			j++;
		}
		
		arr[i].itemCode = (arr[i].itemName.substr(0, 3)) + '_' + to_string(random);
		cout << "\nEnter the cost of the item #" << i + 1 << ": ";
		cin >> arr[i].itemCost;
		arr[i].itemSellingPrice = (40 / arr[i].itemCost) * 100;
		random++;
		cout << "\n\n\n";
		cin.ignore();
	}
}

void displayStock(const InventoryItem* arr)
{
	cout << "|-----------------------------------------------------------------------------|\n";
	cout << "|    Item Code    |    Item Name     |    Item Cost     |    Selling Price    |\n";
	cout << "|-----------------------------------------------------------------------------|\n\n";
	for (int i = 0; i < 2; i++)
	{
		cout << "|" << setw(9) << arr[i].itemCode << setw(8) << "|" << setw(9) << arr[i].itemName << setw(8);
		cout << "|" << setw(9) << arr[i].itemCost << setw(8) << "|" << setw(9) << arr[i].itemSellingPrice << setw(8) << "|\n\n";
	}
}