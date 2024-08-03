//6.Find the Character Is Vowel or Not
#include<stdio.h>
int main ()
{
	char n;
	printf("6.Find the Character Is Vowel or Not\n");
	printf("Enter any character = ");
	scanf("%c",&n);
	if (n =='a'||n =='e'||n =='i'||n =='o'||n =='u'||n =='A'||n =='E'||n =='I'||n =='O'||n =='U') 
	{
       	printf("character is vowel");
    }
	else
	{
	    printf("character is not vowel");	
	}
	getch();
}
