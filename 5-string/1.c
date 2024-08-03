//1.Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
#include<string.h>

int main ()
{
	int i,length=0;
	char str[100];
	printf("1.Write a program in C to find the length of a string without using library functions.\n");
	printf("Enter the string to find his length = ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("Length of a string = %d",length);
	getch();
}
