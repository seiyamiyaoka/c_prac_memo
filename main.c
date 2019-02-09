#include <stdio.h>

int calc_price(int viva, int milk) {
  return viva  + milk * 2;
}
int main(void) {
  printf("intel:\tPentinum4\n");
  printf("AMD\t:Atlon64\n");
  printf("%d円\n%d円\n", 100, 500);
  // int a = 100;
  // int b = 200;
  // printf("%d円+%d円=%d円\n", a, b, a+b);

  printf("%d/%d=%d...%d\n", 40, 13, 40 / 13, 40 % 13);
  // double c;
  // int d;
  // c = 1.08;
  // d = 500;

  // printf("%d\n", (int)(c * d));

  // int a = 10000, b = 500, c = 3;
  // printf("%05d\n", a);
  // printf("%05d\n", b);
  // printf("%05d\n", c);
  int drinc_of_vivalege = 198;
  int milk_price = 138;
  int result = 1000 - (int)(calc_price(drinc_of_vivalege, milk_price) * 1.05);
  printf("%d円\n", result);
  return 0;
}

