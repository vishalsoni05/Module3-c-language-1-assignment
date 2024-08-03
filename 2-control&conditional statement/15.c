//15.Write a C program to determine eligibility for admission to a professional course based on the
//following criteria Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in 
//Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ----------------
//Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths
//and Physics : 137 The candidate is not eligible.

#include<stdio.h>
int main ()
{
	int math,phy,chem;
	printf("15.Write a C program to determine eligibility for admission to a professional \ncourse based on the following criteria Eligibility Criteria : \nMarks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in\nall three subject >=190 or Total in Maths and Physics >=140 ----------------\nInput the marks obtained in Physics :65 Input the marks obtained in Chemistry \n:51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics \nand Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.\n");
	printf("Enter the mark of math = ");
	scanf("%d",&math);
    if(math>=65)
    {
    	printf("Enter the mark of phy = ");
	    scanf("%d",&phy);
	    if(phy>=55)
	    {
	        printf("Enter the mark of chem = ");
            scanf("%d",&chem);
			if(chem>=50)
			{
				if(math+phy+chem>=190)
				{
					printf("\nYour are eligible\n");
					printf("\nTotal marks = %d\n",math+phy+chem);
				    printf("\nTotal marks of math and phy = %d\n",math+phy);
				}
				else if(math+phy>=140)
				{
					printf("\nYour are eligible\n");
					printf("\nTotal marks = %d\n",math+phy+chem);
				    printf("\nTotal marks of math and phy = %d\n",math+phy);
				}
				else
				{
					printf("\nYour are not eligible total marks should be >= 190 or marks of\nmath and phy >= 140\n");
				    printf("\nTotal marks = %d\n",math+phy+chem);
				    printf("\nTotal marks of math and phy = %d\n",math+phy);
				}
			}
			else
	        {
	     	    printf("You are not eligible chem marks > 50");
	        }
		}
		else
	    {
	     	printf("You are not eligible phy marks > 55");
	    }
     	
	}
	else
	{
		printf("You are not eligible math marks > 65");
	}
	getch();
}
