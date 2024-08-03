//19.Patterns:

#include<stdio.h>
int main()
{
	int i,j,k;
	printf("19.Patterns:\n");
	printf("6 pattern\n");
	for(i=1;i<=6;i++)
	{
		for (j=1;j<=i;j++)
		{
	        printf(" *");
		}
		printf("\n");
    }
		for(i=5;i>=1;i--)
	    {
	    for (k=i;k>=1;k--)
	    {
	        printf(" *");
		}
		printf("\n");
        }	
		
	getch();
}
