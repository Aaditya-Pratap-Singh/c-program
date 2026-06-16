// table of the given number
#include<stdio.h>
void main()
{
	int n,i,table;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		table=i*n;
		printf(" %d\n",table);
	}
}
