//to check weather the person is eligible for loan or not
#include<stdio.h>
void main()
{
	int age,income,credit_score;
	printf("enter your age:");
	scanf("%d",&age);
	
	printf("Enter your monthly income: ");
	scanf("%d",&income);
	
	printf("Enter your credit_score:");
	scanf("%d",&credit_score);
	
	if(age<21 || age>65)
	{
		printf("Not Eligible\n");
		printf("age lies between 21 and 65\n");
	}
	else if(income<=2500)
	{
		printf("Not Eligible\n");
		printf("Minimum salary should be 2500\n");
	}
	else if(credit_score < 650)
	{
		printf("Not Eligible\n");
		printf("Credit score should be more then 650\n");
	}
	else
	{
		printf("Eligible for Loan");
	}
}
