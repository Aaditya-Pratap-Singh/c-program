//program to orint a sum of n natural number 
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	printf("Sum=%d",sum(n));
}

	int sum(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else 
	return n+sum(n-1);
}
