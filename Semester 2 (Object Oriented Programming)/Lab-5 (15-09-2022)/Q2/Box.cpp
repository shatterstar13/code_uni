#include "Box.h"
#include <iostream>

using namespace std;

void sortArray(Box* boxArray, const int size);
void swap(Box &a, Box &b);

int main()
{
	int size{};
	cout << "\nEnter the size of the Array: ";
	cin >> size;
	Box* boxArray = new Box[size];
	int l{}, w{}, h{};

	for (int i = 0; i < size; i++)
	{
		cout << "\nEnter the length of box #" << i + 1 << ": ";
		cin >> l;
		boxArray[i].setLength(l, i);

		cout << "\nEnter the width of box #" << i + 1 << ": ";
		cin >> w;
		boxArray[i].setWidth(w, i);

		cout << "\nEnter the height of box #" << i + 1 << ": ";
		cin >> h;
		boxArray[i].setHeight(h, i);
		
		cout << "\n\n";
		boxArray[i].setVolume(boxArray[i].getLength(), boxArray[i].getWidth(), boxArray[i].getHeight());
	}

	sortArray(boxArray, size);

	cout << "\nAfter Sorting: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "\nThe length of box #" << i + 1 << " is: " << boxArray[i].getLength();
		cout << "\nThe width of box #" << i + 1 << " is: " << boxArray[i].getWidth();
		cout << "\nThe height of box #" << i + 1 << " is: " << boxArray[i].getHeight();
		cout << "\nThe volume of box #" << i + 1 << " is: " << boxArray[i].getVolume();
		cout << "\n\n";
	}
	cout << "\n\n\n\n";
}

void sortArray(Box* boxArray, const int size)
{
	for (int max = size - 1; max > 0; max--)
	{
		for (int i = 0; i < max; i++)
		{
			if (boxArray[i].getVolume() > boxArray[i + 1].getVolume())
			{
				swap(boxArray[i], boxArray[i + 1]);
			}
		}
	}
}

void swap(Box &a, Box &b)
{
	Box temp = a;
	a = b;
	b = temp;
}