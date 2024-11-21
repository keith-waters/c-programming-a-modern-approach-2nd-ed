#include <stdio.h>

int main(void) {
  int mm, dd, yyyy;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d\n", &mm, &dd, &yyyy);

  printf("%d%d%d\n", yyyy, mm, dd);

  return 0;
}
