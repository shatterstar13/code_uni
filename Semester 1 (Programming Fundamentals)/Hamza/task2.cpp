//#include <iostream>
//using namespace std;
//int mainkj()
//{
//	int num[10] = { 1,2,5,4,1,5,6,8,2,9 };
//	int dup[10];
//	int counter = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < counter && flag!=1; j++)
//		{
//			if (num[i] == dup[j])
//			{
//				flag += 1;
//			}
//		}
//		if (flag != 1)
//		{
//			dup[counter] = num[i];
//			counter += 1;
//		}
//	}
//	for (int i = 0;i < counter;i++)
//	{
//		cout << dup[i] << "\t";
//	}
//} 