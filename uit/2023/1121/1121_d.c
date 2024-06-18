//
// Created by Worth Lix on 2023/11/21 19:04.
//
#include <math.h>
#include <stdio.h>

int main() {
  int n;
  while (scanf("%d",&n) != EOF){
    if(n == 0){
      printf("0\n");
    }else{
      printf("%d\n",3*n-1);
    }
  }
}