//
// Created by Worth Lix on 2023/11/15 19:25.
//
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  if (n <= 0) {
    printf("None");
  } else if (n == 1) {
    printf("XiZhiTang");
  } else if (n == 2) {
    printf("YingHuaTang");
  } else {
    printf("BigBoLang");
  }
  return 0;
}