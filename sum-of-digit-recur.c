<<<<<<< HEAD
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
=======
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
>>>>>>> b102a9a18a250e69d41006b6ec740285a0e53433
