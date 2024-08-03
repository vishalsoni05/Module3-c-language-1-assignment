//26.Convert temperature Fahrenheit to Celsius

#include <stdio.h>
int main(){
float n;
printf("26.Convert temperature Fahrenheit to Celsius\n");
printf("Enter fahrenheit to convert into celsius\n");
scanf("%f",&n);
printf("\n%f celsius",(n-32)/(1.8));
getch();
return 0;
}
