//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include <stdio.h>

int main() {
float width,length,height;
printf("10.find the area of a rectangular prism formula : A=2(wl+hl+hw)\n");
printf("Enter the width\n");
scanf("%f",&width);
printf("Enter the length\n");
scanf("%f",&length);
printf("Enter the height\n");
scanf("%f",&height);
printf("\narea of a rectangular prism = %f",2*(width*length+height*length+height*width));
getch();
return 0;
}
