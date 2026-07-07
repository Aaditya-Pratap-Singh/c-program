//SERIES- 1,11,111,1111----n 
#include<stdio.h>
void main()
{
	long long int i,n,series=0;
	printf("Enter the value of n");
	scanf("%lld",&n); 
	for(i=1;i<=n;i++)
	{
		series=(series*10)+1;
		printf("%lld\t",series);// \t for space 
	}
}
