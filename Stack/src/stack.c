#include "../include/stack.h"

#include <stdio.h>
#include <stdlib.h>

void push(Stack *self, int value) {
    if (self->size != self->capacity) {
        self->data[self->size] = value;
        self->size++;
    } else {
        fprintf(stderr, "Stack is full\n");
    }
}

int pop(Stack *self) {
    if (self->size != 0) {
        int tmp = self->data[self->size - 1];
        self->size--;
        return tmp;
    } else {
        fprintf(stderr, "Stack is empty\n");
        exit(EXIT_FAILURE);
    }
}
