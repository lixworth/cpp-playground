//
// Created by Worth Lix on 2023/12/7 19:01.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << 2 * a * b + 2 * b * c + 2 * a * c << endl;
  cout << a * b * c << endl;
  return 0;
}