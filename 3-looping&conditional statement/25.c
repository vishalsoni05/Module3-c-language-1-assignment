//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)\n");
	printf("Enter number = ");
	scanf("%d",&n);
	printf("\nNumber = ");
	for(i=1; i<=n; i++)
	{
		printf(" %d + ", i*i);
		sum = sum + i*i;
	}
		printf(" = %d ", sum);
	getch();
}
