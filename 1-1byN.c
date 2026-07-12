//PRINT A SERIES 1 TO 1/N (loops)
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		printf(" 1/%d\t",i);// \t for space
	}
} 
