//
// Created by Worth Lix on 2023/12/6 19:08.
//

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 0; i <= n / 5; ++i) {
    for (int j = 0; j <= n / 2; ++j) {
      for (int k = 0; k <= n; ++k) {
        if (i * 5 + j * 2 + k == n) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}