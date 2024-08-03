//7.Accept marks from user and check pass or fail
#include<stdio.h>
int main ()
{
	int n;
	printf("7.Accept marks from user and check pass or fail\n");
	printf("Enter your marks = ");
	scanf("%d",&n);
	if (n>=33)
	{
		printf("Congratulations you are pass");
	}
	else
	{
		printf("Sorry you are fail");
	}
	getch();
}
