//
// Created by Worth Lix on 2023/11/15 19:56.
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
  return *(int*)a - *(int*)b;
}

int main() {
  int n;
  scanf("%d", &n);
  int numbers[100000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d", &numbers[i]);
  }
  qsort(numbers, n, sizeof(int), cmp);

  int tmp = 0;
  int index = 0;
//  int result[10000] = {};
  int map[100000] = {};
  int map_index = 0;
  int lock = 0;
  for (int i = 0; i < n; ++i) {
    if(numbers[i] == tmp+1){
      map[map_index] = numbers[i];
      map_index++;
      tmp = numbers[i];
    }else{
      for (int j = tmp+1; j < numbers[i]; ++j) {
        map[map_index] = 0;
        map_index++;
      }
      map[map_index] = numbers[i];
      map_index++;
      tmp = numbers[i];
    }
  }
  for (int i = 0; i < map_index; ++i) {
    printf("%d",map[i]);
  }
  return 0;
}