// to check weather the no. id positive , negetive or zero
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
    {
	    printf("Number is positive");
    }
    else if(num==0)
    {
	    printf("Zero");
    }
    else
    {
    	printf("Number is negetive");
	}
}

