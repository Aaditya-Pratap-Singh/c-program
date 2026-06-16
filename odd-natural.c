//PRINT A ODD NATURAL NUMBER FROM 1 TO n
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		printf("%d\t",i);// \t for space
	}
}
