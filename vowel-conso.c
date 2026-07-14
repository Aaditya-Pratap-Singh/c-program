// to check a charactor is vowel or consonant
#include<stdio.h>
void main()
{
	char alphabet;
	printf("Enter an alphabet");
	scanf("%c",&alphabet);
	if(alphabet=='a' && alphabet=='e' && alphabet=='i' && alphabet=='o' && alphabet=='u')
	{
		printf("An alphabet is a Vowel");
	}
	else
	{
		printf("An alphabet is a Consonant"); 
	}
}
