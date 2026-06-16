// to find the factorial of a given number
#include<stdio.h>
void main()
{
	int i,n,multi=1;
	printf("Enter the vlaue of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		multi=multi*i;
	}
	printf("Factorial =%d",multi);
}
