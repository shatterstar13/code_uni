//BSEF21M036 ~~ Task 2 ~~ Assignment 2 ~~ OOP ~~ Madiha Khalid

#include <iostream>

using namespace std;

int main()
{
	//Hard-coded test cases
	/*int k = 2, n = 10;
	int k = 2, n = 9;
	int k = 4, n = 10;
	int intArray[9] = { 4, 5, 2, 5, 4, 3, 1, 3, 4 };
	int intArray[10] = { 5, 4, 3, 2, 1, 1, 2, 3, 4, 5 };
	int sizeArray[9] = {};
	int sizeArray[10] = {};*/

	int n{}, k{};

	bool flag = true;

	cout << "\n\nEnter the number of digits: ";
	cin >> n;

	cout << "\nEnter the number of times they must appear: ";
	cin >> k;

	int* intArray = new int[n]{};

	int* sizeArray = new int[n]{};

	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter value at index [" << i << "]: ";
		cin >> intArray[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (intArray[i] == intArray[j])
			{
				if (sizeArray[i] == -1)
				{
					i++;
				}

				else 
				{
					sizeArray[i]++;
				}
			}

			if ((sizeArray[i] > 1) && (intArray[i] == intArray[j]))
			{
				sizeArray[j] = -1;
			}
		}
	}

	cout << "\n\n\nThe digits that are repeated " << k << " times are: ";

	for (int i = 0; i < n; i++)
	{
		if (sizeArray[i] >= k)
		{
			flag = false;
			cout << intArray[i]<<" ";
		}
	}

	if (flag)
	{
		cout << "-1";
	}

	cout << "\n\n\n";
}