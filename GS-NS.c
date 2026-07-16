//to calculate GS and Ns 
#include<stdio.h>
void main()
{
	float BS, DA,PF,TA,GS,NS;
	printf("enter the value of BS");
	scanf("%f",&BS);
	TA=(BS*10)/100;
	DA=(BS*5)/100; 
	PF=(BS*7.8)/100;  
	GS= BS+TA+DA;
	NS= GS-PF;
	printf("the value of GS is :%f\n",GS);
	printf("the value of NS is :%f\n",NS);
}
