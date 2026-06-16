//to calculate electricity bill according to units consumed
#include<stdio.h>
void main()
{
	float unit, bill;
	printf("Enter the units:");
	scanf("%f",&unit);
	if(unit>=0 && unit<=100)
	{
		bill=3*unit;
	    printf("your bill=%f",bill);
	}
	else if(unit>100 && unit<=200)
	{
		bill=5*unit;
		printf("your bill=%f",bill);
	}
	else if(unit>200)
	{
		bill=10*unit;
		printf("your bill=%f",bill);
	}
}
