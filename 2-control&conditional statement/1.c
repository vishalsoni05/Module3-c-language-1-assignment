//1.Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
int main ()
{
	int m,n;
	printf("1.Write a C program to accept two integers \nand check whether they are equal or not\n");
	printf("Enter the first number = \n");
	scanf("%d",&n);
	printf("Enter the second number = \n");
	scanf("%d",&m);
	if(m==n)
	{
		printf("Both the number are same");
	}
	else
	{
		printf("Both the number are diffrent");
	}
	getch();
}
