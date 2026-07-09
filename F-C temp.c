//to convert the temperature from fahrenheit to celcius
#include<stdio.h>
void main()
{
	int F,C;
	printf("Enter the temp. in fahrenheit");
	scanf("%d",&F);
	C= ((F-32)*5)/9; 
	printf("answer in degree celcius = %d",C);
}
