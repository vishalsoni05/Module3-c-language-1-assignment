//25.Accept 5 expense from user and find average of expense

#include <stdio.h>
int main(){
float n1,n2,n3,n4,n5;
printf("25.Accept 5 expense from user and find average of expense\n");
printf("Enter first expense\n");
scanf("%f",&n1);
printf("Enter second expense\n");
scanf("%f",&n2);
printf("Enter third expense\n");
scanf("%f",&n3);
printf("Enter fourth expense\n");
scanf("%f",&n4);
printf("Enter fifth expense\n");
scanf("%f",&n5);
printf("\naverage of expense = %f",(n1+n2+n3+n4+n5)/5);
getch();
return 0;
}
