<<<<<<< HEAD
//functions: with arguement and no return value
//swapping using call by value
#include<stdio.h>
void swapp(int,int);
void swapp(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping the value of a in function defination=%d\n",a);
	printf("after swapping the value of b in function defination=%d\n",b);
}
void main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("Before swapping the value of a in main=%d\n",a);
	printf("Before swapping the value of b in main=%d\n",b);
	swapp(a,b);
	printf("after swapping the value of a in main=%d\n",a);
	printf("after swapping the value of b in main=%d\n",b);
}
=======
//functions: with arguement and no return value
//swapping using call by value
#include<stdio.h>
void swapp(int,int);
void swapp(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping the value of a in function defination=%d\n",a);
	printf("after swapping the value of b in function defination=%d\n",b);
}
void main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("Before swapping the value of a in main=%d\n",a);
	printf("Before swapping the value of b in main=%d\n",b);
	swapp(a,b);
	printf("after swapping the value of a in main=%d\n",a);
	printf("after swapping the value of b in main=%d\n",b);
}
>>>>>>> b102a9a18a250e69d41006b6ec740285a0e53433
