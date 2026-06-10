//9,99,999,9999,----n
#include<stdio.h>
void main()
{
	long long int i,n,series=0;
	printf("Enter the value of n");
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		series=(series*10)+9;
		printf("%lld\t",series);
	}
}
