//
// Created by Worth Lix on 2023/11/8 19:23.
//
#include <stdio.h>

int main() {
  int n, m, k;
  scanf("%d%d%d\n", &n, &m, &k);
  int a[100000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  int number[100000] = {};
  for (int i = 0; i < n; ++i) {
    number[a[i]]++;
  }

  int max = 0;
  for (int i = 1; i <= m; i++) {
    if(number[i] > max){
      max = number[i];
    }
  }
  if(n-k < max){
    printf("%d",n-k);
  }else {
    printf("%d", max);
  }
  return 0;
}