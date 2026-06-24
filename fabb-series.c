<<<<<<< HEAD
// write a program to print fabb series
#include<stdio.h>
void main()
{
	int n,i,a=-1,b=1,sum;
	printf("Enter the ending of the series");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
	}
}
=======
// write a program to print fabb series
#include<stdio.h>
void main()
{
	int n,i,a=-1,b=1,sum;
	printf("Enter the ending of the series");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
	}
}
>>>>>>> 7547e39c535205c73e3395442a0bb112a0d03976
