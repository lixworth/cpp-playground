//
// Created by Worth Lix on 2023/12/5 19:17.
//
#include <iostream>
#include <algorithm>
#include <cmath>

int map[1000];
using namespace std;
int main() {
  int n, x;
  cin >> n >> x;

  for (int i = 0; i < n; ++i) {
    cin >> map[i];
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        if((map[i]*x*x+map[j]*x+map[k]) == 0){
          cout << "YES";
          return 0;
        }
      }
    }
  }
  cout << "NO";
  return 0;
}