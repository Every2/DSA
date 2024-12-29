#include "../include/queue.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/param.h>


void init(Queue *self) {
    void *aux = malloc(sizeof(int));
    if (aux == NULL) {
        fprintf(stderr, "Can't allocate memory");
        exit(-1);
    }

    self->data = (int *) aux;
    self->capacity = 1;
    self->size = 0;
    self->start = 0;
}


bool enqueue(Queue *self, int value) {
    if (self->size + 1 > self->capacity)
        resize(self);

    self->data[(self->start + self->size) % self->capacity] = value;
    self->size++;
	return true;
}

int dequeue(Queue *self) {
    if (is_empty(self)) {
        fprintf(stderr, "Empty queue\n");
        return -1;
    }

    int aux;

    aux = self->data[self->start];
    self->start = (self->start + 1) % self->capacity;
    self->size--;

    if (self->capacity >= 3 * self->size)
        resize(self);

    return aux;
}

void resize(Queue *self) {
	int *aux = malloc(MAX(1, 2 * self->size) * sizeof *(self->data));

	for (int i = 0; i < self->size; i++)
		aux[i] = self->data[(self->start + i) % self->capacity]; 

	free(self->data);
	self->capacity = MAX(1, 2 * self->size);
	self->data = aux;
	self->start = 0;
}

bool is_empty(Queue *self) {
    return self->size == 0;
}

void free_queue(Queue *self) {
	free(self->data);
}

int get(Queue *self, unsigned int position) {
    if (position > self->size) {
        fprintf(stderr, "Invalid position\n");
        return -1;
    }

   return self->data[position];
}
