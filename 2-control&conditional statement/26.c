//36.Write a C program to input electricity unit charges and calculate total electricity 
//bill according to the given condition:
//For first 50 units Rs. 0.50/unit 
//For next 100 units Rs. 0.75/unit 
//For next 100 units Rs. 1.20/unit 
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<stdio.h>
int main ()
{
	float n;
	printf("36.Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:\n");
	printf("Enter the unit = ");
	scanf("%f",&n);
	
	if(n<=50)
	{
		printf("Your bill is of = %f\n",n*0.50);
		printf("An additional surcharge of 20%% is added to the bill = %f\n",n*0.50/100*20);
		printf("Your total bill = %f\n",n*0.50 + n*0.50/100*20);
	}
	
	if(n>50 && n<=100)
	{
		printf("Your bill is of = %f\n",n*0.75);
		printf("An additional surcharge of 20%% is added to the bill = %f\n",n*0.75/100*20);
		printf("Your total bill = %f\n",n*0.75 + n*0.75/100*20);
    }
    
    	if(n>100 && n<=200)
	{
		printf("Your bill is of = %f\n",n*1.20);
		printf("An additional surcharge of 20%% is added to the bill = %f\n",n*1.20/100*20);
		printf("Your total bill = %f\n",n*1.20 + n*1.20/100*20);
    }
    
    	if(n>200)
	{
		printf("Your bill is of = %f\n",n*1.50);
		printf("An additional surcharge of 20%% is added to the bill = %f\n",n*1.50/100*20);
		printf("Your total bill = %f\n",n*1.50 + n*1.50/100*20);
    }
    
	getch();
}
