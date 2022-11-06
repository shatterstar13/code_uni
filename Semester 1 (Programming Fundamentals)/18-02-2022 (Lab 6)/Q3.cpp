#include<iostream>
using namespace std;
int main()
{
	int x,y,sum,prod;
	printf ("Enter two numbers ");
	scanf_s("%d %d", &x,&y);
	sum = x + y;
	prod = x * y;
	printf("The sum is %o\n", sum);
	printf("The product is %x");
}