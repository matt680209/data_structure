#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"

int main()
{
	int i, ret;


	for (i=0; i<110; i++) {
		//ret = push(i+1);
		ret = enqueue(i+1);
		if (ret) {
			//printf("Failed to push\n");
			printf("Failed to enqueue\n");
			break;
		}

		if (i%5 == 0)
			printf("i = %d, Dequeue vlue = %d\n", i, dequeue());
	}

	//printf("Stack is %d tall\n", GetCount());

	show();

	return 0;
}

