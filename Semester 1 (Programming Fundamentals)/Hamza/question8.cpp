#include <iostream>
#define size 6
#define size2 3
using namespace std;
int main()
{
	int ary[size];
	int sub_ary[size2];
	int n, flag = 0;
	for (int i = 0;i < size;i++)
	{
		cout << "for the main array enter the numberr :" << i + 1 << "=";
		cin >> ary[i];
	}
	for (int i = 0;i < size2;i++)
	{
		cout << "for the sub_array enter the numberr :" << i + 1 << "=";
		cin >> sub_ary[i];
	}
	int flag2 = 0;
	for (int i = 0;i < size2&& flag2==0;i++)
	{
		int flag = 0;
		for (int j = 0;j < size &&flag==0 ;j++)
		{
			if (sub_ary[i] == ary[j])
			{
				flag += 1;
			}

		}
		if (!flag > 0)
		{
			flag2 += 1;
		}

	}
	if (flag2 == 0)
	{
		cout << "sub aray is present ";
	}
	else
	{
		cout << "not present ";
	}




}