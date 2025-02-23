//
// Created by Worth Lix on 2023/11/21 19:08.
//
#include <stdio.h>

int main() {
  int a,b;
  scanf("%d%d",&a,&b);

  int na,nb,nc;
  nc=a%10;
  a/=10;
  nb=a%10;
  a/=10;
  na=a%10;

  nc+=b%10;
  b/=10;
  nb+=b%10;
  b/=10;
  na+=b%10;
  if(na >= 3){
    na -=3;
  }
  if(nb >= 3){
    nb -=3;
  }
  if(nc >= 3){
    nc -=3;
  }
  printf("%d%d%d",na,nb,nc);
  return 0;
}