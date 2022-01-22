#include<conio.h>
#include<stdio.h>

int stack[5];
int top=-1;

void push();
void pop();
void display();
void exit();


int main()
{
	int ch;
	while(1)
	{
		
		printf("\n***Stack Operation***");
		printf("\n 1. Push\n 2. Pop\n 3. Display\n 4. Exit");
		printf("\n Enter choice from 1-4 = ");
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
			{	display();
				break;
			}
			case 4:
			{	exit();
				break;
			}
			default:
			{
				printf("Invalid Input !!!");
				break;
			}
		}
	}
}


void push()  //pushing element into the stack 
{
    int x;
	if(top==4)
	{
		printf("\nStack is full");
	}
	else
	{
		printf ("\nEnter element to push:");
		scanf ("%d", &x);
		top++;
		stack[top]=x;
	}
}   

void pop()  //popping element from the stack 
{
	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\n %d element is popped",stack[top--]);
	}
}


void display()   //displaying elements of stack
{
	if(top==-1)
	{
		printf(" Stack is Empty");
	}
	else
	{
		printf(" Stack Elements are : ");
		for(int i=top;i>=0;i--)
		printf("\n%d",stack[i]);
	}
}

void exit() 
{
}




