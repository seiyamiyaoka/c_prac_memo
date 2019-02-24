#include <stdio.h>
#define EXCISETAX 0.08
#define PRINT_TMP printf("temp = %d\n", price)
#define PRITM(X) printf("%d\n", X)
#define TRAPEZOID(U, D, H) ((U + D) * H) * 0.5

int holdingOlympic(int year);

enum {
  WINTER,
  SUMMER,
  NO,
};


int main(void) {
  // int price;
  // printf("本体価格");
  // scanf("%d", &price);
  // price = (int)(((1+EXCISETAX) * price));
  // PRINT_TMP;
  // printf("税込価格は%d\n", price);
  // PRITM(price);
  // int up, down, height;
  // up=2;
  // down=5;
  // height=10;
  // int result = TRAPEZOID(up, down, height);
  // PRITM(result);
  enum Status status;
  int year;
  char str[4];
  scanf("%d", &year);
  printf("%s\n", holdingOlympic(year, str));
  // strcpy(str, status[holdingOlympic(year)]);
  // printf("オリンピックは%s\n", str);
  return 0;
}

char[] holdingOlympic(int year, char[4] *str) {
  int tmp = 2000 - year;
  int i;
  if (tmp < 1) tmp *= -1;
  i = tmp % 4;
  switch (i) {
    case WINTER:
      return "冬のオリンピックだよ";
    case SUMMER:
      return "夏のオリンピックだよ";
    default:
      return "やってないよ";
  }
}