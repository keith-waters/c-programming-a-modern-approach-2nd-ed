#include <stdio.h>

int main(void) {
  int radius;

  printf("Enter the volume: ");
  scanf("%d", &radius);


  float volume = 4.0f/3.0f * 3.14 * radius * radius * radius;

  printf("Volume of sphere: %f\n", volume);

  return 0;
}
