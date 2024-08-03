//8.Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main ()
{
	int n,dig,max=0;
	printf("8.Write a program to find out the max from given number (E.g., No:- 1562 Max number is 6)\n");
	printf("Enter any to find maximum digit = ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		dig = n%10;
		if(dig>max)
		{
			max=dig;
		}
		n/=10;
	}
	printf("Maximum digit in this number = %d",max);
	getch();
}
