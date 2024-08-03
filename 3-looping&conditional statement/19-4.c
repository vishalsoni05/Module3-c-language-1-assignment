//19.Patterns:
//A
//AB
//ABC
//ABCD
//ABCDE
#include<stdio.h>
int main ()
{
	int i,j;
	char letter = 'A';
	printf("19.Patterns:\n");
	printf("4 pattern\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf(" %c",letter);
		letter++;
		}
		letter = 'A';
		printf("\n");
	}
	getch();
}
