#include <stdio.h>

int main(void) {
  // char str[256];
  // FILE *file;
  // file = fopen("./test.txt", "w");
  // printf("名前を入力してください\n");
  // scanf("%s", str);
  // fprintf(file, "%s", str);
  // fclose(file);
  // int i;
  // FILE *file;
  // file = fopen("./test.txt", "r");
  // fscanf(file, "%s", &);
  // fclose(file);
  // printf("%d\n", i);
  char buf[3] = "abc";
  FILE *file;
  file = fopen("./test.dat", "wb");
  fwrite(&buf, sizeof(buf), 1, file);
  fclose(file);
  return 0;
}