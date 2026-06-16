// to find a greater between two numbers using switch case
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	switch(a>b)//1 or 0 - true or false
	{
		case 1:
			printf("A is greater");
			break;
		case 0 :
			printf("B is greater");
			break;
	}
}
