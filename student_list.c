#include <stdio.h>

struct student {
  int num;
  char name[256];
  int mean;
};

// void setUser(struct )

int main(void) {
  struct student user;
  struct student users[4];
  char header[256] = "番号,名前,テストの平均点";
  int id[4] = { 1, 2, 3, 4 };
  char name[256] = { "のび太,静か,武,スネ夫"};
  int mean[4] = { 0, 90, 40 ,70};

  FILE *file;
  file = fopen("student.csv", "a");
  fprintf(file, "%s", header);
  fprintf(file, "%d", *id);
  fprintf(file, "%s", name);
  fprintf(file, "%d", *mean);
  fclose(file);
  printf("%s\n", header);
  return 0;
}