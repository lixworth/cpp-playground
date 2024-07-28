//
// Created by Worth Lix on 2023/11/26 15:55.
//
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
  int n;
  cin >> n;

  int map[100] = {};

  for (int i = 0; i < n; ++i) {
    cin >> map[i];
  }

  sort(map,map+n,greater<int>());
  int history[100] = {};
  for (int i = 0; i < n; ++i) {
    int tmp;
    for (int j = 2; j < n; ++j) {
      if(map[i]%j == 0){
        tmp = j;
        int check = 0;
        for (int k = 0; k < n; ++k) {
          if(k != i){
            if(map[i]%j == 0){
              check = 1;
              break;
            }
          }
        }
        if(check)
          continue;
        history[i] = j;
        cout << map[i] << j << endl;
      }
    }
  }

  int result = 0;
  for (int i = 0; i < n; ++i) {
    cout << history[i] << endl;
    if(history[i] == 0){
      cout << -1 << endl;
      return 0;
    }else{
      result+=history[i];
    }
  }

  cout << result << endl;
  return 0;
}