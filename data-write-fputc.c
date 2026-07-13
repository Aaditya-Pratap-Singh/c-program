//to write the data in file handling by fputc
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
	int i;
	printf("Enter any string :");
	gets(str);
	for(i=0;i<str[i]!='\0';i++)
	{
		fputc(str[i],fp);
	}
	printf("Data written successfully....");
}
