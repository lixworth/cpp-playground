//
// Created by Worth Lix on 2023/11/15 19:06.
//
#include <stdio.h>

int main() {
  int n,m;
  scanf("%d%d",&n,&m);
  int h[10000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d",&h[i]);
  }
  while (m--){
    int input;
    scanf("%d",&input);

    int tmp[10000] = {};
    for (int i = 0; i < n; ++i) {
      if(h[i] <= input){
        tmp[i] = 0;
      }else{
        tmp[i] = h[i];
      }
    }

    int count = 0;
    int is_not_zero = 0;
    for (int i = 0; i < n+1; ++i) {
      if(is_not_zero){
        if(tmp[i] == 0){
          count++;
          is_not_zero = 0;
        }
      }else{
        if(tmp[i] != 0){
          is_not_zero = 1;
        }
      }
    }
    printf("%d\n",count);
  }
  return 0;
}