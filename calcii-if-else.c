// to implement a simple calculator using if else
#include<stdio.h>
void main()
{
	int a,b;
	char op;
	printf("Enter the value of a,b and op('+,-,*,/')  ");
	scanf("%d%d%c",&a,&b,&op);
	if(op=='+')
	{
		printf("Result=%d\n",a+b);
	}
	else if(op=='-')
	{
		printf("Result=%d\n",a-b);
	}
	else if(op=='*')
	{
		printf("Result=%d\n",a*b);
	}
	else if(op=='/')
	{
		if(b!=0)
	    {
		    printf("Result=%d\n",a/b);
    	}
    	else
    	{
    		printf("Division by zero is not possible");
		}
    	
    }
}
