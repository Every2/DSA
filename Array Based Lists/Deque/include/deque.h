#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/param.h>

typedef struct {
	int *data;
	unsigned int capacity;
	unsigned int size;
	unsigned int start;
} Deque;

void init(Deque *self);
int get(Deque *self, unsigned int position);
int set(Deque *self, unsigned int position, int value);
void add(Deque *self, unsigned int position, int value);
int deque_remove(Deque *self, unsigned int position);
void resize(Deque *self);
bool is_full(Deque *self);
