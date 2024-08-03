//32.Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main()
{
	int n,m,sum;
	
	printf("32.Accept 2 numbers and find out its sum check it size\n");
	printf("Enter the num 1 = ");
	scanf("%d",&n);
	printf("Enter the num 2 = ");
	scanf("%d",&m);
	sum=n+m;
	printf("sum = %d",sum);
	printf("\nThe size of the integer is = %d", sizeof(sum));
	getch();
	
}
