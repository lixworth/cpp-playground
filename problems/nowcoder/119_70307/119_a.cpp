//
// Created by Worth Lix on 2023/11/24 20:20.
//
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<long long> map;
  long long p, A, n;
  cin >> map[1] >> map[2] >> p >> A >> n;

  for (long long i = 1; i <= n; ++i) {
    if (i <= 2) {
      cout << map[i] << " ";
    } else {
      map[i] = floor(log2(fmod(pow(map[i - 1], map[i - 2]), p) + 1)) + A;
      cout << map[i] << " ";
    }
  }
  return 0;
}