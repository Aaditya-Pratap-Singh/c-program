// smallest among 3 numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a ,b ,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("A is smaller");
		}
		else
		{
			printf("C is smaller");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is smaller");
		}
		else
		printf("C is smaller");
    }
} 
