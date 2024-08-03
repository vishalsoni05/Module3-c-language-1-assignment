//6.WAP to print Fibonacci series up to given number
#include<stdio.h>
int main ()
{
	int n,i,t1=0,t2=1,nextnum=0;
	printf("6.WAP to print Fibonacci series up to given number\n");
	printf("Enter num to print Fibonacci series = ");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		if(i==1)
		{
			printf("%d ",t1);
		}
		if(i==2)
		{
			printf("%d ",t2);
		}
		nextnum = t1 + t2;
		t1=t2;
		t2=nextnum;
		printf("%d ",nextnum);
	}
	getch();
}
