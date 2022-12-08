#include<stdio.h>
#include<stdlib.h>
int stack[100],ch=0,n;
int top=-1;
int i;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("enter size of stack [MAX-100]");
	scanf("%d",&n);
	
	printf("stack operation using array");
	while(ch!=4)
	{
		printf("\n \t--------------------- \n");
		printf("\n\t 1. push \n\t 2.pop \n\t 3.display \n\t 4.exit");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				exit(0);
			}
			default:
			{
				printf("enter a valid choice");
				break;
			
			}	
		}	
	}
}

void push()
{
	int item;
	printf("enter element to be inserted");
	scanf("%d",&item);
	if(top>=n)
	{
		printf(" \n stack overflow");
	}
	else
	{
		top=top+1;
		stack[top]=item;
		printf("element inserted");
	}	
}
void pop()
{
	if(top<=-1)
	{
		printf(" \n stack underflow occur");
		
	}
	else
	{
		printf("/n the popped element is %d",stack[top]);
		top=top-1;
		printf(" /n element is deleted");
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n stack elements are");
		for(i=top;i>=0;i--)
		{
			printf("%d \n\t",stack[i]);
		}
	}
	else
	{
		printf(" \n stack is empty");
	}
}

