// to check wheather a person  is eligible for vote
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible for vote");
	}
	else
	{
		printf("Not eligible for vote");
	}
}
