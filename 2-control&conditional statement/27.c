//37.WAP to show
//i.Monday to Sunday using switch case
//ii.Vowel or Consonant using switch case

#include<stdio.h>
int main ()
{
	int n;
	char c;
	printf("37.WAP to show\ni.Monday to Sunday using switch case\nii.Vowel or Consonant using switch cas\n");
	printf("Enter 1 to show monday to sunday Enter 2 for vowel and consonant");
	scanf("%d",&n);
	
	switch (n)
    {
	case 1:
	   	{
		    int n;
			printf("Enter the week number (1-7) = ");
          	scanf("%d",&n);
    switch(n)
            {
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("wednesay");
			break;

		case 4:
			printf("Thrusday");
			break;
	
		case 5:
			printf("Friday");
			break;
	
		case 6:
			printf("Saturday");
			break;
	
		case 7:
			printf("Sunday");
			break;
	    default:
		printf("Invalid Week Number");
		break;
	        }
      	}
		break;
		
	case 2:
	   	{
	       printf("Enter any character = ");
		   scanf(" %c",&c);
		   switch(c)
            {
		   case'a':
		   case'e':
		   case'i':
		   case'o':
		   case'u':
		   case'A':
		   case'E':
		   case'I':
		   case'O':
		   case'U':
		   	printf(" %c is vowel",c);
		   	break;
		   	
		   	default:
		   	printf(" %c is a consonent",c);
		   	break;
	        }
	    } 
	    break;
		default:
    	printf("Invalid choice");
	 	break; 
 	}
	getch();
}









