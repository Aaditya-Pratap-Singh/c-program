#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		sum=sum+i;
    }
	if(sum==n)
	  printf("number is perfect");	 
	else
	   printf("number is not perfect");
}
