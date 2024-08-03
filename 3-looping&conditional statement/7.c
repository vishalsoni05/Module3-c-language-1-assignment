//7.WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main ()
{
	int n,rem=0,rev=0;
	printf("7.WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746\n");
	printf("Enter number to reverse it = ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n/=10;
	}
	printf("Reverse number = %d",rev);
	getch();
}
