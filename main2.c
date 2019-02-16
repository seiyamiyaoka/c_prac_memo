#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int counter(void);

void func(int *pvalue);
int ary_averave(int ary[]);
void maximin(int ary[], int min, int max);

typedef struct student {
  int year;
  int clas;
  int number;
  char name[64];
  double stature;
  double weight;
} tarou;

struct user {
  char name[64];
  int age;
  char sex[3];
};

void student_print(struct student data);

void student_report(struct student *data);
void create_user(struct user *data, char name[3], int age);

void student_print(struct student data) {
  printf("%s\n", data.name);
  return;
}

void student_report(struct student *data) {
  strcpy(data->name, "ooo");
  printf("%s\n", data->name);
}

void create_user(struct user *data, char name[3], int age) {
  strcpy(data->name, name);
  data->age = age;
  return;
}
int main(void) {
  // struct student data;
  // strcpy(data.name, "tarou");
  // student_print(data);
  // struct student data;
  // // struct student *pdata;
  // // pdata = &data;
  // // (*pdata).name = "tarou";
  // strcpy(data.name, "yohho");
  // // strcpy((*pdata).name, "jirou");
  // printf("%s\n", data.name);
  // student_report(&data);
  // printf("%s\n", data.name);
  // printf("%s\n", pdata->name);
  struct user empolyee;
  struct user empolyees[3];
  char name[3];
  int age;
  int i;
  char sex[3];
  int start = 1;
  int end = 3;

  while (start <= end) {
    printf("%d人目の登録です\n", start);
    printf("名前を入力して\n");
    scanf("%s", name);
    printf("年齢を入力して\n");
    scanf("%d", &age);
    create_user(&empolyee, name, age);
    empolyees[start-1] = empolyee;
    start++;
  }
  for(i=0;i<3;i++) {
    printf("名前は%s\n", empolyees[i].name);
  }

  return 0;
}

int ary_averave(int ary[]) {
  int i,len,result =0;
  len = 10;
  for(i=0;i<len;i++) {
    result += ary[i];
  }
  printf("%d\n", result);
  return result / len;
}
// void maximin(int ary[], int min, int max) {
//   int i = 0;
//   *max = 0;
//   *min = 0;
//   while(ary[i] != -1) {
//     if(ary[i] > max) max = ary[i];
//     if(ary[i] < min) min = ary[i];
//     i++;
//   }
// }
// void func(int *pvalue) {
//   *pvalue = 100;
//   return;
// }
// int counter(void) {
//   static int count;
//   count ++;
//   printf("カウント数は%dです\n", count);
//   return 0;
// }
