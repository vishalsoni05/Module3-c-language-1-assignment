//17.Calculate 5 numbers from user and calculate number of even and odd using of 
//while loop

#include<stdio.h>
int main ()
{
	int i=1,n,codd=0,ceven=0;
	printf("17.Calculate 5 numbers from user and calculate number of even and odd using of while loop\n");
    while(i<=5)
    {
	printf("Enter the %d number = ",i);
	scanf("%d",&n);
	if(n%2==0)
	{
		ceven++;
	}
	else
	{
		codd++;
	}
	i++;
    }
		printf("\n%d Even numbers are there",ceven);
       	printf("\n%d odd numbers are there",codd);
	getch();
}
