//
// Created by Worth Lix on 2023/11/20 19:02.
//
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b; // 由小到大排序
}
int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  int result = a*b;

  int rm[1000000] = {};
  int rm_index = 0;
  rm[++rm_index] = a;
  for (int i = 1; i < a; ++i) {
    if(a%i == 0){
      rm[++rm_index] = i;
      rm[++rm_index] = result/i;
    }
  }
  rm[++rm_index] = b;
  for (int i = 1; i < b; ++i) {
    if(b%i == 0){
      rm[++rm_index] = i;
      rm[++rm_index] = result/i;
    }
  }
  qsort(rm,rm_index,sizeof(int),cmp);

  int rm_clear[2000000] = {};
  int rm_ci = 0;
  int now = 0;
  for (int i = 0; i < rm_index; ++i) {
    if(rm[i] != now){
      rm_clear[++rm_ci] = rm[i];
      now = rm[i];
    }
  }

  printf("%d\n",rm_ci);
  for (int i = 1; i <= rm_ci; ++i) {
    printf("%d ",rm_clear[i]);
  }
  return 0;
}