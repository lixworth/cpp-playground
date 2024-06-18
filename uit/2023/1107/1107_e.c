//
// Created by Worth Lix on 2023/11/7 19:02.
//
#include <stdio.h>

int main() {
  int input[10000] = {},index = 0;
  while ((input[index] = getchar()) != EOF) {
    index++;
  }
  for (int i = 0; i < index-4; ++i) {
    printf("%c",input[i]);
  }
  return 0;
}