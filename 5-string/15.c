//15.Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    char largest[100] = "";
    char smallest[100] = "";
    char word[100];
    int i, j, k, len, max = 0, min = 100;

    printf("15.Write a program in C to find the largest and smallest words in a string.\n");
    printf("Enter a string = ");
    gets(str);

    for (i = 0, j = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == ' ') 
		{
            word[j] = '\0';
            len = strlen(word);
            if (len > max) 
			{
                max = len;
                strcpy(largest, word);
            }
            if (len < min) 
			{
                min = len;
                strcpy(smallest, word);
            }
            j = 0;
        } 
		else 
		{
            word[j] = str[i];
            j++;
        }
    }
    len = strlen(word);
    if (len > max) 
	{
        strcpy(largest, word);
    }
    if (len < min) 
	{
        strcpy(smallest, word);
    }

    printf("Largest word = %s\n", largest);
    printf("Smallest word = %s\n", smallest);
    getch();
    return 0;
}

