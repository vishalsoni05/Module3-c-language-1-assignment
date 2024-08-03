//22.Calculate compound interest (Compound Interest formula:
//a.Formula to calculate compound interest annually is given by:Amount= P(1 + R/100)t
//b.Compound Interest = Amount – P


#include<stdio.h>
int main()
{
	int t;
	long int p;
	float ca,r,amt;
	
	printf("Enter your principle amount: ");
	scanf("%Id",&p);
	
	printf("Enter your rate of interest: ");
	scanf("%f",&r);
	
	printf("Enter your time: ");
	scanf("%d",&t);
	
	amt = (p*(1+r)*t) /100;
	printf("\nYour Annually compound is : %.2f ",amt);
	ca = p - amt;
	printf("\nYour Compound Interest is : %.2f", ca);
	getch();	
}
