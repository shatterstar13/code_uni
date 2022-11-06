#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

struct InventoryItem
{
	string itemName{};
	int itemCode{};
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
	for (int i = 0; i < 2; i++)
	{
		arr[i].itemCode = rand() % 3500;
		cout << "\nEnter the name of item #" << i + 1 << ": ";
		getline(cin, arr[i].itemName);
		cout<<"\nEnter the cost of the item #" << i + 1 << ": ";
		cin >> arr[i].itemCost;
		arr[i].itemSellingPrice = (40 / arr[i].itemCost) * 100;
		cout << "\n\n\n";
		cin.ignore();
	}
}

void displayStock(const InventoryItem* arr)
{
	cout << "|-----------------------------------------------------------------------------|\n";
	cout << "|    Item Code    |    Item Name     |    Item Cost     |    Selling Price    |\n";
	cout << "|-----------------------------------------------------------------------------|\n";
	for (int i = 0; i < 2; i++)
	{
		cout << "|" <<setw(9) << arr[i].itemCode << setw(8) << "|" << setw(9) << arr[i].itemName << setw(8);
		cout << "|" << setw(9) << arr[i].itemCost << setw(8) << "|" << setw(9) << arr[i].itemSellingPrice << setw(8) << "|\n";
	}
}