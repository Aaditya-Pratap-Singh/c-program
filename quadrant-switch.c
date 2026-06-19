//to check the co-ordinate lies in which quadrant
#include<stdio.h>
void main()
{
	int x,y,choice;
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	if(x>0&&y>0)
	choice=1;
	else if(x<0&&y>0)
	choice=2;
	else if(x<0&&y<0)
	choice=3;
	else if(x>0&&y<0)
	choice=4;
	switch(choice)
	{
		case 1 :
			printf("First Quadrant");
			break;
		case 2 :
			printf("Second Quadrant");
			break;
		case 3 :
			printf("Third Quadrant");
			break;
		case 4 :
			printf("Forth Quadrant");
	}
}
