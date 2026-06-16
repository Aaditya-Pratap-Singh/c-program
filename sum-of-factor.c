// to find the sum of factors of a given  number
//to find the sum of factors of the given number
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	printf("sum=%d",sum);
	
}
