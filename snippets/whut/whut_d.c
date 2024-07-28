//
// Created by Worth Lix on 2023/11/12 12:37.
//
#include <stdio.h>

int main(){
  int x;
  scanf("%d\n",&x);
  double scores[1000][1000] = {};
  for (int i = 0; i < x; ++i) {
    scanf("%lf %lf",&scores[i][0],&scores[i][1]);
  }

  double all = 0;
  double andh = 0;

  for (int i = 0; i < x; ++i) {
    andh+=scores[i][0] * scores[i][1];
    all+=scores[i][0];
  }
  printf("%.6lf",andh/all);
  return 0;
}