//
// Created by Worth Lix on 2023/11/24 22:39.
//
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--){
    int n,x;
    cin >> n >> x;
    int map[1000] = {};
    for (int i = 0; i < n; ++i) {
      cin >> map[i];
    }
    int min_oil = map[0];
    for (int i = 1; i < n; ++i) {
      if(map[i] - map[i-1] > min_oil){
        min_oil = map[i] - map[i-1];
      }
    }

    if(2*(x-map[n-1]) > min_oil){
      min_oil = 2*(x-map[n-1]);
    }

    cout << min_oil << endl;
  }
  return 0;
}