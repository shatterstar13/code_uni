
// Muaz Saleem (BSEF21M036) ; C7-Q18: A program that lets two users play Tic-Tac-Toe

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
#define row 3
#define col 3
void input_p1(char arr[row][col]);
void input_p2(char arr[row][col]);
void check_p1(char arr[row][col], int a, int b);
void check_p2(char arr[row][col], int a, int b);
void display(char arr[row][col]);
bool check_f(char arr[row][col]);
int main()
{
	char ttt[row][col]{};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ttt[i][j] = '*';
		}
	}
	display(ttt);
	for (int i = 0; i < 3; i++)
	{
		input_p1(ttt);
		display(ttt);
		input_p2(ttt);
		display(ttt);
	}

}

void input_p1(char arr[row][col])
{
	int r1 = 4, c1 = 4;
	while (((r1 & c1) > 3) && !((r1 & c1) < 0))
	{
		cout << "\t\tFor player 1: \n";
		cout << "\t\tEnter the row where you want to enter 'O': ";
		cin >> r1;
		cout << "\t\tEnter the column where you want to enter 'O': ";
		cin >> c1;
		system("cls");
		check_p1(arr, r1, c1);
	}
	bool flag = check_f(arr);
	if (flag == true) {
		cout << "Player 1 has won!";
	}
}

void input_p2(char arr[row][col])
{
	int r2 = 4, c2 = 4;
	while (((r2 & c2) > 3) && !((r2 & c2) < 0))
	{
		cout << "\t\tFor player 2: \n";
		cout << "\t\tEnter the row where you want to enter 'X': ";
		cin >> r2;
		cout << "\t\tEnter the column where you want to enter 'X': ";
		cin >> c2;
		system("cls");
		check_p2(arr, r2, c2);
	}
	bool flag = check_f(arr);
	if (flag == true) {
		cout << "Player 2 has won!";
	}
}

void display(char arr[row][col])
{
	cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "\t" << setw(4) << arr[i][j];
		}
		cout << "\n\n";
	}
	cout << "\n";
}

void check_p1(char arr[row][col], int a, int b)
{
	if (!(arr[a - 1][b - 1] == 'O'))
	{
		arr[a - 1][b - 1] = 'O';
	}
	else
	{
		input_p1(arr);
	}
}
void check_p2(char arr[row][col], int a, int b)
{
	if (arr[a - 1][b - 1] == '*')
	{
		arr[a - 1][b - 1] = 'X';
	}
	else
	{
		input_p2(arr);
	}
}

bool check_f(char arr[row][col])
{
	int count;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			count = 0;
			if (arr[i][j] == arr[i][j + 1]) {
				count++;
				if (count == 2) {
					return true;
				}
			}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			count = 0;
			if (arr[j][i] == arr[j + 1][i]) {
				count++;
				if (count == 2) {
					return true;
				}
			}
		}
	}
	for (int i = 0; i < row; i++) {
		count = 0;
		if (arr[i][i] == arr[i + 1][i + 1]) {
			count++;
			if (count == 2) {
				return true;
			}
		}
	}
	for (int i = 0; i < row; i++) {
		count = 0;
		if (arr[i][(row - 1) - i] == arr[i + 1][(row - 1) - (i + 1)]) {
			count++;
			if (count == 2) {
				return true;
			}
		}
	}
	return false;
}