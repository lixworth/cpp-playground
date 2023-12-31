//
// Created by Worth Lix on 2023/11/12 19:24.
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
  return *(int*)a - *(int*)b; //由小到大排序
}

int main() {
  long long n;
  long long x;
  long long boss[1000000];
  scanf("%lld%lld", &n, &x);
  long long max = 0;
  for (long long i = 0; i < n; i++) {
    scanf("%lld", &boss[i]);
    max += boss[i];
  }

  long long mp = 0;
  long long pj = max / n;

  long long min = 0;
  long long max_data = 0;
  for (long long i = 0; i < n; ++i) {
    if (boss[i] > pj) {
      mp += boss[i] - pj;
      boss[i] = pj;
    }
    if(boss[i] > max_data){
      max_data = boss[i];
    }
  }

  if(n*max_data < max){
    printf("%lld",n*max_data);
  }else{
    for (long long i = 0; i < n; ++i) {
      if (boss[i] > min) {
        min = boss[i];
      }
    }
    if (min * x < max - mp) {
      mp += min * x;
    } else {
      mp += max - mp;
    }
    printf("%lld", mp);
  }

  return 0;
}