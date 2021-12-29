#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
	int i, ret;

	for ( i=0; i<110; i++) {
		ret = push(i+1);
		if (ret) {
			printf("Failed to push\n");
			break;
		}
	}

	printf("Stack is %d tall\n", GetCount());

	return 0;
}

