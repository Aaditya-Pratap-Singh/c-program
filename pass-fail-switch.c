//to check student is either pass fail or supply
#include<stdio.h>
void main()
{
	int marks,choice;
	printf("Enter your marks:");
	scanf("%d",&marks);
	if(marks>33)
	choice=1;
	else if(marks>25&&marks<33)
	choice=2;
	switch(choice)
	{
		case 1 :
		     printf("Congratulations,you have passed the exam");
		     break ;
		case 2 :
			printf("Supply , Work hard");
			break;
		default :
			printf("Gya Kaam Se,Fail");
	}
}
