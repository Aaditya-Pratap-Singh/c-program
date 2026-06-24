<<<<<<< HEAD
//pointers :
#include<stdio.h>
void main()
{
	int a=10,*p,**q;
	printf("Value of a=%d\n",a);
	printf("address of a=%u\n",&a);
	p=&a;
	printf("Value of p=%u\n",p);
	printf("Value of a using *p=%d\n",*p);
    printf("address of p=%u\n",&p);
	q=&p;
	printf("Value of q=%u\n",q);
	printf("Value of a using **Qs=%u\n",*q);
	printf("Value of a using **q=%d\n",**q);
	printf("address of q=%u\n",&q);
}
=======
//pointers :
#include<stdio.h>
void main()
{
	int a=10,*p,**q;
	printf("Value of a=%d\n",a);
	printf("address of a=%u\n",&a);
	p=&a;
	printf("Value of p=%u\n",p);
	printf("Value of a using *p=%d\n",*p);
    printf("address of p=%u\n",&p);
	q=&p;
	printf("Value of q=%u\n",q);
	printf("Value of a using **Qs=%u\n",*q);
	printf("Value of a using **q=%d\n",**q);
	printf("address of q=%u\n",&q);
}
>>>>>>> b102a9a18a250e69d41006b6ec740285a0e53433
