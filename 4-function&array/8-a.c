//8-a.information - print and display empno, empname, address and age

#include <stdio.h>

struct Employee
{
    int empNo,age;
    char empName[100],address[100];
};

int main()
{
    struct Employee emp;
    printf("8-a.information - print and display empno, empname, address and age\n");
    printf("Enter Employee No = ");
    scanf("%d", &emp.empNo);
    printf("Enter Employee Name = ");
    scanf("%s", emp.empName);
    printf("Enter Employee Address = ");
    scanf("%s", emp.address);
    printf("Enter Employee Age = ");
    scanf("%d", &emp.age);

    printf("\nEmployee Information =\n");
    printf("Employee No = %d\n", emp.empNo);
    printf("Employee Name = %s\n", emp.empName);
    printf("Employee Address = %s\n", emp.address);
    printf("Employee Age = %d\n", emp.age);

    getch();
}
