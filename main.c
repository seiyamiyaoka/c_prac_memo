#include <stdio.h>
#include <stdlib.h>
int calc_price(int viva, int milk) {
  return viva  + milk * 2;
}

int siguma(int min, int max) {
  return (min + max) * (max - min + 1) / 2;
}

int discount_value(int price, double value) {
  return (int)(price - (price * value));
}

void select_japanese_old_naming_year(int num) {
  switch(num) {
    case 1:
      printf("睦月\n");
      break;
    default:
      printf("1~12しか受け付けません\n");
  }
}

int main(void) {
  // printf("intel:\tPentinum4\n");
  // printf("AMD\t:Atlon64\n");
  // printf("%d円\n%d円\n", 100, 500);
  // // int a = 100;
  // // int b = 200;
  // // printf("%d円+%d円=%d円\n", a, b, a+b);

  // printf("%d/%d=%d...%d\n", 40, 13, 40 / 13, 40 % 13);
  // double c;
  // int d;
  // c = 1.08;
  // d = 500;

  // printf("%d\n", (int)(c * d));

  // int a = 10000, b = 500, c = 3;
  // printf("%05d\n", a);
  // printf("%05d\n", b);
  // printf("%05d\n", c);
  // int drinc_of_vivalege = 198;
  // int milk_price = 138;
  // int result = 1000 - (int)(calc_price(drinc_of_vivalege, milk_price) * 1.05);
  // printf("%d円\n", result);

  // int data;
  // scanf("%d", &data);
  // printf("%d\n", data);

  // double d_data;
  // scanf("%lf", &d_data);
  // printf("%f\n", d_data);


  // // int data1, data2;
  // int min, max;
  // // scanf("%d%d", &data1, &data2);
  // // printf("%d, %d\n", data1, data2);

  // printf("等差数列のmin, maxをカンマで区切ってれてね");

  // scanf("%d,%d", &min, &max);
  // int result_siguma = siguma(min, max);
  // printf("%d~%dの範囲では%d\n", min, max, result_siguma);
  // int price;
  // printf("定価となる値を入力してね\n");
  // scanf("%d", &price);
  // printf("1割引だと%d円\n", discount_value(price, 0.1));
  // printf("3割引だと%d円\n", discount_value(price, 0.3));
  // printf("5割引だと%d円\n", discount_value(price, 0.5));
  // printf("8割引だと%d円\n", discount_value(price, 0.8));

  // int num = 10;
  // if(num) {
  //   printf("%d\n", num);
  // }

  // int test_point;
  // printf("テストの点数を入れてね\n");
  // scanf("%d", &test_point);
  // if (test_point > 100) {
  //   printf("あなたの点数は100点です\n");
  // } else {
  //   printf("あなたの点数は%dです\n", test_point);
  // }

  // int year, tmp;
  // printf("西暦を入れるとオリンピックが開かれたとしかどうかわかります");
  // scanf("%d", &year);
  // tmp = year % 4;
  // if (tmp == 0) {
  //   int diff = abs(2000 - year);
  //   if ((diff / 4) % 2 == 0) {
  //     printf("夏に開催されています\n");
  //   } else {
  //     printf("冬に開催されています\n");
  //   }
  // } else {
  //   printf("開催されていません\n");
  // }

  // int age;
  // printf("年齢を入力してください");
  // scanf("%d", &age);
  // if (age <= 3) printf("無料です\n");
  // if (age >= 4 && age <= 12) printf("250円です\n");
  // if (age >= 13) printf("400円です\n");
  // int no;
  // printf("番号を1~2で入れてください");
  // scanf("%d", &no);
  // switch (no) {
  //   case 1:
  //     printf("のび太です\n");
  //     break;
  //   case 2:
  //     printf("tarou\n");
  //     break;
  //   default:
  //     printf("存在しません\n");
  // }
  // int num;
  // char result;
  // printf("1~12の数字を入れると日本の昔の月の呼び方を教えるよ");
  // scanf("%d", &num);
  // select_japanese_old_naming_year(num);

  // int i;
  // for(i=1; i <= 10; i++) printf("%d回続いたよ\n", i);
  int i, j;
  for(i=1; i <= 9; i++) {
    for(j=1; j <= 9; j++) {
      printf("%dかける%dは", i, j);
      printf("%2d\n", i * j);
    }
  }
  return 0;
}


