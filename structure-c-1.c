 //structure in C
 #include<stdio.h>
 struct Employee//keyword+name
 {
 	int eid;
 	char ename[20];
 	float esal;
 };
void main()
{
	struct Employee e1;
	printf("Enter the details of employee\n");
	printf("Enter employee i'd :");
	scanf("%d",&e1.eid);// . bcz we are not using pointers
	printf("Enter employee name :");
	scanf("%s",&e1.ename);
	printf("Enter employee salary :");
	scanf("%f",&e1.esal);
	printf("Display the delatils of employee\n");
	printf("i'd = %d\n",e1.eid);
	printf("name = %s\n",e1.ename);
	printf("salary = %f\n",e1.esal);
}
