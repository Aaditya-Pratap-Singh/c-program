 //Multiple employe's details using array
 #include<stdio.h>
 struct Employee
 {
 	int eid;
 	char ename[20];
 	float esal;
 };
void main()
{
	struct Employee e1[5];
	int i;
	printf("Enter the details of employee\n");
	for(i=0;i<=5;i++)
	{
	   printf("Enter employee i'd :");
	   scanf("%d",&e1[i].eid);
	   getchar();
	   printf("Enter employee name :");
	   gets(e1[i].ename);
	   //scanf("%s",&e1[i].ename);
	   printf("Enter employee salary :");
	   scanf("%f",&e1[i].esal);
    }
	
	printf("Display the delatils of employee\n");
	for(i=0;i<=5;i++)
	{
	printf("i'd = %d\n",e1[i].eid);
	printf("name = %s\n",e1[i].ename);
	printf("salary = %f\n",e1[i].esal);
    }
}
