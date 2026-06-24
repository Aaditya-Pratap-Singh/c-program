<<<<<<< HEAD
 //recursion function
#include<stdio.h>
int table(int n, int i)
{
	if(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		table(n,i+1);
	}
}
void main()
{
	int n,i=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	table(n,i);   
}
=======
 //recursion function
#include<stdio.h>
int table(int n, int i)
{
	if(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		table(n,i+1);
	}
}
void main()
{
	int n,i=1;
	printf("Enter the value of n");
	scanf("%d",&n);
	table(n,i);   
}
>>>>>>> b102a9a18a250e69d41006b6ec740285a0e53433
