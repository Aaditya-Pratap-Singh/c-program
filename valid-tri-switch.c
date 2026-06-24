<<<<<<< HEAD
//to check whether three side can form valid triangle
#include<stdio.h>
void main()
{
	int  a,b,c;
	printf("Enter the value of side");
	scanf("%d%d%d",&a,&b,&c);
	switch(a+b>c && b+c>a && a+c>b)
	{
		case 1 :
			printf("Triangle is valid");
			break;
		case 0 :
			printf("Triangle not valid");
			break;
		default :
			printf("error");
			
	}
}
=======
//to check whether three side can form valid triangle
#include<stdio.h>
void main()
{
	int  a,b,c;
	printf("Enter the value of side");
	scanf("%d%d%d",&a,&b,&c);
	switch(a+b>c && b+c>a && a+c>b)
	{
		case 1 :
			printf("Triangle is valid");
			break;
		case 0 :
			printf("Triangle not valid");
			break;
		default :
			printf("error");
			
	}
}
>>>>>>> 7547e39c535205c73e3395442a0bb112a0d03976
