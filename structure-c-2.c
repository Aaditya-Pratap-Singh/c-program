 //structure in C using arrow operator
 #include<stdio.h>
 struct Employee
 {
 	int eid;
 	char ename[20];
 	float esal;
 };
void main()
{
	struct Employee e1,*e;
	printf("Enter the details of employee\n");
	printf("Enter employee i'd :");
	scanf("%d",&e1.eid);//not using dot operator , using ->
	printf("Enter employee name :");
	scanf("%s",&e1.ename);
	printf("Enter employee salary :");
	scanf("%f",&e1.esal);
	e=&e1;
	printf("Display the delatils of employee\n");
	printf("i'd = %d\n",e->eid);
	printf("name = %s\n",e->ename);
	printf("salary = %f\n",e->esal);
}
