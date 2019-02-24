#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sum.h"



typedef struct {
  char name[256];
  int age;
  int sex;
  int next_flg;
} People;

void InputPeople(People *data);
void ShowPeople(People data);
int QuitManage(int num);

int main(void) {
  int i, count, datasize;
  People *data;
  datasize = 10;
  data = (People *)malloc(datasize);
  count = 0;

  while(1) {
    InputPeople(&data[count]);
    if(QuitManage(data[count].next_flg) == 0) {
      break;
      return 0;
    }
    count++;
    if(count >= datasize) {
      datasize += 10;
      data = (People *)realloc(data, datasize);
    }
  }

  for(i=0;i<count;i++) {
    ShowPeople(data[i]);
  }
  free(data);
  return 0;
}

void InputPeople(People *data) {
  printf("名前");
  scanf("%s", data->name);
  printf("年齢");
  scanf("%d", &data->age);
  printf("性別: 1=>男性, 2=>女性");
  scanf("%d", &data->sex);
  printf("処理を続けますか? 続ける場合 => 1 続けない場合 => 0\n");
  scanf("%d", &data->next_flg);
  printf("%d\n", sum(5, 10));
  printf("\n");
}

void ShowPeople(People data) {
  char sex[16];
  printf("名前は:%s\n", data.name);
  printf("年齢は:%d\n", data.age);

  if(data.sex == 1) {
    strcpy(sex, "男性");
  } else {
    strcpy(sex, "女性");
  }
  printf("性別:%s\n", sex);
  printf("\n");
}

int QuitManage(int num) {
  if (num > 0) return 1;
  return 0;
}