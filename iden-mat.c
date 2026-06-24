//identity matrix
#include<stdio.h>
void main()
{
	int r,c,i,j,b=1;
	printf("Enter the value of row and column\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
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
    printf("Check identity");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		if(i==j&&a[i][j]!=1)
    		{
    		    b=0;
    		    break;
    	    }
    		else if(i!=j&&a[i][j]==0)
    		{
    			b=0;
    			break;
			}
		}
		if(b=0)
		{
			break;
		}
	}
	if(b=1)
	{
		printf("Matrix is Identity");
	}
	else
	{
		printf("Matrix is not identity");
	}
}
