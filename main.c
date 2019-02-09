#include <stdio.h>
int main(void) {
  printf("intel:\tPentinum4\n");
  printf("AMD\t:Atlon64\n");
  printf("%d円\n%d円\n", 100, 500);
  int a = 100;
  int b = 200;
  printf("%d円+%d円=%d円\n", a, b, a+b);

  printf("%d/%d=%d...%d\n", 40, 13, 40 / 13, 40 % 13);
  return 0;
}