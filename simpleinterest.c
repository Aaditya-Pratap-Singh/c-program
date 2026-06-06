//to calculate the value of si
#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("Enter the value of p,r,and t");
	scanf("%f%f%f",&p,&r,&t);
	si = (p*r*t)/100;
	printf("simple interest = %f",si);
}
