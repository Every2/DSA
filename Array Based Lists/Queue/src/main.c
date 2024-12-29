#include "../include/queue.h"
#include <stdio.h>

int main() {
	Queue q;
	init(&q);

	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);

	printf("%d\n", get(&q, 0));
    printf("%d\n", get(&q, 1));
    printf("%d\n", get(&q, 2));
	printf("%d\n", get(&q, 3));

	dequeue(&q);
	printf("%d\n", get(&q, 0));
    printf("%d\n", get(&q, 1));
    printf("%d\n", get(&q, 2));

	free_queue(&q);
}
