//PRINT A NUMBER FROM N TO 1
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d\n",i);// \t for space
	}
}
