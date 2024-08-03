//9.C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main ()
{
    char n;
	printf("9.C Program to Check Uppercase or Lowercase or Digit or Special Character\n");
	printf("Enter to Check Uppercase or Lowercase or Digit or Special Character ");
	scanf("%c",&n);
	if(n>='a' && n<='z')
	{
	printf("You entered lower case alphabet");
    } 
	else if(n>='A' && n<='Z')
	{
	printf("You entered upper case alphabet");
    }
	else if(n>'0' && n<'9')
	{
	printf("You entered digit");
    }
	else
	{
		printf("You enterted special character");
	}
	getch();
}

