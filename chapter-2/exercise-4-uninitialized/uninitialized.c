#include <stdio.h>

int main(void) {
  int a, b, c;
  float x, y, z;

  printf("Uninitialized ints: \n %d \n %d \n %d \n", a, b, c);
  printf("Uninitialized floats: \n %f \n %f \n %f \n", x, y, z);

  return 0;
}
