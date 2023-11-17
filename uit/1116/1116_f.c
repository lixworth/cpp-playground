//
// Created by Worth Lix on 2023/11/16 19:15.
//
#include <stdio.h>
#include <math.h>

int main() {
  long long n;
  scanf("%lld", &n);
  while (n--) {
    long long l, r, k;
    scanf("%lld%lld%lld", &l, &r, &k);
    if(k == 0){
      if((l-r+1)%2 == 0){
        printf("0\n");
      }else{
        printf("1\n");
      }
    }else{
      long long result = 0;
      for (long long i = 0; i <= r - l; ++i) {
       if((l + i)%2 != 0){
         result++;
       }
      }
      printf("%lld\n", result % 2);
    }
  }
  return 0;
}