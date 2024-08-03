//19.Patterns:
//A
//BC
//DEF
//GHIJ
//KLMNO
#include<stdio.h>
int main ()
{
	int i,j;
	char letter = 'A';
	printf("19.Patterns:\n");
	printf("2 pattern\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf(" %c",letter);
		letter++;
		}
		printf("\n");
	}
	getch();
}
