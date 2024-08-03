//29.Convert minutes into seconds and hours

#include <stdio.h>
int main(){
float n;
printf("29.Convert minutes into seconds and hours\n");
printf("Enter minute to convert into hours and seconds\n");
scanf("%f",&n);
printf("\n%f hours",n/60);
printf("\n%f seconds",n*60);
getch();
return 0;
}
