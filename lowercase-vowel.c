// to check a charactor is a lowercase vowel
#include<stdio.h>
void main()
{
	char a;
	printf("Enter an alphabet:");
	scanf("%c",&a);
	if(a=='a' || a=='e'||a=='i'||a=='o'||a=='u' )
	{
		printf("This is lowercase vowel");
	}
	else 
	{
		printf("Not a lowercase vowel");
	}
}
