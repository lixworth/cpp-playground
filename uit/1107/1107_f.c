//
// Created by Worth Lix on 2023/11/7 19:02.
//
#include <stdio.h>

int main() {
  int n, m, k;
  scanf("%d%d%d\n", &n, &m, &k);
  int data[1000000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d", &data[i]);
  }

  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (data[j] > data[j + 1]) {
        int tmp = data[j + 1];
        data[j + 1] = data[j];
        data[j] = tmp;
      }
    }
  }

  int input;
  int first = 1;
  while (scanf("%d", &input) != EOF) { // 1 1
    if (first) {
      if (input == 2) {
        printf("%d\n", data[k - 1] ? data[k - 1] : -1);
        first = 1;
      } else {
        first = 0;
      }
    } else {
      for (int i = 0; i < n; ++i) {
        if (input >= data[i] && input < data[i + 1]) {
          for (int j = n; j < i + 1; j--) {
            data[j] = data[j - 1];
          }
          data[i + 1] = input;
          break;
        }
      }
      for (int i = 0; i < n; ++i) {
        printf("[%d]", data[i]);
      }
      printf("\n");
      first = 1;
    }
  }
  return 0;
}