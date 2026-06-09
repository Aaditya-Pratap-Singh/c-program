//SQUARE OF N NATURAL NUMBER
#include<stdio.h>
void main()
{
	int n,i,sqr;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sqr=i*i;
		printf("%d\t",sqr);// \t for space
	}
}
