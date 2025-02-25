#include "../include/deque.h"

void init(Deque *self) {
    void *aux = malloc(sizeof(int));
    if (aux == NULL) {
        fprintf(stderr, "Can't allocate memory");
        exit(-1);
    }

    self->data = (int *) aux;
    self->capacity = 1;
    self->size = 0;
    self->start = 0;
}

int get(Deque *self, unsigned int position) {
    if (position >= self->size) {
        fprintf(stderr, "Invalid position\n");
		return -1;
    }
	
    return self->data[(position + self->start) % self->capacity];
}

int set(Deque *self, unsigned int position, int value) {
	if (position >= self->size) {
        fprintf(stderr, "Invalid position\n");
		return -1;
    }
	
    int y = get(self, position);
    self->data[(position + self->start) % self->capacity] = value;
    return y;
}

void add(Deque *self, unsigned int position, int value) {
    if (is_full(self))
        resize(self);

    if (position < self->size / 2) {
        self->start = (self->start - 1) % self->capacity;
        for (int i = (int) position - 1; i >= 0; i--)
            self->data[(self->start + i) % self->capacity] = self->data[(self->start + i + 1) % self->capacity];
    } else
        for (int i = self->size; i > (int) position; i--)
            self->data[(self->start + i) % self->capacity] = self->data[(self->start + i - 1) % self->capacity];

    self->data[(self->start + (int) position) % self->capacity] = value;
    self->size++;
}

int deque_remove(Deque *self, unsigned int position) {
    int x = self->data[(self->start + position) % self->capacity];

    if (position < self->size / 2) {
        for (int i = position; i >= 0; i--)
            self->data[(self->start + i) % self->capacity] = self->data[(self->start + i - 1) % self->capacity];
        self->start = (self->start + 1) % self->capacity;
    } else
        for (int i = position; i <= (int) self->size - 2; i++)
            self->data[(self->start + i) % self->capacity] = self->data[(self->start + i + 1) % self->capacity];

    self->size--;

    if (self->capacity >= self->size * 3)
        resize(self);

    return x;
}

void resize(Deque *self) {
    int *aux = malloc(MAX(1, 2 * self->size) * sizeof *(self->data));

    for (int i = 0; i < (int) self->size; i++)
        aux[i] = self->data[(self->start + i) % self->capacity];

    free(self->data);
    self->capacity = MAX(1, 2 * self->size);
    self->data = aux;
    self->start = 0;
};


bool is_full(Deque *self) {
    return self->size == self->capacity;
}
