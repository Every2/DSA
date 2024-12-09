#include "../include/array_list.h"

int main() {
  ArrayList arr;

  list_initialize(&arr);

  for (int i = 0; i < 10; i++)
    list_add(&arr, i, i);

  printf("List add\n");
  for (int i = 0; i < 10; i++)
    printf("%d\n", list_get(&arr, i));

  printf("List remove\n");
  list_remove(&arr, 2);
  for (int i = 0; i < 9; i++)
    printf("%d\n", list_get(&arr, i));

  list_set(&arr, 0, 10);

  printf("Após setar o primeiro valor pra 10\n");
  for (int i = 0; i < 9; i++)
    printf("%d\n", list_get(&arr, i));

  free_list(&arr);
}
