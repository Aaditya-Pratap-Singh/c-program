 //pyramid in a matrix
#include<stdio.h>
void main()
{
	int i,j,sp,row;
	printf("Enter the value of row");
	scanf("%d",&row);
	for(i=row;i<=1;i--)
	{
		for(sp=1;sp<=row-i;sp++)
		{
		printf(" ");
	    }
	    for(j=1;j<=2*i-1;j++)
	    {
	    	printf("*");
		}
		printf("\n");
	}
	
}
