//23.C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main ()
{
	int n,rem=0,rev=0;
	printf("23.C Program to Reverse a Number Using FOR Loop\n");
	printf("Enter number to reverse it = ");
	scanf("%d",&n);
	for(n=n;n!=0;n/=10)
	{

		rem = n % 10;
		rev = rev * 10 + rem;
	}
	printf("Reverse number = %d",rev);
	getch();
}
