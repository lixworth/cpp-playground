//
// Created by Worth Lix on 2023/11/7 19:02.
//
#include <stdio.h>

int main() {
  long long n, m, k;
  scanf("%lld%lld%lld\n", &n, &m, &k);
  long long data[2000000] = {};
  for (long long i = 0; i < n; ++i) {
    scanf("%lld", &data[i]);
  }

  for (long long i = 0; i < n - 1; ++i) {
    for (long long j = 0; j < n - i - 1; ++j) {
      if (data[j] > data[j + 1]) {
        long long tmp = data[j + 1];
        data[j + 1] = data[j];
        data[j] = tmp;
      }
    }
  }

  long long input;
  long long first = 1;
  while (scanf("%lld", &input) != EOF) { // 1 1
    if (first) {
      if (input == 2) {
       printf("%lld\n", data[k - 1] ? data[k - 1] : -1);
        first = 1;
      } else {
        first = 0;
      }
    } else {
      if(input >= data[n-1]){
        data[n] = input;
        n++;
      }else{
        for (long long i = 0; i < n; ++i) {
          if (input >= data[i] && input < data[i + 1]) {
            for (long long j = n; j > i; j--) {
              data[j] = data[j - 1];
            }
            data[i + 1] = input;
            break;
          }
        }
      }
      first = 1;
    }
  }
  return 0;
}