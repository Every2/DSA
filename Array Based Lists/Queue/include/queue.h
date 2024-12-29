#include <stdbool.h>

typedef struct {
	int *data;
	unsigned int capacity;
	unsigned int size;
	unsigned int start;
} Queue;

void init(Queue *self);
bool enqueue(Queue *self, int value);
int dequeue(Queue *self);
void resize(Queue *self);
bool is_empty(Queue *self);
void free_queue(Queue *self);
int get(Queue *self, unsigned int position);
