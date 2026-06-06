// write a program to check a given triangle is isoscales,equillaterial or scalen
// iso 2 sides are equal , equi=a=b=c , sca= none
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("enter all sides");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b && b==c && c==a)
	{
	printf("equillaterial triangle");
    }
    
    else if(a==b && b!=c)
    {
    	printf("isoscales triangle");
	}
	else if(a!=b && b==c)
    {
    	printf("isoscales triangle");
	}
	else if(a==c && c!=b)
    {
    	printf("isoscales triangle");
	}
	else if(a!=b!=c)
	{
		printf("scalen triangle");
	}
}
