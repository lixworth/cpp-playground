//
// Created by Worth Lix on 2023/11/9 19:25.
//
#include <stdio.h>

int main(){
  int n;
  scanf("%d\n",&n);

  char data[1000][1000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%s",&data[i]);
  }
  for (int i = 0; i < n; ++i) {
    for (int j = n-1; j >= 0; --j) {
      printf("%c", data[j][i]);
    }
    printf("\n");
  }
  return 0;
}