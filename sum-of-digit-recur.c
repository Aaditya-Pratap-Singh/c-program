//recursion function
#include<stdio.h>
int sum(int n)
{
	if(n==0)
	  return 0;
	else
	  return (n%10)+sum(n/10);
}
void main()
{
	int n,digit;
	printf("Enetr the value of n");
	scanf("%d",&n);
	printf("Sum=%d",sum(n));   
}
