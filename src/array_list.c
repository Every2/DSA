#include "../include/array_list.h"

void initialize(ArrayList* array) {
	array->data = malloc(sizeof *(array->data));
	array->capacity = 1;
	array->size = 0;
}

int get(ArrayList* array, int position) {
	return  array->data[position];
}

int set(ArrayList* array, int position, int value) {
	int aux = array->data[position];
	array->data[position] = value;
	return aux;
}

void add(ArrayList* array, int position, int value) {
	if (array->size >= array->capacity) {
		resize(array);
	}

	for (int i = position; i < array->size - 1; i++)
		array->data[i + 1] = array->data[i];
	
	array->data[position] = value;
	array->size = array->size + 1;
}
