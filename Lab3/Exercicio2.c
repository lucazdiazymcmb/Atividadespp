#include <stdio.h>

int main() {
  int i;

  printf("Usando o for:\n");
  for (i = 1; i <= 100; i++) {
    printf("%d ", i);
  }

  printf("\nUsando o while:\n");
  i = 1;
  while (i <= 100) {
    printf("%d ", i);
    i++;
  }

  printf("\nUsando o do-while:\n");
  i = 1;
  do {
    printf("%d ", i);
    i++;
  } while (i <= 100);

  return 0;
}