//19.Patterns:
//    *
//   * *
//  * * *
// * * * *
//* * * * *

#include<stdio.h>
int main()
{
	int i,j,spc,k;
	printf("19.Patterns:\n");
	printf("5 pattern\n");
    spc=4;
	for(i=1;i<=5;i++)
	{
		for(j=spc;j>=1;j--)
		{
			printf(" "); 	
	    }
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}  
			printf("\n");
		spc--;
	}
	getch();
}

