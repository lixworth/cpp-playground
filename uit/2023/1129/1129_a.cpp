//
// Created by Worth Lix on 2023/11/29 19:02.
//
#include <iostream>
#include <cmath>

int map[1000][1000] = {};

using namespace std;
int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> map[i][j];
    }
  }

  for (int i = 0; i < n; i = i + 2) { // n=4 m=2
    for (int j = 0; j < m; j = j + 2) {
      cout << floor((map[i][j] + map[i][j + 1] + map[i + 1][j] +
                     map[i + 1][j + 1]) /
                    4)
           << " ";
    }
    cout << endl;
  }

  /*
   *
0 1 2 3

1 5 1 5
3 3 3 3
6 6 3 3
6 6 3 3
   */
  return 0;
}