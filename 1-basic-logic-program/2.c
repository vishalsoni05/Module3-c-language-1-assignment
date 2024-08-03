//2.Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include <stdio.h>

int main() {
float f1,f2;
printf("2.Write a program to make Simple calculator (to make addition, subtraction,\nmultiplication, division and modulo");
printf("\nEnter The Number 1\n");
scanf("%f",&f1);
printf("Enter The Number 2\n");
scanf("%f",&f2);
printf("\nAddition Of Two Number %.0f + %.0f = %.0f",f1,f2,f1+f2);
printf("\nSubtraction Of Two Number %.0f - %.0f = %.0f",f1,f2,f1-f2);
printf("\nMultiplication Of Two Number %.0f * %.0f = %.0f",f1,f2,f1*f2);
printf("\nDivision Of Two Number %.0f / %.0f = %f",f1,f2,f1/f2);
//printf("\nModulo Of Two Number %.0f % %.0f = %.0f",f1,f2,f1%f2);
getch();
return 0;
}
