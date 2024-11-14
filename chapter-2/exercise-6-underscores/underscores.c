#include <stdio.h>

int main(void) {
  int current_score = 2, current__score = 800;

  // why is it a bad idea for an identifier to contain more than 1 adjacent underscore?
  //
  // because it's confusing AF. I wrote this program to outline that and immediately confused one for another
  printf("Current score: %d or %d\n", current__score, current_score);

  return 0;
} 
