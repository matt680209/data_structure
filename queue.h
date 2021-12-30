#ifndef QUEUE_H
#define QUEUE_H

struct queue {
	int var;
	struct queue *next;
};

struct queue *front, *rear;

int enqueue(int a);
int dequeue();
int IsEmpty();
void show();

#endif
