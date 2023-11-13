//
// Created by Worth Lix on 2023/11/12 19:01.
//
#include <stdio.h>

long long min(long long s,long long b){
  return s< b ? s : b;
}
int main() {
  int n;
  scanf("%d\n", &n);
  long long a[50001] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &a[i]);
  }

  long long b[50001] = {};
  for (int i = 0; i < n-1; ++i) {
    b[i] = min(a[i],a[i+1]);
    printf("%lld",b[i]);
  }
  int max = 0;

  for (int i = 0; i < n-1; ++i) {
    for (int j = i+1; j < n; ++j) {
      if(min(b[i],b[j])*(j-i) > max){
        max = min(b[i],b[j])*(j-i);
      }
    }
  }

  printf("%d",max);
  return 0;
}