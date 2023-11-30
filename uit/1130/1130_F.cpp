//
// Created by Worth Lix on 2023/11/30 19:46.
//
#include <iostream>

using namespace std;
long long map[1000] = {};
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> map[i];
  }

  int count = 0;
  int max = 0;
  int result = 0;

  int is_start = 1;
  for (int i = 0; i < n; ++i) {
    if (map[i] + 1 == map[i + 1]) {
      count++;
    } else {
      if (count + 1 > max) {
        if (is_start) {
          result = count;
        } else {
          if (i == n-1) {
            result = count;
          } else {
            result = count - 1;
          }
        }
        if (result > max) {
          max = result;
        }
      }
      count = 0;
    }
    if(is_start){
      is_start = 0;
    }
  }
  cout << result << endl;
  return 0;
}