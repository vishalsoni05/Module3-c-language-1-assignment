//14.Write a program in C to combine two strings manually

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char str3[200];
    int i, j;

    printf("14.Write a program in C to combine two strings manually\n");
    printf("Enter the first string = ");
    gets(str1);

 
    printf("Enter the second string = ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++) 
	{
        str3[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) 
	{
        str3[i + j] = str2[j];
    }

    printf("New string = %s\n", str3);
    getch();
    return 0;
}
