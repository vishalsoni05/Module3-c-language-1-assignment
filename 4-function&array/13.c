//13.WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
int main()
{
	int i,num[5];
	printf("13.WAP to accept 5 numbers from user and check entered number is \neven or odd using of array\n");
	printf("Enter any 5 number\n");
	for(i=0;i<5;i++)
	{     
		printf("Enter %d number = \n",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		if(num[i] % 2 == 0)
		{
		printf("\n%d is even number ",num[i]);
		}
		else 
		{
			printf("\n%d is odd number",num[i]);
		}
	}
	getch();
}
