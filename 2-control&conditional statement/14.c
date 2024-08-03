//14.WAP to find the largest of three numbers.
#include<stdio.h>
int main ()
{
	int n,m,k;
	printf("14.WAP to find the largest of three numbers.\n");
	printf("Enter the num 1 = ");
	scanf("%d",&n);
	printf("Enter the num 2 = ");
	scanf("%d",&m);
	printf("Enter the num 3 = ");
	scanf("%d",&k);
	
	if (n>m && n>k)
	{
		printf("%d is the largest num",n);
	}
	
	else if (m>n && m>k)
	{
		printf("%d is the largest num",m);
	}
	
	else 
	{
		printf("%d is the largest num",k);
	}
	
	getch();
}
