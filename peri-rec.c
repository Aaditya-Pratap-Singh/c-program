//to find the perimeter of rectangle
#include<stdio.h>
void main()
{
	float l,b,perimeter;
	printf("enter the value of Length and Bredth");
	scanf("%f%f",&l,&b);
	perimeter = 2*(l+b);
	printf("Perimeter of rectangle= %f",perimeter);
}
