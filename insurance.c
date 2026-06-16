// to calculate a insurance premium category
#include<stdio.h>
void main()
{
	int age,choice;
	printf("Enter age");
	scanf("%d",&age);
	if(age<25)
	{
	choice=1;
    }
	else if(age>=25&&age<50)
	{
	choice=2;
    }
	else
	{
	choice=3;
    }
	switch(choice)
	{
	case 1 :
		printf("High Premium insurance");
		break;
	case 2 :
		printf("Medium premium insurance");
		break;
	case 3 :
		printf("Low Premium insurance");
	}
}
