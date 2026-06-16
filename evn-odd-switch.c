// switch case : Even or Odd
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	
	switch(n%2)// 0 or 1 remainder
	{
		case 0 :
			printf("Number is even");
			break ;
		case 1 :
			printf("Number is Odd");
			break ;
	}
}
