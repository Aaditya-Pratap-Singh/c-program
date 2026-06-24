<<<<<<< HEAD
// to find a number is divisible by 2 but not 5
#include<stdio.h>
void main()
{
	int n;
	{
		printf("Enter a number");
		scanf("%d",&n);
		switch(n%2==0&&n%5!=0)
		{
			case 1 :
				printf("Number is divisible by 2 but not 5");
				break;
			case 0 :
				printf("number not divisible");
			    break;
			default :
				printf("Error");
		}
	}
}
=======
// to find a number is divisible by 2 but not 5
#include<stdio.h>
void main()
{
	int n;
	{
		printf("Enter a number");
		scanf("%d",&n);
		switch(n%2==0&&n%5!=0)
		{
			case 1 :
				printf("Number is divisible by 2 but not 5");
				break;
			case 0 :
				printf("number not divisible");
			    break;
			default :
				printf("Error");
		}
	}
}
>>>>>>> 7547e39c535205c73e3395442a0bb112a0d03976
