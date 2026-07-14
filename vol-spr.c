//to find the volume of sphere
#include<stdio.h>
#define pi 3.14
void main()
{
	float r,volume;
	printf("enter radius :");
	scanf("%f",&r); 
	volume = (4*pi*r*r*r)/3;
	printf("volume of sphere= %f",volume);
}
