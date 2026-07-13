<<<<<<< HEAD
<<<<<<< HEAD
//transpose of a matrix
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the value of row and column\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of matrix\n");
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
		   printf("%d  ",a[i][j]);	
		}
		printf("\n");
	}
	printf("Transpose of matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
		
		printf("\n");
	}
}
		
		
		
=======
//transpose of a matrix
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the value of row and column\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of matrix\n");
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
		   printf("%d  ",a[i][j]);	
		}
		printf("\n");
	}
	printf("Transpose of matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
		
		printf("\n");
	}
}
		
		
		
>>>>>>> 94f267af05ce744184b361b050fde2f1f9d54082
=======
//transpose of a matrix
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the value of row and column\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of matrix\n");
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
		   printf("%d  ",a[i][j]);	
		}
		printf("\n");
	}
	printf("Transpose of matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
		
		printf("\n");
	}
}
		
		
		
>>>>>>> a3b3a9cd7e3d97dc3357f9b679ba91d9f1a3bec6
