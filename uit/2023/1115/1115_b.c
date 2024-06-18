//
// Created by Worth Lix on 2023/11/15 19:04.
//
#include <stdio.h>

int main() {
  int n,m;
  scanf("%d%d",&n,&m);

  int map[1000][1000] = {};
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d",&map[i][j]);
    }
  }
  int a1 = 0,a2 = 0;

  for (int i = 0; i < n; ++i) {
    int tmp_a = 0;
    int tmp_b = 0;
    for (int j = 0; j < m; ++j) {
      if(map[i][j] == 1){
        tmp_a++;
        if(tmp_a == 5){
          a1++;
          tmp_a = 0;
        }
      }else{
        tmp_a = 0;
      }
      if(map[i][j] == 2){
        tmp_b++;
        if(tmp_b == 5){
          a2++;
          tmp_b = 0;
        }
      }else{
        tmp_b = 0;
      }
    }
  }

  printf("%d %d",a1,a2);
  return 0;
}