//12.Program of Armstrong Number in C Using For Loop & While Loop
//using for loop
#include<stdio.h>
int main ()
{
	int num,temp,sum=0,count=0,i;
	printf("12.Program of Armstrong Number in C Using For Loop & While Loop\n");
	printf("Enter any number to check it is armstrong or not = ");
	scanf("%d",&num);	
    
    for(temp=num;temp!=0;temp/=10)
	{
		count++;
	}
    
	for(temp=num;temp!=0; temp/=10)
	{
	 int digit = temp%10;
	 int power = 1;
	 for(i=0;i<count;i++)
	 {
	 	power*=digit;
	 }
	 sum+=power;
    }
		if(sum==num)
		{
		printf("%d is arm strong number",num);	
		}
		else
		{
		printf("%d is not arm strong number",num);	
		}
	getch();
}




//using while loop
//
//#include<stdio.h>
//#include<math.h>
//int main ()
//{
//	int num,rem,count=0,power=0;
//	printf("12.Program of Armstrong Number in C Using For Loop & While Loop\n");
//	printf("Enter any number to check it is armstrong or not = ");
//	scanf("%d",&num);
//    int	temp=num;
//    int temp2=num;
//	while(num!=0)
//	{
//		num = num/10;
//		count++;
//	}
//      while(temp!=0)
//      {
//      	int dig = temp%10;
//      	power = power + pow(dig,count);
//      	temp = temp/10;
//	  }
//	  
//	 	if(power == temp2)
//		{
//		printf("%d is arm strong number",temp2);	
//		}
//		
//		else
//		{
//		printf("%d is not arm strong number",temp2);	
//		}
//	getch();
//
//}
