#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *data;
	int capacity;
	int size;
} ArrayList;

void list_initialize(ArrayList *array);
int list_get(ArrayList *array, int position);
int list_set(ArrayList *array, int position, int value);
void list_add(ArrayList *array, int position, int value);
int list_remove(ArrayList *array, int position);
void list_resize(ArrayList *array);
void free_list(ArrayList *array);
