// to classify the person is child teenager , adult or senior citizen
#include<stdio.h>
void main()
{
	int age;
	printf("Where your age lies your age in between (1 to 13),(13 to 18),(18 to 50) and (50 to 80)");
	scanf("%d",&age);
	switch(age)
	{
		case 1 :
			printf("You are a child");
		break;
		case 2 :
			printf("You are teenager");
			break;
		case 3 :
			printf("you are an adult");
			break;
		case 4 :
			printf("You are senior citizen");
			break;
		default :
			printf("You are dead");
	}
}
