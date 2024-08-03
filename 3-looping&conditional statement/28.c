//28. 1 2 3 6 9 18 27 54...

#include <stdio.h>
int main() {
    int i,n;
    int current = 1;
    printf("28. 1 2 3 6 9 18 27 54...\n");
    printf("Enter number = ");
    scanf("%d", &n);
	printf("Number =  %d",current);
	for (i=1;i<n;i++)
	{
        if (i%2!= 0) 
		{
			current*=2;
        } 
		else{
            current*=1.5;
        }
        printf(" %d ",current);
    }
	  printf("\n");
    getch();
}

