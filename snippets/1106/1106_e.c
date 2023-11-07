//
// Created by Worth Lix on 2023/11/6 19:57.
//
#include <stdio.h>

// 没看懂
int main() {
  int n, m;
  scanf("%d %d\n", &n, &m);
  int a[100000], b[100000];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }
  b[1] = a[1];
  for (int i = 1; i <= n; i++) {
    b[i + 1] = b[i] + a[i + 1];
  }
  while (m--) {
    int l, r;
    scanf("%d %d", &l, &r);
    printf("%d\n", b[r] - b[l - 1]);
  }
  return 0;
}