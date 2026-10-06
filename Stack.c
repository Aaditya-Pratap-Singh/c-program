//Stack implementation using array
#include<stdio.h>
int stack[10];
int  top=0;
int upperBound=9;
int size=0;
void push(int num)
{
	int i;
	if(size==upperBound+1)
	{
		return;//stack full
	}
	i=size;
	while(i>top)
	{
		stack[i]=stack[i-1];
		i--;
	}
	stack[top]=num;
	size++;
}
int pop()
{
	int i,num;
	if(size==0)
	{
		return 0;//stack empty
	}
	num=stack[top];
	i=top;
	while(i<size-1)
	{
		stack[i]=stack[i+1];
		i++;
	}
	size--;
	return num;
}
int isEmpty()
{
	return size==0;//1
}
int isFull()
{
	return size==upperBound+1;
}
int main()
{
	int ch,num;
	printf("1.Push A Number On Stack\n");
	printf("2.POP A Number From Stack\n");
	printf("3.Exit\n");
	printf("Enter A Choice :");
	scanf("%d",&ch);
	while(1)
	{
	if(ch==1)
	{
		if(isF ull())
		{
			printf("Error! Stack is Full\n");
		}
		else
		{
			printf("Enter Number to Push on Stack :");
			scanf("%d",&num);
			if(num==0)
			{
				printf("Error! Zero cannot be pushed on stack\n");
			}
			else
			{
				push(num);
				printf("%d Pushed on stack\n",num);
			}
		}
	}
	if(ch==2)
	{
		if(isEmpty())
		{
			printf("Error! Stack is Empty\n");
		}
		else
		{
			num=pop();
			printf("%d Popped from Stack\n",num);
		}
	}
	if(ch==3)
	{
		break;
	}
	}
	return 0;
}
