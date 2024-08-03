//8.WAP to accept the height of a person in centimeters and categorize the person
//according to their height.
#include<stdio.h>
int main ()
{
	float n;
	printf("8.WAP to accept the height of a person in centimeters and categorize the person\naccording to their height.\n");
    printf("Enter your height in centimeters");
	scanf("%f",&n);
	
	if (n<150)
	{
		printf("You are short heighted");
	}
	
	else if (n>=150 && n<165)
	{
		printf("You are average heighted");
	}
	
		else if (n>=165 && n<180)
	{
		printf("You are tall");
	}
	
	else
	{
		printf("You are very tall");
	}
	getch();
}
