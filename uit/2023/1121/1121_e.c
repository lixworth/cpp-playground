//
// Created by Worth Lix on 2023/11/21 19:17.
//
#include <stdlib.h>
#include <stdio.h>

int cmp(const void *a, const void *b) {
  return *(int *)b - *(int *)a; // 由大到小排序
}
int main() {
  int n;
  scanf("%d",&n);
  int map[10] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d",&map[i]);
  }
  qsort(map,n,sizeof(int),cmp);

  if(map[n-1] != 0){
    printf("-1");
  }else{
    for (int i = 0; i < n; ++i) {
      printf("%d",map[i]);
    }
  }
  return 0;
}