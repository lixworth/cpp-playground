//
// Created by Worth Lix on 2023/11/17 20:18.
//
#include <stdio.h>
#include <math.h>

int main() {
  char input;

  long long l = 0, r = 0;

  long long count = 0;
  while ((input = getchar()) != EOF) {
    if (input == '(') {
      l++;
    } else if (input == ')') {
      r++;
    } else {
      continue;
    }
    if (l < r) {
      printf("%d\n", -1);
      return 0;
    } else if (l == r) {
      count++;
    }
  }
  long long result = 1;
  for (long long i = 1; i < count; ++i) {
    result=(result*2)%1000000007;
  }
  printf("%lld", result);
  return 0;
}