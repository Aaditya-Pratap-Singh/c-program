//swapping of two numbers without c and arithmatic operators
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("value of a before swapping: %d\n",a);
	printf("value of b before swapping: %d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("value of a after swapping :%d\n",a);
	printf("value of b after swapping :%d\n",b);
}
