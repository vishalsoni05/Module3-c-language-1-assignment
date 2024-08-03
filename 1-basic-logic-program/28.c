//28.Convert years into days and months

#include <stdio.h>
int main(){
float n;
printf("28.Convert years into days and months\n");
printf("Enter year to convert into month and days\n");
scanf("%f",&n);
printf("\n%f months",n*12);
printf("\n%f days",n*365);
getch();
return 0;
}
