//5.Check Number Is Positive or Negative
#include<stdio.h>
int main ()
{
	int n;
	printf("5.Check Number Is Positive or Negative\n");
	printf("Enter the number to check = ");
	scanf("%d",&n);
	if (n>0)
	{
		printf("Number is positive");
	}
	
	else
	{
		printf("Number is negative");
	}
	getch();	
}
