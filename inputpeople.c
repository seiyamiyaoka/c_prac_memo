// #include "inputpeople.h"

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