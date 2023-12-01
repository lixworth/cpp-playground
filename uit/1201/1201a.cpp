//
// Created by Worth Lix on 2023/12/1 20:55.
//
#include <iostream>
long long map[1000000] = {};

using namespace std;
int main() {
  long long t, sum = 0;
  cin >> t;
  for (long long i = 1; i <= t; ++i) {
    cin >> map[i];
  }

  for (long long i = t; i >= 1; --i) {
    if (map[i] < 0) {
      sum += map[i] * i;
    } else{
      sum += map[i];
    }
  }
  cout << sum;
  return 0;
]