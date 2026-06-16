// adding by function
#include<stdio.h>
void add(float,float);
void add(float p,float q)//formal parameter
{
	float sum;
	sum=p+q;
	printf("Sum=%.2f",sum);
}
void main()
{
	float a,b,sum;
	printf("Enter the value of a and b");
	scanf("%f%f",&a,&b);
	add(a,b);//actual parameter
}
// *** //
