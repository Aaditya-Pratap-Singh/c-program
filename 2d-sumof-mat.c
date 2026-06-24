//to perform the addition of two matrix
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("enter the size of r and c");
	scanf("%d%d",&r,&c);
	int a[r][c];
    int b[r][c];
	int sum[r][c];
	printf("Enter the element of first matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("Enter the element of second matrix\n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    printf("Display the elements of first matrix\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Display the elements of second matrix\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
  //loop for sum
  printf("Sum of matrix");
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
  		sum[i][j]=a[i][j]+b[i][j];
	  }
  }
  printf("\n Display the elements of matrix 3\n");
  for(i=0;i<r;i++)
  {
  	for(j=0;j<r;j++)
  	{
  		printf("%d\t",sum[i][j]);
	  }
	  printf("\n");
  }
}
