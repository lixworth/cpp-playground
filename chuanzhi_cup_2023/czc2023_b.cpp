//
// Created by Worth Lix on 2023/11/26 15:34.
//
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int map[1000000] = {};
  for (int i = 0; i < n; ++i) {
    cin >> map[i];
  }

  sort(map,map+n);

  int small[10000] = {};
  for (int i = 0; i < n-1; ++i) {
    small[i] = abs(map[i]-map[i+1]);
  }
  sort(small,small+n-1);

  cout << small[0] << endl;
  return 0;
}