//
// Created by Worth Lix on 2023/12/6 19:14.
//
#include <iostream>
#include <cmath>

using namespace std;

int map[10000000] = {};
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    long long cache;
    cin >> cache;
    if(cache % 7 < 0){
      map[i] = 7+(cache % 7);
    }else{
      map[i] = cache % 7;
    }
  }

  int max = 0;
  int count = 0;

  for (int i = 0; i < n; ++i) {
    if (map[i] >= 1 && map[i] <= 6 && map[i] != 4) {
      count++;
    } else {
      if (count > max) {
        max = count;
      }
      count = 0;
    }
  }
  cout << max << endl;
  return 0;
}