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
>>>>>>> a3b3a9cd7e3d97dc3357f9b679ba91d9f1a3bec6
