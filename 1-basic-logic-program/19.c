//19.Calculate compound interest

#include<stdio.h>
#include<math.h>
int main()
{
	double p,t,r,a;
	
	printf("19.Calculate compound interest\n");
	printf("Enter your  principal amount = ");
	scanf("%lf",&p);
	
	printf("Enter number of years = ");
	scanf("%lf",&t);
	
	printf("Enter annual rate = ");
	scanf("%lf",&r);
	
	
	a = p * pow((1 + r / 100), t);
	
	printf("\nThe compound interest is = %.2lf",a);
	getch();
		
}


