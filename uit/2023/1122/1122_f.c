//
// Created by Worth Lix on 2023/11/22 20:28.
//
#include <stdio.h>

int main() {
  long long n,m,u;
  scanf("%lld%lld%lld",&n,&m,&u);

  long long a[100000] = {};
  long long b[100000] = {};

  for (long long i = 0; i < n; ++i) {
    scanf("%lld",&a[i]);
  }
  for (long long i = 0; i < n; ++i) {
    scanf("%lld",&b[i]);
  }

  long long count = 0;
  long long max = 0;
  long long mz = m; // naijiu
  long long sw = 0; // shengwang
  for (long long  i = 0; i < n; ++i) {
    mz-=a[i];
    sw+=b[i];
    if(mz < 0){
      count = 1;
      mz = m-a[i];
      sw = b[i];
      continue;
    }
    if(sw > u){
      count = 1;
      mz = m-a[i];
      sw = b[i];
      continue;
    }
    count++;
    if(count > max){
      max = count;
    }
  }
  printf("%lld",max);
  return 0;
}