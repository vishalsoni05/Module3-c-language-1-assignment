//16.Accept 5 numbers from user and perform sum of array.
#include <stdio.h>

int main() {
    int n[5],sum=0,i;
    
    printf("16.Accept 5 numbers from user and perform sum of number \n");
    printf("Enter any 5 numbers to perform sum of array =\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
        sum += n[i]; 
    }
    printf("\nSum of the numbers = %d\n", sum);
    getch();
}
