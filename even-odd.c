//to check a given number is even or odd
#include<stdio.h>
void main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n%2==0)// (=) means assigning the value of n
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}
