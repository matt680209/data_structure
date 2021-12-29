#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

static struct stack *Top = NULL;

int push(int a)
{
	struct stack *temp;

	if (IsFull()) {
		printf("Stack is full, failed to push\n");
		return 1;
	}

	temp = (struct stack *) malloc(sizeof(struct stack)); 
	if ( temp == NULL ) {
		printf("Allocate memory failed\n");
		return 1;
	}

	temp->var = a;
	temp->next = Top;
	Top = temp;

	printf("Push %d to Top\n", temp->var);

	return 0;
}


int IsFull()
{
	int i = GetCount();
	if ( i >= STACK_MAX){
		printf("i = %d\n",i);
		return 1;
	}
	else
		return 0;
}

int IsEmpty()
{
	if ( Top == NULL)
		return 1;
	else 
		return 0;
}

int GetCount()
{
	struct stack *current = Top;
	int i = 0;

	if ( current == NULL)
		return 0;
	else
	{
		while ( current )
		{
			i++;
			current = current->next;
		}
	}

	return i;
}
