//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include <stdio.h>

int main() {
int n;
printf("12.Accept number of students from user. I need to give 5 apples to each student.How many apples are required?\n");
printf("Enter the number of students\n");
scanf("%d",&n);
printf("\nYou need %d apple",n*5);
getch();
return 0;
}
