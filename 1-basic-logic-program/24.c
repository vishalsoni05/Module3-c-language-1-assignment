//24.Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
int main()
{
	int emp1,emp2,emp3,emp4,emp5, Tsalary;
	char n1[10],n2[10],n3[10],n4[10],n5[10];
	float Average;
	
	printf("Enter name of emp1 = ");
	scanf("%s",&n1);
	printf("Enter salary of emp1 = ");
	scanf("%d",&emp1);
	
	printf("Enter name of emp2 is = ");
	scanf("%s",&n2);
	printf("Enter salary of emp2 = ");
	scanf("%d",&emp2);
	
	printf("Enter name of emp3 = ");
	scanf("%s",&n3);
	printf("Enter salary of emp3 = ");
	scanf("%d",&emp3);
	
	printf("Enter name of emp4 = ");
	scanf("%s",&n4);
	printf("Enter salary of emp4 = ");
	scanf("%d",&emp4);
	
	printf("Enter name of emp5 = ");
	scanf("%s",&n5);
	printf("Enter salary of emp5 = ");
	scanf("%d",&emp5);
	
	Tsalary=emp1+emp2+emp3+emp4+emp5;
	printf("\nTotal Salary is : %d",Tsalary);
	
	Average= (Tsalary / 5 );
	printf("\nYour average value is: %.2f ", Average);
	getch();
}
