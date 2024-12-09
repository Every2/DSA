#include "../include/array_list.h"

void list_initialize(ArrayList *array) {
    void *aux = malloc(sizeof(int));
    if (aux == NULL) {
        fprintf(stderr, "Can't allocate memory");
        exit(-1);
    }

    array->data = (int *) aux;
    array->capacity = 1;
    array->size = 0;
}

int list_get(ArrayList *array, unsigned int position) {
    if (position > array->size) {
        fprintf(stderr, "Invalid position\n");
        return -1;
    }

    return array->data[position];
}

int list_set(ArrayList *array, unsigned int position, int value) {
    if (position > array->size) {
        fprintf(stderr, "Invalid position\n");
        return -1;
    }

    int aux = array->data[position];
    array->data[position] = value;
    return aux;
}

void list_add(ArrayList *array, unsigned int position, int value) {
    if (array->size >= array->capacity) {
        list_resize(array);
    }

    for (int i = position; i <= array->size - 1; i++)
        array->data[i + 1] = array->data[i];

    array->data[position] = value;
    (array->size)++;
}

int list_remove(ArrayList *array, unsigned int position) {
    if (is_empty(array)) {
        fprintf(stderr, "Empty array\n");
        return -1;
    }

    int aux = array->data[position];

    for (int i = position; i <= array->size - 2; i++)
        array->data[i] = array->data[i + 1];

    (array->size)--;

    if (array->capacity >= (3 * array->size))
        list_resize(array);

    return aux;
}

void list_resize(ArrayList *array) {
    void *aux = realloc(array->data, 2 * array->size * sizeof *(array->data));

    if (aux == NULL) {
        printf("can't reallocate");
        exit(-1);
    }

    array->data = (int *) aux;
    array->capacity = array->size * 2;
}

void free_list(ArrayList *array) {
    free(array->data);
}

bool is_empty(ArrayList *array) {
    return array->size == 0;
}
