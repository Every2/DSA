typedef struct {
    int *data;
    unsigned int size;
    unsigned int capacity;
} Stack;

void push(Stack *self, int value);
int pop(Stack *self);
