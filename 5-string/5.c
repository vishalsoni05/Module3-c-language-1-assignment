//5.Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,result=0;
	
	printf("5.Write a program in C to compare two strings without using string library \nfunctions.\n");
	printf("Enter first string = ");
	gets(str1);
	printf("Enter second string = ");
	gets(str2);
	
	for(i=0;str1[i]!='\0' ;i++)
	{
		if(str1[i] != str2[i])
		{
			result = 1; 	
		}
	}
	if(result == 1 )
	{
		printf("Both the strings are not equal");
	}
	else
	{
		printf("Both the strings are equal");
	}
	getch();
}

