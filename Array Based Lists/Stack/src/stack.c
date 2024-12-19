#include "../include/stack.h"

void init(Stack* stack) {
	stack->size = 0;
}

void push(Stack *stack, int value) {
	if (is_full(stack)) {
		fprintf(stderr, "Can't add more elements");
		return;
	}

    stack->data[stack->size] = value;
	(stack->size)++;
}

int pop(Stack *stack) {
	if (is_empty(stack)) {
		fprintf(stderr, "Stack is empty");
		return -1;
	}
	
	int aux = stack->data[stack->size - 1];

	stack->size--;

	return aux;
}

bool is_empty(Stack *stack) {
	return stack->size == 0;
}

bool is_full(Stack *stack) {
	return stack->size == SIZE;
}

int get(Stack *array, unsigned int position) {
    if (position > SIZE) {
        fprintf(stderr, "Invalid position\n");
        return -1;
    }

    return array->data[position];
}
