//32.Write a C program to input basic salary of an employee and calculate its Gross salary according to 
//following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80% 
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary  > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main ()
{
	int n;
	printf("Write a C program to input basic salary of an employee and calculate its \nGross salary\n");
	printf("Enter your salary");
	scanf("%d",&n);
	if(n<=10000)
	{
		printf("HRA = %d\n",n/100*20);
		printf("DA = %d\n",n/100*80);
		printf("Gross salary = %d\n",n+n/100*20+n/100*80);
	}
	
	else if(n<=20000)
	{
		printf("HRA = %d\n",n/100*25);
		printf("DA = %d\n",n/100*90);
		printf("Gross salary = %d\n",n+n/100*25+n/100*90);
	}
	
	else
	{
		printf("HRA = %d\n",n/100*30);
		printf("DA = %d\n",n/100*95);
		printf("Gross salary = %d\n",n+n/100*30+n/100*95);
	}
	getch();
}
