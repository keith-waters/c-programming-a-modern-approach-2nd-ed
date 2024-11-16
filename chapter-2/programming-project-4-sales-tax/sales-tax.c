#include <stdio.h>

int main(void) {
  float money;

  printf("Enter the dollars and cents: ");
  scanf("%f", &money);

  printf("With tax added: %.2f\n", money * 1.05);
  return 0;
}
