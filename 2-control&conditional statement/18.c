//18.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main ()
{
	int n,m;
	printf("18.Write a C program to calculate profit and loss on a transaction.\n");
	printf("Enter the buying price");
	scanf("%d",&n);
	printf("Enter the selling price");
	scanf("%d",&m);
	if (m>n)
	{
		printf("%d profit",m-n);
	}
	
	else if(n>m)
	{
		printf("%d loss",m-n);
	}
	
	else
	{
		printf("No profit No loss");
	}
	getch();
	
}
