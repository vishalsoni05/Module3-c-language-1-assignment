//30.WAP to convert years into days and days into years

#include<stdio.h>
int main()
{
	float n,m;printf("30.WAP to convert years into days and days into years\n");
	printf("Enter the year to convert into days");
	scanf("%f",&n);
    printf("\n%f days\n",n*365);
	printf("\nEnter the days to convert into years");
	scanf("%f",&m);
    printf("\n%f year",m/365);
    getch();
}
