#include <stdio.h>

int main(void) {
  // Exercise 1
  // what will these print?
  printf("|%6d,%4d|\n", 86, 1040); // 000086,1040
  printf("|%12.5e|\n", 30.253); // |000030.25300| not the "|"
  printf("|%.4f|\n", 83.162); // 83.1620
  printf("|%-6.2g|\n", .0000009979); // |.00     |
  // what it actually prints after putting in the "|"
  // |    86,1040|
  // | 3.02530e+01|
  // |83.1620|
  // |1e-06 |
  
  
  
  // Exercise 2
  // (a) Exponential notation; left-justified in a field of size 8: one digit after the decimal point.
  printf("|%-8.1e|\n", 0.1);
  // (b) Exponential notation; right-justified in a field of size 10; six digits after Lhe decimal point.
  printf("|%10.6e|\n", 0.1);
  // (c) Fixed decimal notation; left-justified in a field of.size 8; three digits after the decimal point.
  printf("|%-8.3d|\n", 1);
  // (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
  printf("|%6d|\n", 1);


  return 0;
}
