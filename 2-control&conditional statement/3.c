//3.WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main ()
{
	int year;
	printf("3.WAP to check if the given year is a leap year or not.\n");
	printf("Enter the year = ");
	scanf("%d",&year);
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d is leap year",year);
	}
	
	else
	{
			printf("%d is not leap year",year);
	}
	getch();
}
