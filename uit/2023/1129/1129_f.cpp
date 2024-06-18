//
// Created by Worth Lix on 2023/11/29 20:00.
//
#include <iostream>
using namespace std;

int a[10000];
int b[10000];
int map[10000][10000];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }

  int tick = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if ((a[i] ^ b[j]) == (a[j] ^ b[i])) {
        tick++;
      }
    }
  }

  cout << tick << endl;
  return 0;
}