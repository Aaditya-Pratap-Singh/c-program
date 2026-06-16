//pattern in matrix
void main()
{
	int i,j,row,count=0;
	printf("Enter the value of row :");
	scanf("%d",&row);
	for (i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
		count++;
		printf("%d\t",count);
	    }
	printf("\n");
    }
}

