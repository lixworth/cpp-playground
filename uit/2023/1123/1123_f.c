//
// Created by Worth Lix on 2023/11/23 19:36.
//
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int map[1000000] = {};
  int b[1000000] = {};
  for (int i = 1; i <= n; ++i) {
    scanf("%d",&map[i]);
    if(i > 1){
      if(map[i] <= map[i-1]){
        printf("No");
        return 0;
      }
    }
  }

  for (int i = 1; i <= n-1; ++i) {
    b[i] = map[i+1]-map[i];
    if(i == 1)
      continue;
    if(b[i] >= b[i-1]){
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}