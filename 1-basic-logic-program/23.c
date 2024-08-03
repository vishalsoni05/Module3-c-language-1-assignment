//23.WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>
int main(){
int n1,n2;
printf("23.WAP to calculate swap 2 numbers with using of multiplication and division.\n");
printf("Enter first number\n");
scanf("%d",&n1);
printf("Enter second number\n");
scanf("%d",&n2);
printf("\nswap value with 2 variables before swap = %d",n1);
printf("\nswap value with 2 variables before swap = %d",n2);
n1 = n1 * n2;
n2 = n1 / n2;
n1 = n1 / n2;
printf("\nswap value with 2 variables after swap = %d",n1);
printf("\nswap value with 2 variables after swap = %d",n2);
getch();
return 0;

}
