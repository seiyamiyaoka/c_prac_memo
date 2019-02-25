#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"


int main(void) {
  int *p = malloc(sizeof(int));
  printf("%p\n", p);
  return 0;
}