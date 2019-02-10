#include <stdio.h>

int counter(void);
int other_counter(void);

int main(void) {
  counter();
  counter();
  counter();
  other_counter();
  return 0;
}

int counter(void) {
  static int count;
  count ++;
  printf("カウント数は%dです\n", count);
  return 0;
}

int other_counter(void) {
  printf(count);
  return 0;
}