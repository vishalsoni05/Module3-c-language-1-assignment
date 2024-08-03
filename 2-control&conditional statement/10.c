//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main ()
{
	int n;
	printf("10.WAP to check whether a number is negative, positive or zero.\n");
    printf("Enter num to check whether a number is negative, positive or zero = ");
	scanf("%d",&n);
	if (n<0)
	{
		printf("entered num is negative");
	}
	else if (n==0)
	{
		printf("entered num is zero");
	}
	else 
	{
		printf("entered num is positive");
	}
	
	getch();
	
}
