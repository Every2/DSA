#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *data;
	int capacity;
	int size;
} ArrayList;

void initialize(ArrayList *array);
int get(ArrayList *array, int position);
int set(ArrayList *array, int position, int value);
void add(ArrayList *array, int position, int value);
void resize(ArrayList *array);
