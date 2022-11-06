#include<stdio.h>
#include<math.h>
int main()
{
	int n1, n2, sum, product;
	printf("Enter two integers ");
	scanf_s("%d %d",&n1,&n2);
	sum = n1 + n2;
	product = n1 * n2;
	printf("The sum is %d",sum);
	printf("\nThe product is %d",product);
	return 0;
}