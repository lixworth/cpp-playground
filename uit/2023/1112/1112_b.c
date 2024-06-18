//
// Created by Worth Lix on 2023/11/12 19:08.
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { return *(int *)b - *(int *)a; }

int main(){
  int n;
  scanf("%d",&n);
  int map[1000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d",&map[i]);
  }

  int result = 0;
  for (int i = 0; i < n; ++i) {
    qsort(map,n,sizeof(int),cmp);
    result+=map[0]*map[1];
    map[0] = map[0]+map[1];
    map[1] = 0;
  }

  printf("%d",result);
  return 0;
}