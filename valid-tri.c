// to check the triangle is valid or not
#include<stdio.h>
void main()
{
	int a1,a2,a3,sum;
	printf("Enter the value of all three angles :");
	scanf("%d%d%d",&a1,&a2,&a3);
	sum= a1+ a2+ a3;
	if(sum==180)
	{
		printf("This triangle is valid");
	}
	else
	{
		printf("triangle is not valid");
	}
}
