<<<<<<< HEAD
//diogonal matrix
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the value of row and column\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of the matrix\n");
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
			if(i==j)
			printf("%d\t",a[i][j]);
			else
			printf("0 ");
		}
		printf("\n");
	}
}
=======
//diogonal matrix
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the value of row and column\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of the matrix\n");
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
			if(i==j)
			printf("%d\t",a[i][j]);
			else
			printf("0 ");
		}
		printf("\n");
	}
}
>>>>>>> 94f267af05ce744184b361b050fde2f1f9d54082
