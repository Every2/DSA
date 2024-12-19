#pragma once

#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

typedef struct {
    int data[SIZE];
	unsigned int size;
} Stack;

void init(Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);
bool is_empty(Stack* stack);
bool is_full(Stack *stack);
int get(Stack *array, unsigned int position);
