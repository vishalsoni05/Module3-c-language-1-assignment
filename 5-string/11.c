//11.Write a program in C to read a sentence and replace lowercase characters with 
//uppercase and vice versa.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("//11.Write a program in C to read a sentence and replace lowercase characters \nwith uppercase and vice versa.\n");
    printf("Enter a sentence = ");
    gets(str);
    
    for ( i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = toupper(str[i]);
        } else if (str[i] >= 'A' && str[i] <= 'Z')
		{
            str[i] = tolower(str[i]);
        }
    }

    printf("New sentence = %s\n", str);

    getch();
}

