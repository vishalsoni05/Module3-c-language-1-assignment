//4.Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0,i;

    printf("4.Write a program in C to count the total number of words in a string.\n");
    printf("Enter a string = ");
    gets(str); 

    
    for ( i = 0; str[i] != '\0'; i++)
	{
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') 
		{
            count++;
        }
    }
    
    if (str[0] != ' ' && str[0] != '\0') 
	{
        count++;
    }

    printf("Total number of words = %d\n", count);

	getch();
}

