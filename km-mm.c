//to convert a distance from KM to MM.
#include<stdio.h>
#include<math.h>
void main()
{
	float n,answer;
	printf("enter a number:");
	scanf("%f",&n);
	//1km=100000mm
	answer=n*pow(10,5);
	printf("your number is milimetre is :%f\n",answer);
	
} 
