//2.Write a C program to read the value of an integer m and 
//display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
#include<stdio.h>
int main ()
{
	int m,n=0;
	printf("2.Write a C program to read the value of an integer m and display the value of \nn is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0\n");
	printf("Enter the value of m = ");
	scanf("%d",&m);
	if (m>0)
	{
		n=1;
		printf("%d",n);
	
}
	else if (m==0)
	{
		n=0;
		printf("%d",n);
	}

	else
	{
		n=-1;
		printf("%d",n);
	}
	getch();
}
