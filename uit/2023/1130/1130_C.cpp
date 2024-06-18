//
// Created by Worth Lix on 2023/11/30 19:23.
//
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  long long n;
  cin >> n;
  if (n == 1) {
    cout << 2 << endl;
  } else {
    cout << n+n-1 << endl;
  }
  return 0;
}