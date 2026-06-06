//swapping using 3 variables
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("Value of a before swapping %d\n",a);
	printf("Value of b before swapping %d\n",b);
	//logic for swapping
	c=a;
	a=b;
	b=c;
	printf("value of a after swapping %d\n",a);
	printf("value of b after swapping %d\n",b);
}
