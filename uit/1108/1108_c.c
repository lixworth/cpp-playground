//
// Created by Worth Lix on 2023/11/8 19:32.
//
#include <stdio.h>

int main() {
  int x, y, z; // 浇水的成长值，施肥的成长值，果树成熟的成长值。
  scanf("%d%d%d", &x, &y, &z);
  int exp = 0;
  int day = 0;

  int already = 0;
  int ignore_day = 0;
  while (exp < z) {
    exp += x;
    if (ignore_day == 2) {
      already = 0;
    }
    if (already) {
      ignore_day++;
    } else {
      exp += y;
      already = 1;
      ignore_day = 0;
    }
    day++;
  }
  printf("%d", day);
  return 0;
}