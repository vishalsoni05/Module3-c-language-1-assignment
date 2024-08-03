//16.Write a C program to read temperature in centigrade and display a suitable message according
//to the temperature state below:
//Temp < 0 then Freezing weather 
//Temp 0-10 then Very Cold weather 
//Temp 10-20 then Cold weather 
//Temp 20-30 then Normal in 
//Temp Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot


#include<stdio.h>
int main ()
{
	int n;
	printf("16.Write a C program to read temperature in centigrade and display a suitable \nmessage accordingto the temperature state below:\nTemp < 0 then Freezing weather \nTemp 0-10 then Very Cold weather \nTemp 10-20 then Cold weather \nTemp 20-30 then Normal \nTemp 30-40 then Its Hot\nTemp >=40 then Its Very Hot\n");
	printf("\nEnter the temperature in centigrade = ");
	scanf("%d",&n);
	
	if(n<=0)
	{
		printf("Freezing weather");
	}
	
	else if(n>0 && n<=10)
	{
		printf("Very cold weather");
	}
	
	else if(n>10 && n<=20)
	{
		printf("Cold weather");
	}
	
	else if(n>20 && n<=30)
	{
		printf("Normal weather");
	}
	
	else if(n>30 && n<=40)
	{
		printf("Hot weather");
	}
	
	else 
	
	{
		printf("Very hot weather");
	}
	getch();
}
