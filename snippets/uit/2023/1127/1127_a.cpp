//
// Created by Worth Lix on 2023/11/27 19:24.
//
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long map[1000] = {};
  for (int i = 0; i < n; ++i) {
    cin >> map[i];
  }

  if(map[0] == 0){
    map[0] = 1;
  }
  for (int i = 1; i < n; ++i) {
    if(map[i] == 0){
      map[i] = map[i-1]+1;
    }
  }

  long long result = 0;
  for (int i = 0; i < n; ++i) {
    if(i != n-1){
      if(map[i] >= map[i+1]){
        cout << -1 << endl;
        return 0;
      }
    }
    result+=map[i];
  }

  cout << result << endl;
  return 0;
}