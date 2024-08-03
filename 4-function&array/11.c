//11.WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>

int main() {
    int n[5],i;
    
    printf("11.WAP to accept 5 numbers from user and display in reverse order using \nfor loop and array\n");
    printf("Enter 5 numbers =\n");
    for ( i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
    }

    printf("Numbers in reverse order =\n");
    for ( i = 4; i >= 0; i--) {
        printf("%d\n", n[i]);
    }
    getch();
}
