#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct FeetInches
{
	int feet;
	float inches;
};

struct RoomDimension
{
	FeetInches length;
	FeetInches width;
};

void computeTheCarpetingCost(const int&, const RoomDimension*);

int main()
{
	int noOfRooms{};
	cout << "\nEter the number of rooms in your house: ";
	cin >> noOfRooms;
	RoomDimension* dimensions = new RoomDimension[noOfRooms];
	cout << "\nIf your room is for example, 10 feet and 5 inches long";
	cout << " then add the feet first and the remaining inches later.\n\n";
	for (int i = 0; i < noOfRooms; i++) 
	{
		cout << "\nEnter the length of the room (only feet): ";
		cin >> dimensions[i].length.feet;
		cout << "\nEnter the length of the room (only inches): ";
		cin >> dimensions[i].length.inches;
		cout << "\nEnter the width of the room (only feet): ";
		cin >> dimensions[i].width.feet;
		cout << "\nEnter the width of the room (only inches): ";
		cin >> dimensions[i].width.inches;
	}
	char prompt{};
	cout << "\n\nDo you want to see the total cost of carpeting the entire house or for seperate rooms?";
	cout << "\nEnter [E/e] for the entire house and [S/s] for seperate rooms: ";
	cin >> prompt;
	double totalCost{}, x{}, y{};
	if (prompt == 's' || prompt == 'S')
	{
		computeTheCarpetingCost(noOfRooms, dimensions);
	}
	
	else if (prompt == 'e' || prompt == 'E')
	{
		cout << "\n\nThe total cost of carpeting the entire house is: ";
		for (int i = 0; i < noOfRooms; i++)
		{
			x = (dimensions[i].length.feet) + (dimensions[i].length.inches / 12);
			y = (dimensions[i].width.feet) + (dimensions[i].length.inches / 12);
			totalCost +=  x*  y* 18;
		}
		cout << totalCost;
		cout << "\n\n";
	}
}

void computeTheCarpetingCost(const int& size, const RoomDimension* arr)
{
	double totalCost{}, x{}, y{};

	for (int i = 0; i < size; i++)
	{
		cout << "\n\nThe total cost of carpeting room #"<<i+1<<" is: ";
		x = (arr[i].length.feet) + (arr[i].length.inches / 12);
		y = (arr[i].width.feet) + (arr[i].length.inches / 12);
		totalCost = x * y * 18;
		cout << totalCost;
		cout << "\n\n";
	}
	cout << "\n\n";

}
