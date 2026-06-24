//
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the no of element");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",a[i]);
		sum+=a[i];
	}
	printf("Display the elements of array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",sum);   
	}
}
