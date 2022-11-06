// Muaz Saleem (BSEF21M036) ; C7-Q14: Program that simulates a lottery
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for the time function
using namespace std;
int main()
{
	int seed = time(0), // retruns the number of seconds elapsed since 1st January 1970
		temp = 0;
	srand(seed); // using the time function as seed value so every iteration of the program
	             // returns a diffrent value
	int lottery[5]{ (rand() % 10),  // using the formula (rand() % (maxValue - minValue + 1)) + minValue
		            (rand() % 10),  // to put random values in the array. 
		            (rand() % 10), 
		            (rand() % 10),
		            (rand() % 10) }; 
	int user[5]{}, count = 0;
	for (int i = 0; i < 5; i++) 
	{
		cout << "Enter the lottery number (Between 0 and 9): ";
		cin >> temp;
		if (temp <= 9 && temp >= 0) 
		{
			user[i] = temp;
		}
		else
		{
			i--;
			cout << "\nPlease choose a number between 0 and 9!\n";
		}
	}
	for (int i = 0; i < 5; i++) 
	{
		if (lottery[i] == user[i]) // counting the matching pairs in both the arrays
		{
			count++;
		}
	}
	if (count == 0)
	{
		cout << "There are no matching pairs. The lottery numbers are:\n";
		for (int i = 0; i < 5; i++)
		{
			cout << lottery[i]<<" ";
		}
	}
	else 
	{
		cout << "There are " << count << " matching pairs: ( ";
		for (int i = 0; i < 5; i++) 
		{
			if (lottery[i] == user[i]) 
			{
				cout << lottery[i]<<", ";
			}
		}
		cout << ")";
	}
}