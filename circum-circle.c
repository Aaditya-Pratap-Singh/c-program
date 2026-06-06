//to find circumference of a circle
#include<stdio.h>
#define pi 3.14
void main()
{
	float r,circumference;
	printf("enter radius");
	scanf("%f",&r);
	circumference= 2*pi*r;
	printf("circumference of circle is:%f",circumference);
}
