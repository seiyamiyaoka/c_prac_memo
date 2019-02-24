#include <stdio.h>
#include <stdlib.h>

void checkHeap(int *heap);

int main() {
  int i;
  int new_i;
  int *heap;
  heap = (int *)malloc(sizeof(int) * 10);
  checkHeap(heap);
  // if(heap == NULL) exit(0);
  for(i=0;i<10;i++) {
    heap[i] = i;
  }
  printf("%d\n", heap[9]);

  heap = (int *)realloc(heap, (sizeof(int) * 20));
  checkHeap(heap);
  for(i=0;i<20;i++){
    heap[i] = i;
  }
  printf("%d\n", heap[11]);
  free(heap);
  return 0;
}
void checkHeap(int *heap) {
  if(heap == NULL) exit(0);
}