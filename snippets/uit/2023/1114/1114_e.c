//
// Created by Worth Lix on 2023/11/14 20:08.
//
#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);


  if(c >= b){
    printf("-1");
  }else{
    int day = 0;
    while (a>0){
      a-=(b-c);
      day++;
    }
    printf("%d",day);
  }
  return 0;
}