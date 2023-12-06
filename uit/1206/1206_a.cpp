//
// Created by Worth Lix on 2023/12/6 19:50.
//
#include <iostream>
#include <algorithm>

using namespace std;

int map[200000] = {};
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n = 0, x = 0, y = 0;
    cin >> n >> x >> y;
    double count = 0;
    for (int i = 0; i < n; ++i) {
      cin >> map[i];
      count += map[i];
    }
    sort(map, map + n);

    double a1 = map[n - 1] - y <= 0 ? map[n - 1] : y;
    double a2 = map[n - 1] * (1 - x * 0.01);
    double b1 = map[n - 2] - y <= 0 ? map[n - 2] : y;
    double b2 = map[n - 2] * (1 - x * 0.01);

    double c1 = a1 + b2;
    double c2 = a2 + b1;

    double max = c1 > c2 ? c1 : c2;
    cout << count - max << endl;
  }
  return 0;
}