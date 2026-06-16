// calculator using switch case(menu driven programming)
#include<stdio.h>
void main()
{
	char choice;
	float a,b;
	printf("----------------------------\n");
	printf("Enter + to add numbers\n");
	printf("Enter - to sub numbers\n");
	printf("Enter * to multiply numbers\n");
	printf("Enter / to divide numbers\n");
	printf("----------------------------\n");
	printf("Enter a choice  :");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("sum= %f\n",a+b);
			break;
		case '-' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("sub= %f\n",a-b);
			break;
		case '*' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("multi= %f\n",a*b);
			break;
		case '/' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("div= %f\n",a/b);
			break;
		default :
		    printf("Invalid choice");
	}
}
