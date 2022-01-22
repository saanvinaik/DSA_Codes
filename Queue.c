#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int queue[5];
int front=0;
int rear=-1;

void enqueue();
void dequeue();
void display();


int main()
{
	int ch;
	while(1)
	{
		
		printf("\n***Queue Operation***");
		printf("\n 1. Enqueue");
		printf("\n 2. Dequeue");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		
		printf("\n Enter choice from 1-4 = ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				enqueue();
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

void enqueue()  //inserting element into queue
{
	int x;
	if(rear==4)
	{
		printf("\nQueue Overflow");
	}
	else
	{
		printf("\nEnter element to be inserted : ");
				scanf("%d",&x);
		rear++;
		queue[rear]=x;
	}
	
}

void dequeue()  //deleting element from queue
{
	if(front>rear)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		printf("\n Element is deleted",queue[front++]);
	}
}
 
void display()  //displaying elements of queue
{
	if(front>rear)
	{
		printf("Queue is Empty");
	}
	else
	{
		printf("Queue Elements are : ");
		for(int i=front;i<=rear;i++)
		printf("%d",queue[i]);
	}
}
