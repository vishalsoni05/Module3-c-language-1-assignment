//19.Patterns:
//1
//23
//456
//78910
//1112131415

#include<stdio.h>
int main ()
{
	int i,j;
	int num = 1;
	printf("19.Patterns:\n");
	printf("3 pattern\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf(" %d",num);
	    num++;
		}
		printf("\n");
	}
	getch();
}
