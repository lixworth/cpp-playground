//
// Created by Worth Lix on 2023/11/8 19:46.
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b) {
  return *(int *)a - *(int *)b;
}
int main() {
  int n,k;
  scanf("%d%d\n",&n,&k);
  int numbers[100000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d",&numbers[i]);
  }
  qsort(numbers,n,sizeof(int), cmp);
  printf("%d",numbers[k-1]);
  return 0;
}