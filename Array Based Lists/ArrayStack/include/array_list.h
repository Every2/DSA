#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int *data;
	unsigned int capacity;
	unsigned int size;
} ArrayList;

void list_initialize(ArrayList *array);
int list_get(ArrayList *array, unsigned int position);
int list_set(ArrayList *array,  unsigned int position, int value);
void list_add(ArrayList *array, unsigned int position, int value);
int list_remove(ArrayList *array, unsigned int position);
void list_resize(ArrayList *array);
void free_list(ArrayList *array);
bool is_empty(ArrayList *array);
