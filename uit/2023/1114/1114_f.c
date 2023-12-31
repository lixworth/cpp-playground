//
// Created by Worth Lix on 2023/11/14 19:42.
//
#include <stdio.h>
#include <math.h>

int main() {
  int n;
  scanf("%d",&n);

  int a = n*n;

  int result[1000][1000] = {};
  int index[1000] = {};
  int b = 1;
  int b_lock = 1;
  for (int i = 1; i <= a; ++i) {
    // 1:1/
    // 2:1/3:2/4:3/ 5:2/6:1  |  /7:1/8:2/9:3/10:4/ | 11:4 / 12:3
    if(i == 1){
      result[1][1] = 1;
      index[1] = 1;
    }else if(i <= (a-n)/2){
      result[b][++index[b]] = i;
      if(b == 1){
        if(b_lock){
          b++;
          b_lock = 0;
        }else{
          b_lock = 1;
        }
      }
      if(index[b] == 1){
        b++;
      }
    }
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j < n; ++j) {
      printf("%d ",result[i][j]);
    }
    printf("\n");
  }
  return 0;
}

/*
 * 1 2 6 7 15
 * 3 5 8 14
 * 4 9 13
 * 10 12
 * 11
 * */