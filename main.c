#include <stdio.h>

int calc_price(int viva, int milk) {
  return viva  + milk * 2;
}

int siguma(int min, int max) {
  return (min + max) * (max - min + 1) / 2;
}

int discount_value(int price, double value) {
  return (int)(price - (price * value));
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
  int price;
  printf("定価となる値を入力してね\n");
  scanf("%d", &price);
  printf("1割引だと%d円\n", discount_value(price, 0.1));
  printf("3割引だと%d円\n", discount_value(price, 0.3));
  printf("5割引だと%d円\n", discount_value(price, 0.5));
  printf("8割引だと%d円\n", discount_value(price, 0.8));

  return 0;
}


