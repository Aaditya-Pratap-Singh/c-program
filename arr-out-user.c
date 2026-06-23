//array input  by user
#include<stdio.h>
void main()
{
	int a[5],i;
	printf("Enter the element of an array");
	for(i=1;i<5;i++)
	{
		scanf("%d/n",&a[i]);
	}
	printf("Display the element\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
