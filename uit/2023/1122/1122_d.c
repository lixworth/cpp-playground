//
// Created by Worth Lix on 2023/11/22 19:49.
//
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  while (n--){
    int x;
    scanf("%d",&x);
    long long result = 0;
    int f = (x-1)/2;
    int s = f;
    int count = 0;
    int flag = 0;
    for (long long i = 1; i <=x*x ; ++i) {
      count++;
      if(flag){
        if(count > f+1) {
          if(x-count >= s){
            result+=i;
          }
        }else{
          if(count > s){
            result+=i;
          }
        }
        if(count == x){
          count = 0;
          s++;
        }
      }else{
        if(s < 0){
          s = 1;
          flag = 1;
        }else{
          if(count > f+1){
            if(x-count >= s){
              result+=i;
            }
          }else{
            if(count > s){
              result+=i;
            }
          }
          if(count == x){
            count = 0;
            s--;
          }
        }
      }
    }
    printf("%lld\n",result);
  }
  return 0;
}