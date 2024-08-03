//15.Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main ()
{
	int i=1,n,sum=0;
	printf("15.Calculate sum of 10 numbers using of while loop\n");
	printf("Enter any 10 number to calculate");
	while (i<=10)
	{
	printf("Enter %d number",i);
	scanf("%d",&n);
	sum+=i;
	i++;
    } 
    printf("sum of 10 number = %d",sum);
	getch();
}
