//31.Write a program in C to read any Month Number in integer and display 
//the number of days for this month.

 
#include<stdio.h>
int main()
{
	int days,month,even;
	
	printf("Enter any month number = ");
	scanf("%d",&month);
	
	even = month/2==0;
	
	if(month == even)
	{
		printf("The number of days in month %d is 30 days.",month);
	}
	else if(month == 2)
	{
		printf("the number of dasys in month %d is 28 days.",month);
	}
	else
	{ 
		printf("The number of days in  month %d in 31 days.", month);
	}
	getch();
}
