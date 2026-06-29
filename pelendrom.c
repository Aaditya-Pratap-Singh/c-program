// to check whether the given  3 digit number is pelendrom or not
// pelendrom -> 11,22,444,545
#include<stdio.h>
void main()
{
	int n,d1,d2,d3,rev;
	printf("Enter a three digit number");
	scanf("%d",&n);
	d1=n/100;
	d2=(n/10)%10;
	d3=n%10;
	rev=d3*100+d2*10+d1*1;
	if(rev==n)
	{
		printf("The given number is pelendrom");
	}
	else
	{
		printf("Not a pelendrom");
	}
}
