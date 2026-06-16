//to convert binary into decimal
#include<stdio.h>
void main()
{
	int n,i,decimal,digit,last,sum=0;
	printf("enter the value n");
	scanf("%d",&n);
	for(i=1;i<=15;i++)
	{
		if(n>0)
		last =n%10;
		digit=n/10;
		decimal=(last)*pow(2,i);
		sum+=decimal;
		n=digit;
	}
	printf("binary=%d",sum);
}
