//13.calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main ()
{
	int n,sum=1;
	printf("13.calculate the Factorial of a Given Number using while loop\n");
	printf("Enter any number to calculate the Factorial ");
	scanf("%d",&n);
	printf("factorial of %d = ",n);
	int i=n;
	while(i>=1)
	{
	printf("%d * ",i);
	sum*=i;
	i--;
	}
	printf(" = %d",sum);
	getch();
}
