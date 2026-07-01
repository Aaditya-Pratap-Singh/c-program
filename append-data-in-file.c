//to append the data in file handling
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp = fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("Error in file creation!!!");
		exit(0);
	}
	char str[100];
	printf("Enter any string :");
	gets(str);
	//string write
	fputs(str,fp);
	printf("Data written successfully....");
	fclose(fp);
}
