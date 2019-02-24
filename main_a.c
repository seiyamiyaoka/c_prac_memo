#include <stdio.h>
#include <string.h>
#include "inputpeople.h"
#include "show_people.h"

int main(void) {
  People data;
  InputPeople(&data);
  ShowPeople(data);
  printf("%d\n", 1);
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
  printf("\n");
}

void ShowPeople(People data)
{
    char sex[16];

    printf("名前:%s\n",data.name);
    printf("年齢:%d\n",data.age);

    if (data.sex == 1) {
        strcpy(sex,"男性");
    } else {
        strcpy(sex,"女性");
    }

    printf("性別:%s\n",sex);
    printf("\n");
}