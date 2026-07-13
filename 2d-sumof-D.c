//2d array sum of diogonals 
#include<stdio.h>
void main()
{
	int r,c,i,j,sum=0;
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
    		if(i==j)
    		sum+= a[i][j];
		}
		printf("\n");
	}
	printf("sum of diogonals=%d\n",sum);
}ba91d9f1a3bec6
