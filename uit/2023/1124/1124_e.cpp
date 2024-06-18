//
// Created by Worth Lix on 2023/11/24 19:49.
//
#include <iostream>

using namespace std;

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << ((a < c ? a : c) * (b < d ? b : d)) << endl;
  return 0;
}