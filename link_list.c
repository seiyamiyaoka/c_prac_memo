#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_list(void);

struct test_struct {
  int val;
  struct test_struct *next;
};

struct test_struct *head = NULL;
struct test_struct *curr = NULL;

struct test_struct* create_list(int val) {
  printf("\n creating list with headnode as [%d] \n", val);
  struct test_struct *ptr = (struct test_struct*)malloc(sizeof(struct test_struct));
  if(NULL == ptr) {
    printf("\n Node create faild");
    return NULL;
  }
  ptr->val = val;
  ptr->next = NULL;

  head = curr = ptr;
  return ptr;
}

struct test_struct* add_to_list(int val, bool add_to_end) {
  if(NULL == head) {
    return (create_list(val));
  }

  if(add_to_end) printf("\n Adding node to end of list with value [%d]\n", val);
  else printf("\n Adding node to biggining of list with value [%d]\n", val);
  struct test_struct *ptr = (struct test_struct*)malloc(sizeof(struct test_struct));
};


int main(void) {
  int i = 0, ret = 0;
  struct test_struct *ptr = NULL;

  print_list();

  for(i=4;i>0;i++) {
    add_to_list(i, true);
  }
}

void print_list(void) {
  struct test_struct *ptr = NULL;
  printf("\n ----Printing list Start------\n");
  while(ptr != NULL) {
    printf("\n [%d] \n", ptr->val);
    ptr = ptr->next;
  }
  printf("\n ----Printingg list end\n");
  return;
}