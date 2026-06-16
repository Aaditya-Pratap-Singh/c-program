//to check the number is armstrong or not 
#include<stdio.h>
void main()
{
	int n,sum,digit,final;
	printf("Enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		sum=digit*digit*digit;
		final=sum;
		n=n/10;
	}
	if(final==n)
	printf("This number is Armstrong number");
	else
	printf("Not an armstrong number");
}
