//17.Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    float salary, premium;
    printf("17.Calculate person insurance premium based on salary\n");
    printf("Enter your salary = ");
    scanf("%f", &salary);
    
    premium = salary * 0.05;

    printf("Your insurance premium is = %.2f\n", premium);

    getch();
}
