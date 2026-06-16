//to implement a simple calculator
#include<stdio.h>
void main()
{
	float a,b;
	char sum,sub,mul,div;
	printf("Enter the value of a and b");
	scanf("%f%f",&a,&b);
	printf("sum,sub,multi,div ");
	scanf("%c%c%c%c",&sum,&sub,&mul,&div);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	if(sum)
	{
		printf("result=%d",sum);
	}
	else if(sub)
	{
		printf("result=%d",sub);
	}
	else if(mul)
	{
		printf("result=%d",mul);
	}
	else 
	{
		printf("result=%d",div);
	}
}
