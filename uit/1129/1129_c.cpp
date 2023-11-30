//
// Created by Worth Lix on 2023/11/29 19:28.
//
#include <iostream>

using namespace std;

int map[100000] = {};

int main() {
  int n, m;
  cin >> n >> m;

  map[1] = 1;
  map[2] = 4;
  for (int i = 3; i <= n; ++i) {
    map[i] = (map[i - 1] * 2 + 2)%1000000007;
  }
  while (m--) {
    int x, y;
    cin >> x >> y;
    long long result = 0;
    for (int i = x; i <= y; ++i) {
      result += map[i];
      result = result % 1000000007;
    }
    cout << result << endl;
  }
  return 0;
}