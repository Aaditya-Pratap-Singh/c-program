//to check the charactor is uppercase or lower case
#include<stdio.h>
void main()
{
	char alpha;
	printf("Enter an alphabet :");
	scanf("%c",&alpha);
	if (alpha>=65 && alpha<=90)
	{
		printf("Alphabet is Uppercase");
	}
	else
	{
		printf("Alphabet is Lowercase");
	}
}
