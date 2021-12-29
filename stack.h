#ifndef STACK_H
#define STACK_H

#define STACK_MAX 100

int push(int a);
int pop();
int IsFull();
int IsEmpty();
int GetCount();

struct stack {
	int var;
	struct stack *next;
};
#endif
