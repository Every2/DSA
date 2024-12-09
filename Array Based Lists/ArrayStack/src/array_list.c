#include "../include/array_list.h"

void list_initialize(ArrayList* array) {
	array->data = malloc(sizeof *(array->data));
	array->capacity = 1;
	array->size = 0;
}

int list_get(ArrayList* array, int position) {
	return  array->data[position];
}

int list_set(ArrayList* array, int position, int value) {
	int aux = array->data[position];
	array->data[position] = value;
	return aux;
}

void list_add(ArrayList* array, int position, int value) {
	if (array->size >= array->capacity) {
		list_resize(array);
	}

	for (int i = position; i <= array->size - 1; i++)
		array->data[i + 1] = array->data[i];
	
	array->data[position] = value;
	(array->size)++;
}

int list_remove(ArrayList* array, int position) {
	int aux = array->data[position];

	for (int i = position; i <= array->size - 2; i++)
		array->data[i] = array->data[i + 1];

	(array->size)--;
	
	if (array->capacity >= (3 * array->size))
		list_resize(array);

	return aux;
}

void list_resize(ArrayList* array) {
	void *aux = realloc(array->data, 2 * array->size * sizeof *(array->data));
	if (aux == NULL) {
		printf("can't reallocate");
	} else {
		array->data = (int*) aux;
	};

	array->capacity = array->size * 2;
}

void free_list(ArrayList* array) {
	free(array->data);
}
