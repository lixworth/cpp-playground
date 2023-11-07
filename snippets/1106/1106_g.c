//
// Created by Worth Lix on 2023/11/6 20:31.
//
#include <stdio.h>

int main(){
  int l,r;
  scanf("%d %d",&l,&r);
  int i = 1;
  int count = 0;
  for (int j = l; j <= r; ++j) {
    if(j > i*10){
      i*=10;
    }
    if(j%i == 2){
      count++;
    }
  }
  return 0;
}