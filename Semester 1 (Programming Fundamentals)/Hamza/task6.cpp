//#include <iostream>
//using namespace std;
//int mainho()
//{
//	int num[20];
//	int num1,count=0;
//	do
//	{
//		cout << "Enter how many numbers you want to enter into array. \n";
//		cout << "You can enter maximum 20 numbers .\n";
//		cout << "Numers to be entered :";
//		cin >> count;
//	} while (count < 0 || count>20);
//
//	for (int i = 0;i<count;i++)
//	{
//		cout << "Enter the number :"<<i+1<<"=";
//		cin >> num1;
//		num[i] = num1;
//	}
//	int key,found=0;
//	cout << "Enter the number  you want to find in the array =";
//	cin >> key;
//	for (int j = 0;j < count;j++)
//	{
//		if (num[j] == key)
//		{
//			found = num[j];
//		}
//	}
//	if (found == key)
//	{
//		cout << "your search value " << key << "  is found in the array";
//
//	}
//	else
//	{
//		cout << "your search value " << key << " is not found within the array";
//	}
//}