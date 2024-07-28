//
// Created by Worth Lix on 2023/11/13 19:25.
//

#include <stdio.h>

int main() {
  long long t;
  scanf("%lld", &t);
  while (t--) {
    long long number;
    scanf("%lld", &number);
    long long min = 0;
    long long max = 0;
    long long result = 1;

    int flag = 0;
    for (long long i = 0; i < number; ++i) {
      long long input;
      scanf("%lld", &input);
      if(!flag){
        if(input == max || input == min){
          flag = 1;
        }
      }
      result += input;
      if (i == 0) {
        min = input;
        max = input;
        continue;
      }
      if (input < min) {
        min = input;
      }

      if (input > max) {
        max = input;
      }

    }

    if (min == max) {
      printf("%lld\n", result - 1 - min -  ,max);
    } else {
      if(flag){
        printf("%lld\n", result - 1- min - max);
      }else{
        printf("%lld\n", result - min - max);
      }
    }
  }
  return 0;
}