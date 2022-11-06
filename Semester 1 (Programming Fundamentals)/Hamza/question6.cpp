#include <iostream>
using namespace std;
#define row 2
#define col 2
int main()
{
	int num[row][col];
	int sum[row][col];
	for (int a = 0;a < row;a++)
	{
		for (int b = 0;b < col;b++)
		{
			cout << "for the first array enter the value : ( " << a << "," << b << " )" << "=";
			cin >> num[a][b];
		}
	}
	int cou = 0;
	for (int i = 0;i < row;i++)
	{
		int flag = 0;
		for (int j = 0;j < col - 1;j++)
		{
			if (num[i][j] != num[i][j + 1])
			{
				flag += 1;
			}
		}
		if (flag == 0)
		{
			cou += 1;
		}
	}
	cout << "row containnig same elements :"<<cou;
	cout << endl;
	for (int a = 0;a < row;a++)
	{
		for (int b = 0;b < col;b++)
		{
			 cout<< num[a][b]<<" ";
		}
		cout << endl;
	}

}