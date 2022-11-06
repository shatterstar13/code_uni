
// Muaz Saleem (BSEF21M036) : Program to play a Rock-Paper-Scissors game against a computer.

#include <iostream>
#include <cstdlib> // for the rand() and srand() functions
#include <time.h> // for the seed value of srand()

using namespace std;

unsigned random(); // assigns a random value between 1 and 3 to the computer

unsigned user_input(); // takes input from the user

void computer_choice(unsigned); // displays the computer's choice based on the random number

void winner_check(unsigned, unsigned); // checks who the winner is

int main()
{
	unsigned user{ 4 }, computer{};
	computer = random();
	user = user_input();
	computer_choice(computer);
	winner_check(user, computer);
}

unsigned random()
{
	unsigned computer {}, seed = time(0);
	srand(seed);
	computer = (rand() % 3) + 1;
	return computer;
}

unsigned user_input()
{
	unsigned user{ 4 };
	while (user > 3 && !(user <= 0))  // input validation
	{
		cout << "\n\tEnter 1 for Rock.\n";
		cout << "\tEnter 2 for Paper.\n";
		cout << "\tEnter 3 for Scissors.\n";
		cout << "\tEnter your choice: ";
		cin >> user;
		cout << "\n\n";
		system("cls");
	}
	return user;
}

void computer_choice(unsigned a)
{
	if (a == 1) 
	{
		cout << "\n\tThe computer has chosen Rock.\n\n";
	}
	else if (a == 2) 
	{
		cout << "\n\tThe computer has chosen Paper.\n\n";
	}
	else if (a == 3) 
	{
		cout << "\n\tThe computer has chosen Scissors.\n\n";
	}
}

void winner_check(unsigned a, unsigned b)
{
	if (a == b)   // condition for tie
	{
		cout << "\tThere was a tie!\n\n";
	}
	else if (a == 1) 
	{
		if (b == 2) 
		{
			cout << "\tThe computer has Won!\n\n";
		}
		else if (b == 3) 
		{
			cout << "\tThe user has won!\n\n";
		}
	}
	else if (a == 2) 
	{
		if (b == 1) 
		{
			cout << "\tThe user has Won!\n\n";
		}
		else if (b == 3) 
		{
			cout << "\tThe Computer has won!\n\n";
		}
	}
	else if (a == 3) 
	{
		if (b == 1) 
		{
			cout << "\tThe Computer has Won!\n\n";
		}
		else if (b == 2) 
		{
			cout << "\tThe User has won!\n\n";
		}
	}
}
