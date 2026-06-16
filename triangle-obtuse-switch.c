//to check the angle is acute obtuse rightangle or straight
#include<stdio.h>
void main()
{
	int angle,choice;
	printf("Enter the value of angle :");
	scanf("%d",&angle);
	if(angle==90)
	choice=1;
	else if(angle>90)
	choice=2;
	else if(angle<90)
	choice=3;
	else if(angle==180)
	choice=4;
	switch(choice)
	{
		case 1 :
			printf("Right-Angle triangle");
			break;
		case 2 :
			printf("Obtuse triangle");
			break;
		case 3 :
			printf("Acute triangle");
			break;
		case 4 :
			printf("Straight triangle");
			break;
	}
}
