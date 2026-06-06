// print grades of student by ladder if else
#include<stdio.h>
void main()
{
	float s1,s2,s3,s4,s5,marks;
	printf("Enter your marks in each subject:");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	marks=(s1+s2+s3+s4+s5)/5;
	printf("total percent: %f\n",marks);
	if(marks>=90 && marks<=100)
	{
		printf("Grade=A+");
	}
	else if(marks>=80 && marks<90)
	{
		printf("Grade=A");
	}
	else if(marks>=70 && marks<60)
	{
		printf("Grade=B+");
	}
	else if(marks>=60 && marks<50)
	{
		printf("Grade=B");
	}
	else
	{
		printf("Grade=C");
	}
}
