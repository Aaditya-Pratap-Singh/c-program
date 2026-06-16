//to calculate employee bonus on salary slabs
#include<stdio.h>
void main()
{
	float salary, bonus;
	printf("Enter your salary :");
	scanf("%f",&salary);
	if(salary>=50000)
	{
		printf("Your bonus is 5000");
	}
	else if(salary<=30000 && salary>=20000)
	{
		printf("Your bonus is 3500");
	}
	else if(salary<20000 && salary>=10000)
	{
		printf("your bonus is 2500");
	}
	else if(salary<10000 && salary>=5000)
	{
		printf("your bonus is 1500");
	}
	else
	{
		printf("Your bonus is 500");
	}
}
