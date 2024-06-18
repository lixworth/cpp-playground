//
// Created by Worth Lix on 2023/11/20 19:18.
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b; // 由小到大排序
}
int main() {
  int n,x;
  scanf("%d%d",&n,&x); // 集训队人数和小辰的实力值
  int map[1000] = {};
  int a = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d",&map[i]);
  }

  qsort(map,n,sizeof(int),cmp);

  for (int i = 0; i < n; ++i) {
    if(map[i] < x){
      a+=map[i];
    }else{
      break;
    }
  }

  printf("%d",a);
  return 0;
}