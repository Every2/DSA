#include "../include/deque.h"

int main() {
    Deque d;
    init(&d);

    add(&d, 0, 1);
    add(&d, 1, 2);
    add(&d, 2, 3);
    add(&d, 3, 4);

    printf("%d\n", get(&d, 0));
    printf("%d\n", get(&d, 1));
    printf("%d\n", get(&d, 2));
    printf("%d\n", get(&d, 3));

    printf("\n");
    deque_remove(&d, 3);
    printf("%d\n", get(&d, 0));
    printf("%d\n", get(&d, 1));
    printf("%d\n", get(&d, 2));
	get(&d, 3);
	printf("\n");

	set(&d, 3, 5);
}
