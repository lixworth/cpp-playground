//
// Created by Worth Lix on 2023/11/6 19:02.
//
#include <stdio.h>
#include <math.h>

int main() {
  double input;
  scanf("%lf\n", &input);
  long long init = 1;
  long long all = 1;
  while (1){
    // 0.008
    if(
        // 4
        // 0.004XXXXX
        (fabs(((double)init / (double)all) * 100 - input) < 0.009 &&
         fabs(((double)init / (double)all) * 100 - input) < 0.005) ||
        // 5 0.01xxxx
        (fabs(((double)init / (double)all) * 100 - input) >= 0.01 &&
         fabs(((double)init / (double)all) * 100 - input) < 0.02 &&
         fabs(((double)init / (double)all) * 100 - (input-0.01)) >= 0.005)){
      break;
    }else{
      if (((double)init / (double)all) * 100 < input) {
        init++;
      } else {
        all++;
      }
    }
  }
  printf("%lld\n", init);
  printf("%lld", all);
  return 0;
}