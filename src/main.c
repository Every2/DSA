#include "../include/array_list.h"

int main() {
	ArrayList *arr;
	initialize(arr);
	set(arr, 0, 10);
	printf("%d\n", get(arr, 0));
}
