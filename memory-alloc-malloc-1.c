//Dynamic memory alloc :array
//malloc
#include<stdio.h>
#include<stdlib.h>//standard library
void main()
{
	int n,i,*ptr;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	ptr = malloc(n*sizeof(int));
	if(ptr==NULL)//for termination
	{
		printf("Error in memory allocation!!!");
		exit(0 );//use to terminate
		//return;
	}
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("Display the elements of array\n");
	for(i=0;i<n;i++)
	{
	    printf("%d",(ptr+i));	
	}
	free(ptr);
}									
