#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int counter(void);

void func(int *pvalue);
int ary_averave(int ary[]);
void maximin(int ary[], int min, int max);

int main(void) {
  // int array[100];
  // int narray[10] = {42, 79, 13};
  // array[9] = 100;
  // array[9]++;
  // counter();
  // counter();
  // counter()
  // printf("%d\n", array[9]);
  // int i;
  // int array[] = {1,2,3,5,6,7,8,10};
  // int ary_size = sizeof(array) / sizeof(array[0]);
  // for(i=0; i < ary_size; i++) {
  //   printf("%dに割り当てられている数は%dです\n", i, array[i]);
  // }

  // int ary[] = {1,2,3,4,5,6,7,9};
  // int size = sizeof(ary) / sizeof(ary[0]);
  // int i;

  // for (i=size; i >= 0; i--) {
  //   printf("%d\n", ary[i]);
  // }
  // char word;
  // word = 'a';
  // printf("%c\n",word);
  // char c = '8';
  // int num = c - '0';
  // printf("%d\n", num);
  // char c = '4';

  // int num;
  // if(c >= '0' && c <= '9') {
  //   num = c - '0';
  // } else {
  //   num = 0;
  // }
  // printf("%d\n", num);

  // char str[6] = {'m', 'a', 'r', 'i', 'o', '\0'};
  // printf("%s\n", str);
  // char str[] = "145";
  // int nums = atoi(str);
  // printf("%d\n", nums);
  // char str[10];
  // printf("%s\n", str);
  // char str1[] = "marin", str2[10];
  // strncpy(str2, str1, 3);
  // str2[3] = '\0';
  // printf("%s\n", str2);
  // char str[] = "seiyamiyaoka";
  // char str2[] = "ehimememe";
  // strcat(str, str2);
  // str2[typeof(str)] = "\0";
  // printf("%s\n", str);
  // char str[16];
  // char str1[12] = "dragon";
  // char str2[] = "quest";
  // char i[] = "3";
  // sprintf(str, "%s%s%s\n", str1, str2, i);
  // printf(str);
  // char str[32];
  // do {
  //   scanf("%s", str);
  // } while(sizeof(str) > 2);
  // printf("%s\n", str);
  // int i;
  // char str[256];
  // scanf("%s", str);
  // for(i=0;str[i]!='\0';i++);
  // printf("文字数は%dです\n", i);

  // int len,i;
  // char str1[256], str2[] = "DRAGONQUEST";

  // scanf("%s", str1);
  // len = strlen(str2);

  // printf("%s\n", str2);


  // for(i=0;str1[i] == str2[i]; i++);
  // if(i==len+1) {
  //   printf("同じだよ\n");
  // } else {
  //   printf("違うよ\n");
  // }

  // char str1[256], str2[256];
  // printf("名字を入れてください\n");
  // scanf("%s", str1);
  // printf("名前を入れてください\n");
  // scanf("%s", str2);
  // strcat(str1, str2);
  // printf("%s\n", str1);
  // int i;
  // int j;
  // i = 2147483647;
  // printf("%p\n", &i);
  // printf("%p\n", &j);
  // char str[256];
  // scanf("%s", str);
  // // strをそのまま渡すのもstrの先頭のアドレスを渡すのも同じ
  // printf("%s\n", &str[0]);
  // int *p;
  // int i;
  // p = &i;
  // printf("%p\n", p);
  // int *p;
  // int i;
  // p = &i;
  // *p = 100;
  // printf("%d\n", p);
  // int value = 10;
  // func(&value);
  // printf("%d\n", value);
  // int ary[5] = {1,2,3,4,5};
  // printf("%d\n", ary_averave(ary));
  // int *data;
  // int i,average = 0, array[10] = {15,78,98,15,98,85,17,35,42,15};
  // data = array;
  // for(i=0;i<10;i++) {
  //   // ポインタ変数に配列のインデックスを足して演算している
  //   average += *(data + i);
  // }
  // printf("%d\n", average / 10);
  // intの*dataポインタ型を宣言
  // int *data;
  // int average = 0, array[10] = {15,78,98,15,98,85,17,35,42,15};
  // // ポインタ変数dataにarrayの先頭のアドレスを代入。arrayは終端に達成するまでルーrぷ
  // for(data=array;data!=&array[10]; data++) {
  //   // dataは更新されているのでポインタでアクセス可能
  //   average += *data;
  // }
  // printf("%d\n", average / 10);
  int ary[10];
  int i = 0, min, max;
  do {
    printf("0~100の値を入れたら最小と最大を出すよ\n");
    scanf("%d", &ary[i]);
    i++;
  } while(ary[i-1] != -1);
  maximin(ary, &min, &max);
  printf("最大値 %d : 最小値 %d\n",max,min);
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
void maximin(int ary[], int min, int max) {
  int i = 0;
  *max = 0;
  *min = 0;
  while(ary[i] != -1) {
    if(ary[i] > max) max = ary[i];
    if(ary[i] < min) min = ary[i];
    i++;
  }
}
void func(int *pvalue) {
  *pvalue = 100;
  return;
}
int counter(void) {
  static int count;
  count ++;
  printf("カウント数は%dです\n", count);
  return 0;
}
