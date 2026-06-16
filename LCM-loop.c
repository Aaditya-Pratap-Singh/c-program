//to find the LCM of the given number
#include<stdio.h>
void main()
{
	int i,a,b,mul,lcm;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	mul=a*b;
	for(i=1;i<=mul;i++)
	{
		if(i%a==0&&i%b==0)
		break;
	}
	printf("LCM=%d",i);
}
