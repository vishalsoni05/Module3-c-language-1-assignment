//19.Write a program in C to calculate and print the electricity bill of a given customer.The customer
//ID,name, and unit consumed by the user should be captured from the keyboard to display the total
//amount to be paid to the customer. The charge are as follow :
// Unit                             Charge/unit
//upto 350                             @1.20
//350 and above but less than 600      @1.50
//600 and above but less than 800      @1.80
//800 and above	                       @2.00


#include<stdio.h>
int main()
{
	int id;
	char name[50];
	float unit;
	double charge;
	
	printf("Enter your customer id : ");
	scanf("%d",&id);
	
	printf("\nEnter your full name : ");
	scanf("%s",&name);
	
	printf("\nEnter your electricity consumtion in unit only: ");
	scanf("%f",&unit);
	
	if(unit<=350)
	{
		charge = (1.20*unit);
		
		printf("The electricity bill of a user is : %.2f ",charge);
	}
	else if(unit>350 && unit<=600)
	{
		charge = 1.50*unit;
		
		printf("The electricity bill of a user is : %.2f ",charge);
	}
	else if(unit>600 && unit<=800)
	{
		charge = 1.80*unit;
		
		printf("The electricity bill of a user is : %.2f ",charge);
	}
	else if (unit>800)
	{
		charge = 2.00*unit;
		
		printf("The electricity bill of a user is : %.2f ",charge);
	}
	
	getch();
}
