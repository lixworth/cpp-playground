//
// Created by Worth Lix on 2023/11/24 22:53.
//
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int map[10000] = {};
    int result = 0;
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; ++i) {
      cin >> map[i];
      if(min == 0){
        min = map[0];
      }
      if(map[i] < min){
        min = map[i];
      }
      if (map[i] > max) {
        max = map[i];
      }
    }
    for (int i = 0; i < max; ++i) {

    }
    cout << result << endl;
  }
  return 0;
}