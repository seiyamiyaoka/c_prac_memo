#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char name[256];
} user;

int main() {
  struct user;
  strcpy(&user.name, "jiro")
  printf("%s\n", user.name);
}