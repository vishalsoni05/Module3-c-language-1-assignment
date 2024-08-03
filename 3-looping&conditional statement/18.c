//18.Write a C Program to Print the Multiplication Table of N i. E.g. 5 * 1 = 5
//ii. 5 * 2 = 10
//1. .
//2. .
//iii. 5 * 10 = 50
#include<stdio.h>
int main ()
{
	int i,n;
	printf("18.Write a C Program to Print the Multiplication Table of N   E.g. 5 * 1 = 5\n");
	printf("Enter the number to print table = ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	getch();
}
