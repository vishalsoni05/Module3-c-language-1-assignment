//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
// swap number using 3 variable

#include <stdio.h>
int main()
{
int n1,n2,n3;
printf("swap number using 3 variable\n");
printf("Enter first number = \n");
scanf("%d",&n1);
printf("Enter second number = \n");
scanf("%d",&n2);
printf("\nswap value with 3 variables before swap = %d",n1);
printf("\nswap value with 3 variables before swap = %d",n2);
n3 = n1;
n1 = n2;
n2 = n3;
printf("\nswap value with 3 variables after swap = %d",n1);
printf("\nswap value with 3 variables after swap = %d",n2);
getch();
}





// swap number using 2 variable
//
//#include <stdio.h>
//int main(){
//int n1,n2;
//printf("// swap number using 2 variable\n");
//printf("Enter first number = \n");
//scanf("%d",&n1);
//printf("Enter second number = \n");
//scanf("%d",&n2);
//printf("\nswap value with 2 variables before swap = %d",n1);
//printf("\nswap value with 2 variables before swap = %d",n2);
//n1 = n1 + n2;
//n2 = n1 - n2;
//n1 = n1 - n2;
//printf("\nswap value with 2 variables after swap = %d",n1);
//printf("\nswap value with 2 variables after swap = %d",n2);
//getch();
//return 0;
//
//}

