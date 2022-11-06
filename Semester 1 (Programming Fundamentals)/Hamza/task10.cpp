#include <iostream>
using namespace std;
int main()
{
	int aray[10];
	int limit,num;
	do
	{
		cout << "Enter how many numers you want to enter.YOU can enter minimum 1 \n and maximum 10 numers :";
		cin >> limit;
	} while ( limit<1|| limit>10 );
	for (int i = 0;i < limit;i++)
	{
		cout << "Enter the number :" << i + 1<<"=";
		cin >> num;
		aray[i] = num;

	}
	int find_num;
	char ch;
	do
	{
		cout << "Enter the number you want to delete in the array and \n ";
		cout << "mark it  with -999\n";
		cout << "Delete number :";
		cin >> find_num;
		for (int j = 0;j < limit;j++)
		{
			if (aray[j] == find_num)
			{
				aray[j] = -999;
			}
		}
		cout << "If you want to find and delete another number put Y otherwise N \n ";
		cout << "choice =";
		cin >> ch;
	} while (ch == 'Y');
	for (int i = 0; i < limit;i++)
	{
		if (aray[i] != -999)
		{
			cout << aray[i] << "\t";
		}
	}
}