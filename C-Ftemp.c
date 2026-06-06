//to convert the temperature from celcius to fahrenheit 
#include<stdio.h>
void main()
{
	int C,F;
	printf("Enter the temp. in celcius");
	scanf("%d",&C);
	F= (C*9/5)+32 ;
	printf("answer in degree fahrenheit = %d",F);
}
