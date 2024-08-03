//9.Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main() {
float side1,side2,side3;
printf("9.Find circumference of Triangle formula : triangle = a + b + c\n");
printf("Enter the length of 1 side of triangle\n");
scanf("%f",&side1);
printf("Enter the length of 2 side of triangle\n");
scanf("%f",&side2);
printf("Enter the length of 3 side of triangle\n");
scanf("%f",&side3);
printf("\nPerimeter of a triangle = %f",side1+side2+side3);
getch();
return 0;
}
