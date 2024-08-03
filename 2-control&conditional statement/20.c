//30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be 
//of Rs. 256/-
#include<stdio.h>
int main ()
{
	float n;
	start:
	printf("\n30.If bill exceeds Rs. 800 then a surcharge of 18%% will be charged and the\nminimum bill should be of Rs. 256/-\n");
	printf("\nEnter your bill amount = ");
	scanf("%f",&n);
	if(n>800)
	{
		printf("Subcharge amount = %f\n",n/100*18);
		printf("Total amount = %f",n+n/100*18);
	}
	else if(n>=256 && n<=800)
	{
		printf("Total amount =%f",n);
	}
	else 
	{
		printf("\nMinimum bill should be of ruppes 256 your amount = %f\n",n);
		goto start;
	}
	getch();
}
