// to check a number is divisible by bot 4 and 6
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number ");
	scanf("%d",&n);
	switch(n%12)
	{
		case 0 :
			printf("Number is divisible by both");
			break;
		case 1 :
			printf("Number is not divisible");
			break;
		default :
			printf("Something went wrong");
	}
}
