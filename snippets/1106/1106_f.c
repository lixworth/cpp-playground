//
// Created by Worth Lix on 2023/11/6 20:23.
//
#include <stdio.h>

int main() {
  int n, x, y;
  scanf("%d %d %d", &n, &x, &y);
  int max = x > y ? y : x;
  int min = 0;

  if (x + y < n) {
    min = 0;
  } else {
    int c = (n-x) > (n-y) ? (n-x) : n-y;
    min = x > y ? x-c : y-c;
  }
  printf("%d %d", max, min);
  return 0;
}