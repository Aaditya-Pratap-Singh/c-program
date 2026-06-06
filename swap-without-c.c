//swapping of two no. without c 
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("a before swapping: %d\n",a);
	printf("b before swapping: %d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a after swapping: %d\n",a);
	printf("b after swapping: %d\n",b);
}
