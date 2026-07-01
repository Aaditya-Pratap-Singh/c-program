// to delete the file 
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int status;
	status=remove("abc.txt");
	if(status==0)
	printf("File deleted successfully.....");
	else
	printf("File do not exits!!");
}
