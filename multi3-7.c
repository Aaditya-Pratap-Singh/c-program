// to check the number is divisible by 3 and 7 both
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%3==0 && num%7==0)
	{
		printf("number is multiple of 3 and 7 ");
	}
	else
	{
		printf("number is not multiple of both");
	}
}
