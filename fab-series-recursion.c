// Fabonacci series by recursion
#include<stdio.h>
int fab(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fab(n-1)+fab(n-2);
}
void main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("%d\t",fab(n));
}
