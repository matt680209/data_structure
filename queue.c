#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct queue *front = NULL, *rear = NULL;

int enqueue(int a)
{
	struct queue *new_queue = NULL;

	new_queue = (struct queue *) malloc(sizeof(struct queue));
	if (new_queue)
	{
		new_queue->next = NULL;
		new_queue->var = a;

		if (rear != NULL)
			rear->next = new_queue;

		rear = new_queue;

		if (front == NULL)
			front = new_queue;

		return 0;
	}
	else
		return 1;

}

int dequeue()
{
	struct queue *temp = NULL;
	int ret = 0;

	ret = IsEmpty();
	if (ret)
		return -1;
	else
	{
		temp = front;
		ret = temp->var;

		if ( front->next != NULL)
			front = front->next;
		else
		{	
			front = NULL;
			rear = NULL;
		}

		free(temp);
		return ret;
	}

}
int IsEmpty()
{
	if (front == NULL && rear == NULL)
		return 1;
	else 
		return 0;
}

void show()
{
	struct queue *temp = NULL;

	if ( !IsEmpty())
	{
		while (front)
		{
			temp = front;
			front = front->next;
			printf("data = %d\t", temp->var);
		}
	}
	else
		printf("Queue is empty\n");
}
