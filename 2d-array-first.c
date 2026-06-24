<<<<<<< HEAD
//2d array input and output
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("enter the size of r and c\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the element of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("Display the elements of matrix\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}


=======
//2d array input and output
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("enter the size of r and c");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the element of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("Display the elements of matrix\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}


>>>>>>> b102a9a18a250e69d41006b6ec740285a0e53433
