#include "../include/stack.h"

int main() {
    Stack stack;

    init(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Stack with 3 elements\n");
    printf("%d\n", get(&stack, 0));
    printf("%d\n", get(&stack, 1));
    printf("%d\n", get(&stack, 2));

    printf("%d", pop(&stack));

    return 0;
}
