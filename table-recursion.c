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
>>>>>>> a3b3a9cd7e3d97dc3357f9b679ba91d9f1a3bec6
