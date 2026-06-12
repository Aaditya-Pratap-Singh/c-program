//TO CHECK NUMBER OF DIGITS OF A GIBEN N DIGIT NUMBER
#include<stdio.h>
void main()
{
	int n,i=1,digit,count=0;
	printf("Enter the value of n :");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n/10;
		count++;
		n=digit;
	}
	printf("%d",count);
}
