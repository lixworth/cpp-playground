//
// Created by Worth Lix on 2023/11/6 19:02.
//
#include <stdio.h>
#include <math.h>

int main() {
  double input;
  scanf("%lf\n", &input);
  int stop = 0;
  for (long long i = 1; i < 1000000; ++i) {
    if(stop) break;
    for (long long j = 1; j < i; ++j) {
      double c = 1.0*j/i-input*0.01;
        if(fabs(c) < 0.00005){ // 俩位小数说的是转换为百分数后的俩位小数
//        printf("%lld",j);
        printf("%lld",i);
        stop = 1;
        break;
      }
    }
  }
  return 0;
}