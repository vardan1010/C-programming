#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE],r=-1,f=-1;
char is_full();
char is_empty();
void enqueue(int);
void dequeue();
void display();

int main()
{	int choice,data;
	while(1)
	{

	printf("\nEnter \n1 for enqueue\n2 for dequeue\n 3 for display\n 4 for exit.");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter number to enqueue-");
			scanf("%d",&data);
			enqueue(data);
			printf("\n%d is enqueued into the queue.",data);
			break;
		case 2:
			dequeue();
			printf("\ndequeue successfull");
			break;
			
		case 3:
			printf("\nThe data in queue are-");
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\nError choice enterred.");
	}	
	}
 return 0;
}
char is_full()
{
	if(r==SIZE-1)
	{
		return 'T';
	}
	else
	return 'F';
}
char is_empty()
{
	if(r==-1&&f==-1)
	{
		return 'T';
	}
	else
	return 'F';
}

void enqueue(int d)
{
	if(is_full()=='T')
	{
		printf("\nQueue overflow");
	}
	else if(r==-1&&f==-1)
	{
		r=0;f=0;
		queue[r]=d;
		printf("\nEnqueue is successfull");
	}
	else
	{
		r++;
		queue[r]=d;
		printf("\nEnqueue is successfull");
	}
}
void dequeue()
{	int cons;
	if(is_empty()=='T')
	{
		printf("\nQueue underflow");
	}
	else if(r==f)
	{	cons=queue[r];
		r=-1;
		f=-1;
		printf("\nQueue is reseted as %d is dequeued.",cons);
	}
	else
	{
		cons=queue[f];
		f++;
		printf("\nDequeue is sucessfull...%d is dequeued",cons);
	}
}
void display()
{		int i;
	if(is_empty()=='T')
	{
		printf("\nStack underflow");
	}
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
}
