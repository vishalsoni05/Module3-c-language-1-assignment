//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
#include<math.h>
int main()
{
	int a,pwr1,pwr2,pwr3;
	printf("Enter the number =");
	scanf("%d",&a);
	
	pwr1 = pow(a,1);	
	pwr2 = pow(a,2);	
	pwr3 = pow(a,3);
	printf("The power for the interger is = %d", pwr1);
	printf("\nThe power for the interger is = %d", pwr2);
	printf("\nThe power for the interger is = %d", pwr3);
	getch();	
}
