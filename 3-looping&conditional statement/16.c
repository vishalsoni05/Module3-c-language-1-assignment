//16.Calculate the Sum of Natural Numbers Using the While Loop


#include<stdio.h>
int main ()
{
	int i=1,n,sum=0;
	printf("16.Calculate the Sum of Natural Numbers Using the While Loop\n");
    printf("Enter any natural number to calculate");
	scanf("%d",&n);
	while (i<=n)
	{
	sum+=i;
	i++;
    } 
    printf("sum of %d natural number = %d",n,sum);
	getch();
}
