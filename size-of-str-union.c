//union hetrogenous data
//size
#include<stdio.h>
struct employee
{
	int eid ;
	char ename[20];
	float esal ;
};
union employi

{
	int eid ;
	char ename[20];
	float esal ;
};
void main()
{
	int size;
	size=sizeof(struct employee);
	printf("Size structure =%d\n",size);
	size=sizeof(union employi);
	printf("Size union =%d\n ",size);
}
