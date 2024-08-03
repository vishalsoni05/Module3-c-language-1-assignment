//33.WAP to input the week number and print week day.
#include<stdio.h>
int main ()
{
	int n;
	printf("33.WAP to input the week number and print week day.\n");
	printf("Enter the week number (1-7) = ");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("wednesay");
			break;

		case 4:
			printf("Thrusday");
			break;
	
		case 5:
			printf("Friday");
			break;
	
		case 6:
			printf("Saturday");
			break;
	
		case 7:
			printf("Sunday");
			break;
	
	    default:
		printf("Invalid Week Number");
		break;
}
	getch();
}
