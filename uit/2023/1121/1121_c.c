//
// Created by Worth Lix on 2023/11/21 20:38.
//
#include <stdio.h>

int main() {
  int M,N;
  scanf("%d%d",&M,&N);
  float score[100000] = {};
  float time[100000] = {};
  for (int i = 0; i < N; ++i) {
    scanf("%f%f",&score[i],&time[i]);
    printf("%f\n",score[i]/time[i]);
  }

  return 0; }