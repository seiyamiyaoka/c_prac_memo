typedef struct {
  char name[256];
  int age;
  int sex;
  int next_flg;
} People;

void InputPeople(People *data);
/* 構造体はヘッダーに書くらしい */
