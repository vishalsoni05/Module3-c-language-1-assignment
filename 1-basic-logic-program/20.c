//20.Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.

#include <stdio.h>
int main(){
int salary;
printf("20.Accept monthly salary from the user and deduct 10 percent insurance premium,\n10 percent loan installment find out of remaining salary.\n");
printf("Enter your monthly salary");
scanf("%d",&salary);
printf("\nremaining salary is = %.0f",salary-(salary*0.1+salary*0.1));
getch();
return 0;

}
