//
// Created by Worth Lix on 2023/11/5 19:19.
//
#include <cstdio>

int main(){
  int count;
  scanf("%d",&count);
  char *history[] = {};
  for (int i = 0; i < count; ++i) {
    scanf("%s %s",&history[0],&history[1]);
  }
  for (int i = 0; i < 2; ++i) {
    printf("%s",history[i]);
  }
  return 0;
}