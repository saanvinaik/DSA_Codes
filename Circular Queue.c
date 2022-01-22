#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int queue[5];
int front=-1;
int rear=-1;

void enqueue(int);
void dequeue();
void display();


int main()
{
	int ch;
	int n1;
	while(1)
	{
		
		printf("\n***Queue Operation***");
		printf("\n 1. Enqueue");
		printf("\n 2. Dequeue");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		
		printf("\n Enter choice from 1-4 : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter element to be inserted: ");
				scanf("%d",&n1);
				enqueue(n1);
				break;
			}
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{	display();
				break;
			}
			case 4:
			{	exit(1);
				break;
			}
			default:
			{
				printf("Invalid input !!!");
				break;
			}
		}
	}
}

void enqueue(int x)      //inserting element into circular queue
{
	if(front==0 && rear==4 || front==rear+1)
	{
		printf("\nQueue Overflow");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear=(rear+1)%5;
		}
		//rear=(rear+1)%5;
		queue[rear]=x;
		printf("\n front = %d and rear = %d ", front, rear);
	}
	
}


void dequeue()   //deleting element from circular queue
{
	if(front==-1 && rear==-1)
	{
		printf("\nQueue Underflow\n");
	}
	else if(rear==front)
	{
		printf("\n %d is deleted", queue[front]);
		rear=-1;
		front=-1;
	}
	else
	{
		printf("\n element %d is dequeued",queue[front]);
		front=(front+1)%5;
	}
}

void display()   //displaying elements of  circular queue
{
	int i = front;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Queue Elements are : ");
		while(i<=rear)
		{
		printf("%d ",queue[i]);
		i=(i+1)%5;
	    }
	}
}
