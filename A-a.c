//upper case to lower case
#include<stdio.h>
void main()
{
	char ch;
	printf("enter a charector:");
	scanf("%c",&ch);
	ch=ch+32;
	printf("lower case charector=%c",ch);
}
