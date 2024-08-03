//15.Convert school’s name in abbreviated form


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100],arr2[100];
	int i,j=0;
	
	printf("15.Convert school’s name in abbreviated form\n");
	printf("Enter the name of school = ");
	gets(arr1);
	
	for(i=0;arr1[i]!='\0';i++)
	{
		if( (i==0 || arr1[i-1] == ' ') && arr1[i]!=' ')
		{
			arr2[j]=arr1[i];
			j++;
		}
	}
	printf("Enter the abbreviate form of %s = %s",arr1,strupr(arr2));
    getch();
}

