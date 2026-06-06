//to find the area of circle 
#include<stdio.h>
void main()//can declare const by #define pi 3.14
{
	float pi,r,area;
	printf("enter radius:");
	scanf("%f",&r);
	pi=3.14;
	area=pi*r*r;
	printf("area = %f",area);//for restriction ,use .2before %f
}
