#include <stdio.h>

int counter(void);

int main(void) {
  // int array[100];
  // int narray[10] = {42, 79, 13};
  // array[9] = 100;
  // array[9]++;
  // counter();
  // counter();
  // counter();
  // printf("%d\n", array[9]);
  // int i;
  // int array[] = {1,2,3,5,6,7,8,10};
  // int ary_size = sizeof(array) / sizeof(array[0]);
  // for(i=0; i < ary_size; i++) {
  //   printf("%dに割り当てられている数は%dです\n", i, array[i]);
  // }

  int ary[] = {1,2,3,4,5,6,7,9};
  int size = sizeof(ary) / sizeof(ary[0]);
  int i;

  for (i=size; i >= 0; i--) {
    printf("%d\n", ary[i]);
  }
  return 0;
}

int counter(void) {
  static int count;
  count ++;
  printf("カウント数は%dです\n", count);
  return 0;
}
