//
// Created by Worth Lix on 2023/11/6 19:02.
//
#include <stdio.h>

int main(){
  int n;
  scanf("%d\n",&n);
  for (int i = 1; i <= n; ++i) {
    int m =0;
    int j = i;
    while (j != 0){
      m=m*10+j%10;
      j=j/10;
    }
    if(i == m){
      printf("%d\n",i);
    }
  }
  return 0;
}