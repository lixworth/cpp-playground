//
// Created by Worth Lix on 2023/11/7 19:02.
//
#include <stdio.h>

int main(){
  int n,k;
  int a=0;
  scanf("%d%d\n",&n,&k);
  for (int i = 0; i < k; ++i) {
    int j = k-1;
    int x = i-1;
    int y = j+1;
    int sum=x*y;
    printf("%d",sum);
    a = a > sum ? a : sum;
  }
  printf("%f",n*n*1.0/a);
  return 0;
}