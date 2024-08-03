//4.WAP to make simple calculator (operation include Addition, Subtraction, Multiplication,
//Division, modulo) using conditional statement
#include<stdio.h>
int main ()
{
	float m,n;
	char k;
	printf("4.WAP to make simple calculator (operation include Addition, Subtraction,\nMultiplication,Division, modulo) using conditional statement\n");
	printf("enter the num 1 = ");
	scanf("%f",&m);
	printf("Enter operator(+,-,*,/,%%)");
	scanf(" %c",&k);
	printf("enter the num 2 = ");
	scanf("%f",&n);
	
	if (k =='+')
	{
		printf("%f",m+n);
	}
	
		else if (k =='-')
	{
		printf("%f",m-n);
	}
	
	    else if (k =='*')
	{
		printf("%f",m*n);
	}
	
		else if (k =='/')
	{
		printf("%f",m/n);
	}

		else if(k =='%')
	{
		printf("%d",(int)m%(int)n);
	}

	getch();
}
