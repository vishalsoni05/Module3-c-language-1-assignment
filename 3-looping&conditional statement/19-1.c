//19.Patterns:
//1
//10
//101
//1010
//10101
#include<stdio.h>
int main()
{
	int i,j;
	printf("19.Patterns:\n");
	printf("1 pattern\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
			printf("1");
			}
		}
		printf("\n");
	}
	getch();
}
