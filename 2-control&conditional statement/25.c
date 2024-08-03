//35.Accept the input month number and print number of days in that month.
#include<stdio.h>
int main ()
{
	int n;
	printf("35.Accept the input month number and print number of days in that month.\n");
	printf("Enter the week number");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("31");
			break;	
			
		case 2:
			printf("28 or 29");
			break;
			
		case 3:
			printf("31");
			break;
			
		case 4:
			printf("30");
			break;
			
		case 5:
			printf("31");
			break;
			
		case 6:
			printf("30");
			break;
			
		case 7:
			printf("31");
			break;
			
		case 8:
			printf("31");
			break;
			
		case 9:
			printf("30");
			break;
			
		case 10:
			printf("31");
			break;
			
		case 11:
			printf("30");
			break;
			
		case 12:
			printf("31");
			break;
			
		default:
			printf("Invalid Month Number");
			break;
	}
	getch();
}
