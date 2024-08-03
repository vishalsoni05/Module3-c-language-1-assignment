//6.Write a program in C to count the total number of alphabets, digits and 
//special characters in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i,alpha = 0, digit = 0, special = 0;
    
    printf("6.Write a program in C to count the total number of alphabets, digits and \nspecial characters in a string.\n");
    printf("Enter a string to count = ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
            alpha++;
        }
		
		 else if (str[i] >= '0' && str[i] <= '9') 
		{
            digit++;
        } 
		
		else 
		{
            special++;
        }
    }

    printf("string = %s\n",str);
    printf("Alphabets = %d\n",alpha);
    printf("Digits = %d\n",digit);
    printf("Special characters = %d\n",special);
    getch();
 }

