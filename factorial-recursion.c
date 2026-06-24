<<<<<<< HEAD
//recursion function
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	  return 1;
	else
	  return n*fact(n-1);
}
void main()
{
	int n;
	printf("Enetr the value of n");
	scanf("%d",&n);
	printf("Factorial=%d",fact(n));   
}
=======
//recursion function
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	  return 1;
	else
	  return n*fact(n-1);
}
void main()
{
	int n;
	printf("Enetr the value of n");
	scanf("%d",&n);
	printf("Factorial=%d",fact(n));   
}
>>>>>>> b102a9a18a250e69d41006b6ec740285a0e53433
