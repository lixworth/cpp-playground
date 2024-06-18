//
// Created by Worth Lix on 2023/11/15 19:30.
//
#include <stdio.h>

int main() {
  int input;
  while (scanf("%d", &input) != EOF) {
    int tmp = input;
    int unit = 10;
    int max = 0;
    while (tmp > 0) {
      int a = input / unit;
      int b = input - a * unit;
      if (a == 0) {
        break;
      }
      tmp = input / unit;
      unit *= 10;
      int num = 0;
      int check = a + b;
      printf("%d+%d=%d\n", a, b, check);
      while (check != 0) {
        if (check % 10 == 0) {
          num++;
        } else {
          break;
        }
        check = check / 10;
      }
      if (num > max) {
        max = num;
      }
    }
    printf("%d\n", max);
  }
  return 0;
}