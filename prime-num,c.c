<<<<<<< HEAD
//to check the given number is prime number
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    count++;
    }
	 if(count==2)
	 {
	 	printf("Prime number");
	 }
	 else
	 {
	 	printf("Not a prime number");
	 }
}
=======
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    count++;
    }
	 if(count==2)
	 {
	 	printf("Prime number");
	 }
	 else
	 {
	 	printf("Not a prime number");
	 }
}
>>>>>>> 7547e39c535205c73e3395442a0bb112a0d03976
