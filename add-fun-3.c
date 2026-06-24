<<<<<<< HEAD
//add by function no args , with return value
#include<stdio.h>
float add();
float add()
{
	float a,b,sum;
	printf("Enter the value of a and b") ;
	scanf("%f%f",&a,&b);
	sum=a+b;
	return sum;
}
void main()
{
	float result;
	result=add();
	printf("Sum=%f",result);
}
=======
//add by function no args , with return value
#include<stdio.h>
float add();
float add()
{
	float a,b,sum;
	printf("Enter the value of a and b") ;
	scanf("%f%f",&a,&b);
	sum=a+b;
	return sum;
}
void main()
{
	float result;
	result=add();
	printf("Sum=%f",result);
}
>>>>>>> 7547e39c535205c73e3395442a0bb112a0d03976
