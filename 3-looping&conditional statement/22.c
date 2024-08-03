//22.Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
int main ()
{
	int i=1,n,rem=0,rev=0;
	printf("22.Accept 3 numbers from user using while loop and check each numbers palindrome\n");
	printf("Enter any 3 number\n");
	while(i<=3)
	{
	printf("\nEnter %d number = ",i);
	scanf("%d",&n);
	int temp = n;
	rev=0;
	while(n!=0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n/=10;
	}
	if(temp==rev)
	{
		printf("\n%d is palidrome\n",temp);
	}
	else
	{
		printf("\n%d is not palidrome\n",temp);
	}
	i++;
    }
	getch();
}

