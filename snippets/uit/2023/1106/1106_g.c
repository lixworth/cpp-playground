//
// Created by Worth Lix on 2023/11/6 20:31.
//
#include <stdio.h>

int main(){
  int l,r;
  scanf("%d %d",&l,&r);
  int count = 0;
  for (int j = l; j <= r; ++j) {
    int tmp = j;
    while (tmp){
      if(tmp%10 == 2){
        count++;
      }
      tmp/=10;
    }
  }
  printf("%d",count);
  return 0;
}