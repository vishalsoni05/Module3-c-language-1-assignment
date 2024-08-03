//3.WAP to take 10 no. Input from user find out below values
//a.How many Even numbers are there
//b.How many odd numbers are there
//c.Sum of even numbers
//d.Sum of odd numbers

#include<stdio.h>
int main ()
{
	int i,n,counteven=0,countodd=0,sumeven=0,sumodd=0;
	printf("3.WAP to take 10 no. Input from user find out below values\n");
	printf("Enter any 10 numbers");
	for(i=1;i<=10;i++)
	{
		
		printf("\nEnter number %d = ",i);
     	scanf("%d",&n);
         if(n%2==0)
         {
         	counteven++;
         	sumeven = sumeven + n;
		 }
		 
		 else
		 {
		 	countodd++;
         	sumodd = sumodd + n;
		 }
	}
         	printf("\n%d Even numbers are there",counteven);
         	printf("\n%d odd numbers are there",countodd);
         	printf("\nsum of even number = %d",sumeven);
         	printf("\nsum of odd number = %d",sumodd);
	getch();
}





